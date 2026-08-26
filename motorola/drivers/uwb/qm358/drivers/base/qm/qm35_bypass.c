/*
 * This file is part of the UWB stack for linux.
 *
 * Copyright (c) 2020-2021 Qorvo US, Inc.
 *
 * This software is provided under the GNU General Public License, version 2
 * (GPLv2), as well as under a Qorvo commercial license.
 *
 * You may choose to use this software under the terms of the GPLv2 License,
 * version 2 ("GPLv2"), as published by the Free Software Foundation.
 * You should have received a copy of the GPLv2 along with this program.  If
 * not, see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed under the GPLv2 in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GPLv2 for more
 * details.
 *
 * If you cannot meet the requirements of the GPLv2, you may not use this
 * software for any purpose without first obtaining a commercial license from
 * Qorvo. Please contact Qorvo to inquire about licensing terms.
 */
#include <linux/device.h>
#include <linux/err.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/slab.h>
#include <linux/uaccess.h>

#include "qm35_ids.h"
#include "qm35_bypass.h"
#include "qm35_transport.h"
#include "qm35_trc.h"

static inline int qm35_bypass_check(struct qm35_bypass *bypass)
{
	/* Check bypass is opened */
	if (!bypass->opened)
		return -EBADF;
	/* Check if the current caller thread is the same group that the one
	 * that opened the bypass channel. */
	if (bypass->owner != current->tgid)
		return -EPERM;
	return 0;
}

/**
 * qm35_bypass_event_cb() - Receive event transport handler callback.
 * @data: Pointer to bypass structure given at registration time.
 * @skb: Received packet to handle.
 *
 * When bypass is opened, this handler is registered to receive the expected
 * packet type. This remove the need to check if packet need to be handled
 * or not by the bypass. It will.
 */
void qm35_bypass_event_cb(void *data, struct sk_buff *skb)
{
	qm35_bypass_handle hnd = (qm35_bypass_handle)data;
	enum qm35_bypass_events bypass_event = QM35_BYPASS_IRQ;

	/* Sanity check received packet type. */
	if (skb->cb[0] != hnd->expected_type) {
		kfree_skb(skb);
		return;
	}

	/* Add packet to the list of received packets. */
	spin_lock(&hnd->lock);
	list_add_tail(&skb->list, &hnd->packets);
	spin_unlock(&hnd->lock);

	/* Call registered listener.
	 * Will in turn call qm35_bypass_recv() which will
	 * return this stored packet and free it. */
	hnd->listener(hnd->listener_data, bypass_event);
}

/**
 * qm35_bypass_set_expected() - Update expected_type and associated transport handler.
 * @hnd: The bypass channel handle to configure.
 * @expected: The new expected packets type to handle.
 *
 * This function is called when the /dev/uciX special file is opened or ioctl called.
 *
 * Context: User context.
 */
static void qm35_bypass_set_expected(qm35_bypass_handle hnd,
				     enum qm35_transport_msg_type expected)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);

	if (expected == hnd->expected_type)
		return;
	if (hnd->expected_type != QM35_TRANSPORT_MSG_MAX) {
		/* Remove previous type handler. */
		qm35_transport_unregister(qm35, hnd->expected_type,
					  QM35_TRANSPORT_PRIO_HIGH,
					  qm35_bypass_event_cb);
	}
	/* Install handler for current expected type. */
	qm35_transport_register(qm35, expected, QM35_TRANSPORT_PRIO_HIGH,
				qm35_bypass_event_cb, hnd);
	/* Save new expected type. */
	hnd->expected_type = expected;
}

static int qm35_bypass_cleanup_hnd(qm35_bypass_handle hnd)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);
	struct sk_buff *p, *n;
	int rc = 0;

	/* Remove previous registered handler. */
	if (hnd->expected_type != QM35_TRANSPORT_MSG_MAX) {
		qm35_transport_unregister(qm35, hnd->expected_type,
					  QM35_TRANSPORT_PRIO_HIGH,
					  qm35_bypass_event_cb);
	}
	/* Free all remaining packet in list. */
	list_for_each_entry_safe (p, n, &hnd->packets, list) {
		list_del(&p->list);
		kfree_skb(p);
		rc++;
	}
	/* Reset fields. */
	module_put(THIS_MODULE);
	hnd->expected_type = QM35_TRANSPORT_MSG_MAX;
	hnd->listener = NULL;
	hnd->listener_data = NULL;
	return rc;
}

