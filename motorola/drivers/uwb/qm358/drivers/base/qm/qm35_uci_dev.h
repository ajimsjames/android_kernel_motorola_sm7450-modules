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
#ifndef __QM35_UCI_DEV_H
#define __QM35_UCI_DEV_H

#include <linux/miscdevice.h>
#include <linux/fs.h>

#include "qm35_bypass.h"

#define QM35_UCI_DEV_DEVICE_NAME "uci"
#define QM35_UCI_DEV_DEVICE_NAME_SIZE 8

#define QM35_UCI_DEV_MAX_PACKET_SIZE 1024

/**
 * struct qm35_uci_dev - UCI char device structure.
 * @miscdev: The miscdevice.
 * @qm35: Pointer the associated QM35 instance to this miscdevice.
 * @name: The name of the miscdevice.
 * @channel: The opened bypass channel handle of the associated QM35 device.
 * @write_buffer: The write buffer.
 * @wait_queue: File read wait queue.
 * @data_available: Data are available.
 * @bypass_events: Last received bypass event.
 * @state: State of this UCI char device.
 * @hsspi_msg_type: The current HSSPI message type.
 * @dev_list: List element of the chained qm35_uci_dev devices.
 */
struct qm35_uci_dev {
	struct miscdevice miscdev;
	struct qm35 *qm35;
	qm35_bypass_handle channel;
	char name[QM35_UCI_DEV_DEVICE_NAME_SIZE];
	char write_buffer[QM35_UCI_DEV_MAX_PACKET_SIZE];
	wait_queue_head_t wait_queue;
	bool data_available;
	enum qm35_bypass_events bypass_events;
	unsigned int state;
	u8 hsspi_msg_type;
	struct list_head dev_list;
};

static inline struct qm35_uci_dev *file_to_qm35_uci_dev(struct file *file)
{
	return container_of(file->private_data, struct qm35_uci_dev, miscdev);
}

#ifdef QM35_UCI_DEV_TESTS

#define KU_NO_KMALLOC_MOCK
#include "mocks/ku_base.h"
#include "mocks/ku_alloc_free.h"
#include "mocks/ku_copy_user.h"
#include "mocks/ku_get_dev_id.h"
#include "mocks/ku_get_device.h"
#include "mocks/ku_notifier.h"

/* Declare our wrapper functions */
qm35_bypass_handle ku_qm35_bypass_open(struct qm35 *qm35,
				       qm35_bypass_listener_cb cb,
				       void *priv_data);
int ku_qm35_bypass_close(qm35_bypass_handle hnd);
int ku_qm35_bypass_queue_check(qm35_bypass_handle hnd);
int ku_qm35_bypass_send(qm35_bypass_handle hnd, void *buffer, size_t len);
int ku_qm35_bypass_recv(qm35_bypass_handle hnd, void *buffer, size_t len,
			enum qm35_transport_msg_type *type, int *flags);
int ku_qm35_bypass_control(qm35_bypass_handle hnd,
			   enum qm35_bypass_actions action, void *param);

int ku_misc_register(struct miscdevice *misc);
void ku_misc_deregister(struct miscdevice *misc);

int ku_wait_event_interruptible(wait_queue_head_t wq_head, bool condition);
void ku_poll_wait(struct file *filp, wait_queue_head_t *wait_address,
		  poll_table *p);

/* Redefine some functions to use our test wrappers */
#define qm35_bypass_open ku_qm35_bypass_open
#define qm35_bypass_close ku_qm35_bypass_close
#define qm35_bypass_queue_check ku_qm35_bypass_queue_check
#define qm35_bypass_send ku_qm35_bypass_send
#define qm35_bypass_recv ku_qm35_bypass_recv
#define qm35_bypass_control ku_qm35_bypass_control
#define misc_register ku_misc_register
#define misc_deregister ku_misc_deregister
#undef wait_event_interruptible
#define wait_event_interruptible ku_wait_event_interruptible
#define poll_wait ku_poll_wait

/* Ensure modified functions aren't exported! */
#undef EXPORT_SYMBOL
#define EXPORT_SYMBOL(x)

#endif /* QM35_UCI_DEV_TESTS */

#endif /* __QM35_UCI_DEV_H */
