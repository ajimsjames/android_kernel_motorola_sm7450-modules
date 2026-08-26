/*
 * SPDX-FileCopyrightText: Copyright (c) 2021 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

#include <uwbmac/uwbmac_types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * struct uwbmac_msg - Message container.
 *
 * NOTE: do not access the fields directly, use the helper functions below.
 */
struct uwbmac_msg {
	/**
	 * @parent: Pointer to the parent, for nested messages.
	 */
	struct uwbmac_msg *parent;
	/**
	 * @payload: Pointer to the payload to be sent.
	 */
	void *payload;
	/**
	 * @position: Pointer to the payload being written.
	 */
	uint8_t *position;
	/**
	 * @priv: Pointer to private data to keep around.
	 */
	void *priv;
	/**
	 * @length: Length of the payload.
	 */
	int length;
	/**
	 * @size: Capacity of the payload buffer.
	 */
	int size;
	/**
	 * @add_failed: Set to true when an add call fails.
	 */
	bool add_failed;
};

/**
 * uwbmac_msg_free_priv() - Free uwbmac_msg priv member.
 * @msg: Message to free.
 */
void uwbmac_msg_free_priv(struct uwbmac_msg *msg);

/**
 * uwbmac_msg_init() - Initialize message from payload/length
 * @msg: Message to initialize.
 * @payload: Pointer to the payload.
 * @length: Length of the payload.
 * @size: Total size available in the payload.
 */
static inline void uwbmac_msg_init(struct uwbmac_msg *msg, void *payload, int length, int size)
{
	memset(msg, 0, sizeof(*msg));
	msg->payload = payload;
	msg->position = (uint8_t *)payload;
	msg->length = length;
	msg->size = size;
}

/**
 * uwbmac_msg_copy() - Copy a payload into a message
 * @msg: Message to initialize.
 * @payload: Pointer to the payload.
 * @length: Length of the payload.
 *
 * Return: true if there was enough space to do the copy, false otherwise.
 */
static inline bool uwbmac_msg_copy(struct uwbmac_msg *msg, void *payload, int length)
{
	if (length > msg->size)
		return false;

	msg->length = length;
	memcpy(msg->payload, payload, msg->length);
	return true;
}

/**
 * uwbmac_msg_payload() - Get the message payload
 * @msg: Message to use.
 *
 * Return: the message payload or NULL is msg is NULL.
 */
static inline void *uwbmac_msg_payload(const struct uwbmac_msg *msg)
{
	if (!msg)
		return NULL;

	return msg->payload;
}

/**
 * uwbmac_msg_length() - Get the message payload length
 * @msg: Message to use.
 *
 * Return: the message payload length.
 */
static inline int uwbmac_msg_length(const struct uwbmac_msg *msg)
{
	return msg->length;
}

/**
 * uwbmac_msg_size() - Get the message capacity
 * @msg: Message to use.
 *
 * Return: the message capacity.
 */
static inline int uwbmac_msg_size(const struct uwbmac_msg *msg)
{
	return msg->size;
}

#ifdef __cplusplus
}
#endif