static int qm35_bypass_cleanup(struct qm35_bypass *bypass)
{
	int rc;

	rc = qm35_bypass_cleanup_hnd(&bypass->chan);

	/* Reset fields. */
	bypass->opened = false;
	bypass->owner = 0;
	return rc;
}

/**
 * qm35_bypass_open() - Open a bypass channel.
 * @qm35: The QM35 instance on which the new bypass channel connects.
 * @cb: Callback function called when an event occurs on the device.
 * @priv_data: Private data transmitted when @cb is called.
 *
 * This function is called when the ``/dev/uciX`` special file is opened.
 * It allows the QM35 UCI char dev driver to register its callback function
 * associated with its private data. This callback function is called when
 * an event occurs from the device and needs to be forwarded to the
 * ``/dev/uciX`` special file while bypass is opened.
 *
 * While the bypass channel is opened and configured for a specific type of
 * messages, all communication from other auxiliary modules which use the same
 * messages type are disabled.
 *
 * It will set ``qm35->bypass_data.opened`` to ``true`` and also reset the
 * ``qm35->bypass_data.expected_type`` to ``QM35_TRANSPORT_MSG_UCI``.
 *
 * The reference count of the module is incremented with ``try_module_get()``.
 *
 * It also calls the ``qm35_transport_start()`` to allow the transport module
 * to power-on the device if not yet started by other core sub-module.
 *
 * Context: User context.
 * Return: The bypass channel handle on success, else ERR_PTR(-EINVAL) if
 *  @qm35 or @cb are NULL, ERR_PTR(-EBUSY) if the bypass channel is already
 *  opened on this @qm35 instance.
 */
qm35_bypass_handle qm35_bypass_open(struct qm35 *qm35,
				    qm35_bypass_listener_cb cb, void *priv_data)
{
	struct qm35_bypass *bypass = &qm35->bypass_data;
	qm35_bypass_handle hnd = &bypass->chan;
	int rc = 0;

	trace_qm35_bypass_open(qm35, cb, priv_data);
	if (!qm35 || !cb) {
		rc = -EINVAL;
		goto error;
	}

	spin_lock(&bypass->lock);
	if (bypass->opened) {
		rc = -EBUSY;
		goto unlock;
	}

	if (!try_module_get(THIS_MODULE)) {
		rc = -ENOENT;
		goto unlock;
	}

	/* Init bypass handle (unique) */
	spin_lock_init(&hnd->lock);
	INIT_LIST_HEAD(&hnd->packets);
	hnd->listener = cb;
	hnd->listener_data = priv_data;
	hnd->expected_type = QM35_TRANSPORT_MSG_MAX;
	qm35_bypass_set_expected(hnd, QM35_TRANSPORT_MSG_UCI);

	bypass->owner = current->tgid;
	bypass->opened = true; /* Must stay after set of expected */
unlock:
	spin_unlock(&bypass->lock);
	if (rc)
		goto error;
	/* If opened without error, ensure the QM35 chip is started */
	rc = qm35_transport_start(qm35);
	if (rc < 0) {
		/* Rollback if error during start */
		spin_lock(&bypass->lock);
		qm35_bypass_cleanup(bypass);
		spin_unlock(&bypass->lock);
	}
error:
	trace_qm35_bypass_open_return(qm35, rc);
	return rc ? ERR_PTR(rc) : hnd;
}
EXPORT_SYMBOL(qm35_bypass_open);

/**
 * qm35_bypass_queue_check() - Returns the status of the bypass packet queue.
 * @hnd: The bypass channel handle.
 *
 * This function returns the status of the bypass packet queue of the passed
 * the bypass handle.
 *
 * Context: User context or kernel thread context.
 * Return: True if the packet list is not empty, false if it is empty. Else
 *  -EINVAL if @hnd is NULL.
 */
int qm35_bypass_queue_check(qm35_bypass_handle hnd)
{
	int rc;

	if (IS_ERR_OR_NULL(hnd))
		return -EINVAL;

	/* Check the bypass packet list to ensure there is something to read. */
	spin_lock(&hnd->lock);
	rc = !list_empty(&hnd->packets);
	spin_unlock(&hnd->lock);

	return rc;
}
EXPORT_SYMBOL(qm35_bypass_queue_check);

