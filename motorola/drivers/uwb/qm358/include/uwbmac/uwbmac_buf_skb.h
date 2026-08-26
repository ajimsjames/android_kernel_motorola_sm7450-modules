/*
 * SPDX-FileCopyrightText: Copyright (c) 2022 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

#include <linux/skbuff.h>
#include <uwbmac/uwbmac_types.h>

#ifdef __cplusplus
extern "C" {
#endif

struct uwbmac_buf_queue {
	/**
	 * @list: Socket buffer list.
	 */
	struct sk_buff_head list;
};

/**
 * struct uwbmac_buf - Network buffer, used to exchange frames.
 */
struct uwbmac_buf {
	/**
	 * @skb: Socket buffer.
	 */
	struct sk_buff skb;
};

static inline struct uwbmac_buf *uwbmac_buf_alloc_quota(unsigned int size,
							enum mem_quota_id quota_id)
{
	return (struct uwbmac_buf *)dev_alloc_skb(size);
}

static inline struct uwbmac_buf *uwbmac_buf_alloc(unsigned int size)
{
	return (struct uwbmac_buf *)dev_alloc_skb(size);
}

static inline void uwbmac_buf_free(struct uwbmac_buf *buf)
{
	kfree_skb(&buf->skb);
}

static inline void uwbmac_buf_reserve(struct uwbmac_buf *buf, unsigned int len)
{
	skb_reserve(&buf->skb, len);
}

static inline unsigned int uwbmac_buf_headroom(const struct uwbmac_buf *buf)
{
	return skb_headroom(&buf->skb);
}

static inline unsigned int uwbmac_buf_tailroom(const struct uwbmac_buf *buf)
{
	return skb_availroom(&buf->skb);
}

static inline void uwbmac_buf_reserve_tailroom(struct uwbmac_buf *buf, unsigned int len)
{
	/* Pass skb size as mtu, to make sure the function does not reserve more
	 * than len.
	 */
	skb_tailroom_reserve(&buf->skb, skb_end_offset(&buf->skb), len);
}

static inline void uwbmac_buf_trim(struct uwbmac_buf *buf, unsigned int len)
{
	skb_trim(&buf->skb, len);
}

static inline void *uwbmac_buf_put(struct uwbmac_buf *buf, unsigned int len)
{
	return skb_put(&buf->skb, len);
}

static inline int uwbmac_buf_put_data(struct uwbmac_buf *buf, const void *data, unsigned int len)
{
	skb_put_data(&buf->skb, data, len);
	return 0;
}

static inline void uwbmac_buf_put_u8(struct uwbmac_buf *buf, uint8_t data)
{
	skb_put_u8(&buf->skb, data);
}

static inline void *uwbmac_buf_push(struct uwbmac_buf *buf, unsigned int len)
{
	return skb_push(&buf->skb, len);
}

static inline void uwbmac_buf_pull(struct uwbmac_buf *buf, unsigned int len)
{
	skb_pull(&buf->skb, len);
}

static inline void uwbmac_buf_queue_init(struct uwbmac_buf_queue *queue)
{
	skb_queue_head_init(&queue->list);
}

static inline bool uwbmac_buf_queue_empty(const struct uwbmac_buf_queue *queue)
{
	return skb_queue_empty(&queue->list);
}

static inline void uwbmac_buf_queue_push(struct uwbmac_buf_queue *queue, struct uwbmac_buf *buf)
{
	skb_queue_head(&queue->list, &buf->skb);
}

static inline void uwbmac_buf_queue_put(struct uwbmac_buf_queue *queue, struct uwbmac_buf *buf)
{
	skb_queue_tail(&queue->list, &buf->skb);
}

static inline bool uwbmac_buf_queue_is_last(const struct uwbmac_buf_queue *queue,
					    const struct uwbmac_buf *buf)
{
	return skb_queue_is_last(&queue->list, &buf->skb);
}

static inline struct uwbmac_buf *uwbmac_buf_queue_next(const struct uwbmac_buf_queue *queue,
						       const struct uwbmac_buf *buf)
{
	return (struct uwbmac_buf *)skb_queue_next(&queue->list, &buf->skb);
}

static inline struct uwbmac_buf *uwbmac_buf_queue_peek(struct uwbmac_buf_queue *queue)
{
	return (struct uwbmac_buf *)skb_peek(&queue->list);
}

static inline struct uwbmac_buf *uwbmac_buf_queue_pop(struct uwbmac_buf_queue *queue)
{
	return (struct uwbmac_buf *)skb_dequeue(&queue->list);
}

static inline void uwbmac_buf_queue_purge(struct uwbmac_buf_queue *queue)
{
	skb_queue_purge(&queue->list);
}

static inline uint8_t *uwbmac_buf_get_data(struct uwbmac_buf *buf)
{
	return buf->skb.data;
}

static inline unsigned int uwbmac_buf_get_len(struct uwbmac_buf *buf)
{
	return buf->skb.len;
}

static inline unsigned int uwbmac_buf_get_size(struct uwbmac_buf *buf)
{
	return skb_end_offset(&buf->skb);
}

static inline void uwbmac_buf_set_queue_mapping(struct uwbmac_buf *buf, uint16_t value)
{
	buf->skb.queue_mapping = value;
}

#ifdef __cplusplus
}
#endif