/**
 * qm35_bypass_close() - Close a bypass channel.
 * @hnd: The bypass channel handle.
 *
 * This function is called when the ``/dev/uciX`` special file is closed.
 *
 * It resets ``qm35->bypass_data.opened`` to ``false`` and decrease the module
 * reference count by calling ``module_put()``.
 *
 * It will also call ``qm35_transport_stop()`` to allow the transport module to
 * power-down the device if no other active user remains.
 *
 * Context: User context.
 * Return: Zero on success, else -EINVAL if @hnd is invalid, -EBADF if the
 * bypass channel is not opened, -EPERM if the current caller thread is not the
 * same one that opened the bypass channel.
 */
int qm35_bypass_close(qm35_bypass_handle hnd)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);
	struct qm35_bypass *bypass = &qm35->bypass_data;
	int rc = -EINVAL;

	trace_qm35_bypass_close(hnd ? qm35 : NULL);
	if (IS_ERR_OR_NULL(hnd))
		goto error;

	spin_lock(&bypass->lock);
	rc = qm35_bypass_check(bypass);
	if (rc)
		goto unlock;
	rc = qm35_bypass_cleanup(bypass);
	if (rc) {
		dev_warn(qm35->dev,
			 "Bypass closed while %d packet(s) remain in queue!\n",
			 rc);
		rc = 0; /* This isn't an error. */
	}
unlock:
	spin_unlock(&bypass->lock);
	if (rc)
		goto error;
	/* If closed without error, ensure the QM35 chip is stopped. */
	qm35_transport_stop(qm35);
error:
	trace_qm35_bypass_close_return(qm35, rc);
	return rc;
}
EXPORT_SYMBOL(qm35_bypass_close);

/**
 * qm35_bypass_control() - Control a bypass channel.
 * @hnd: The bypass channel handle.
 * @action: The action to perform on the QM35 instance.
 * @param: The action parameter if any.
 *
 * This function allow external module to interract with the core or the
 * transport modules.
 *
 * It currently support the following operations:
 *
 * 1. Reset the device.
 * 2. Launch FW update process.
 * 3. Configure the expected message type.
 * 4. Manually power-off the device.
 *
 * More actions may be added depending of needs. See ``enum qm35_bypass_actions``.
 *
 * This function is called when the /dev/uciX special file IOCTL api is used.
 *
 * Context: User context.
 * Return:
 * * Zero or positive value on success;
 * * -EINVAL if @qm35 or @param (when dereferenced by action) is NULL;
 * * -EBADF if the bypass channel is not opened;
 * * -EPERM if the current caller thread isn't authorized;
 * * -EOPNOTSUPP if unknown command.
 */
int qm35_bypass_control(qm35_bypass_handle hnd, enum qm35_bypass_actions action,
			long *param)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);
	struct qm35_bypass *bypass = &qm35->bypass_data;
	int rc = -EINVAL;

	trace_qm35_bypass_control(hnd ? qm35 : NULL, action, param);
	if (IS_ERR_OR_NULL(hnd))
		goto error;

	/* Do sanity checks */
	spin_lock(&bypass->lock);
	rc = qm35_bypass_check(bypass);
	spin_unlock(&bypass->lock);
	if (rc)
		goto error;

	/* Check that param can be dereferenced. */
	switch (action) {
	case QM35_BYPASS_ACTION_RESET:
	case QM35_BYPASS_ACTION_POWER:
		if (IS_ERR_OR_NULL(param)) {
			rc = -EINVAL;
			goto error;
		}
		break;
	default:
		break;
	}

	/* Now perform the requested action (outside critical section) */
	switch (action) {
	case QM35_BYPASS_ACTION_RESET:
		qm35_bypass_set_expected(hnd, QM35_TRANSPORT_MSG_UCI);
		rc = qm35_transport_reset(qm35, *param);
		break;
	case QM35_BYPASS_ACTION_MSG_TYPE:
		rc = hnd->expected_type;
		if (param)
			qm35_bypass_set_expected(hnd, *param);
		break;
	case QM35_BYPASS_ACTION_FWUPD:
		rc = qm35_transport_fw_update(qm35, NULL, 0, (char *)param);
		break;
	case QM35_BYPASS_ACTION_POWER:
		rc = qm35_transport_power(qm35, *param);
		break;
	default:
		dev_warn(qm35->dev, "Unsupported action %d\n", action);
		rc = -EOPNOTSUPP;
	}
error:
	trace_qm35_bypass_control_return(qm35, rc);
	return rc;
}
EXPORT_SYMBOL(qm35_bypass_control);

/**
 * qm35_bypass_send() - Send data to transport.
 * @hnd: The bypass channel handle.
 * @buffer: data buffer to be send
 * @len: len of @buffer
 *
 * This function allows modules using the bypass to send data to device.
 *
 * This function is called to send data written on ``/dev/uciX``. It forwards
 * the data to a low level transports modules using the ``send()`` transport
 * callback function.
 *
 * This function is called when data written on /dev/uciX should be forwarded
 * to a low level transports modules.
 *
 * Context: User context.
 * Returns: Zero on success, else -EINVAL if @hnd is not valid, -EBADF if
 * the bypass channel is not opened, -EPERM if the current caller is not the
 * same one that opened the bypass channel or send callback function error
 * code.
 */
int qm35_bypass_send(qm35_bypass_handle hnd, void *buffer, size_t len)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);
	struct qm35_bypass *bypass = &qm35->bypass_data;
	int rc = -EINVAL;

	trace_qm35_bypass_send(hnd ? qm35 : NULL);
	if (IS_ERR_OR_NULL(hnd) || !buffer || !len)
		goto error;

	/* Do sanity checks */
	spin_lock(&bypass->lock);
	rc = qm35_bypass_check(bypass);
	spin_unlock(&bypass->lock);
	if (rc)
		goto error;

	/* Checks passed, now call send transport callback. */
	rc = qm35_transport_send_direct(qm35, hnd->expected_type, buffer, len);
error:
	trace_qm35_bypass_send_return(qm35, rc);
	return rc;
}
EXPORT_SYMBOL(qm35_bypass_send);

/**
 * qm35_bypass_recv() - Receive data from queue.
 * @hnd: The bypass channel handle.
 * @buffer: Data buffer to store message from user-space.
 * @len: Size of @buffer.
 * @type: Received message type.
 * @flags: Received message flags.
 *
 * This function allows modules using the bypass to get received data from the
 * device.
 *
 * This function is called when data received from a low level transport module
 * should be forwarded to ``/dev/uciX``. It returns the already received packet,
 * saved by qm35_bypass_event_cb() before the registered listener function is called.
 *
 * Context: User context.
 * Return: Received message length on success else a negative error:
 *   * -EAGAIN if no packet is available,
 *   * -EINVAL if @hnd is not valid,
 *   * -EBADF if the bypass channel is not opened,
 *   * -EPERM if the caller thread isn't permitted to call,
 *   * -EMSGSIZE if provided buffer is too small for the awaiting packet,
 *   * or recv callback function result
 *     (which may be the number of received bytes).
 */
int qm35_bypass_recv(qm35_bypass_handle hnd, void __user *buffer, size_t len,
		     enum qm35_transport_msg_type *type, int *flags)
{
	struct qm35 *qm35 = container_of(hnd, struct qm35, bypass_data.chan);
	struct qm35_bypass *bypass = &qm35->bypass_data;
	struct sk_buff *skb;
	int rc = -EINVAL;

	trace_qm35_bypass_recv(hnd ? qm35 : NULL);
	if (IS_ERR_OR_NULL(hnd) || !type || !flags)
		goto error;

	/* Do sanity checks */
	spin_lock(&bypass->lock);
	rc = qm35_bypass_check(bypass);
	spin_unlock(&bypass->lock);
	if (rc)
		goto error;

	spin_lock(&hnd->lock);

	/* Return early if nothing received. Since this function is called
	 * after the listener had been called, we always have a packet ready
	 * in blocking mode. In non-blocking mode, just return this error if
	 * nothing received and don't call the transport receive callback.
	 */
	if (list_empty(&hnd->packets)) {
		rc = -EAGAIN;
		goto unlock;
	}

	/* Take next packet in the list. */
	skb = list_first_entry(&hnd->packets, struct sk_buff, list);

	*type = skb->cb[0];
	*flags = skb->cb[1];

	/* Check length of received packet (by construction, it cannot be
	 * fragmented here). */
	if (len > skb->len)
		len = skb->len;
	if (len == skb->len) {
		/* Packet finished, early remove from the list while locked. */
		list_del(&skb->list);
	}

unlock:
	spin_unlock(&hnd->lock);
	if (rc)
		goto error;

	/* Copy received frame to user-space buffer (outside lock section) */
	if (copy_to_user(buffer, skb->data, len)) {
		rc = -EFAULT;
	} else {
		skb_pull(skb, len);
		if (!skb->len) {
			/* Packet finished, free it. Already removed from list. */
			kfree_skb(skb);
		}
		rc = len;
	}
error:
	trace_qm35_bypass_recv_return(qm35, rc);
	return rc;
}
EXPORT_SYMBOL(qm35_bypass_recv);
