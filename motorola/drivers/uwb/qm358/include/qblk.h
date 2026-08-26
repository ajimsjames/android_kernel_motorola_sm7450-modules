/*
 * SPDX-FileCopyrightText: Copyright (c) 2022 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */
#pragma once

#include "qmalloc.h"

#ifndef __KERNEL__
#include <assert.h>
#include <stdalign.h>
#include <stddef.h>
#include <stdint.h>
#else
#include <linux/types.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * DOC: Block allocator.
 *
 * The block allocator allows allocation of blocks of a fixed size. Each block
 * can be used as a simple chunk of memory without any specific structure, or
 * can be connected to a chain of other blocks.
 *
 * Blocks are allocated from a pool which must be initialized before use with
 * a linear chunk of memory.
 *
 * Allocation of one block is O(1). Release of one block is O(1).
 *
 * When using a chain of blocks, releasing any number of blocks is O(1).
 *
 * There is three levels of API depending on your needs:
 *
 * - The block API, handling pointers to block nodes. This is supposed to be
 *   used with structures embedding a &struct qblk_node and it allows chaining.
 *   Use &qparent_of and field reference to convert between your pointer and
 *   the block node pointer.
 * - The raw memory API, handling pointers to a pack of bytes.
 * - The object API, handling casting to your own type for you.
 *
 * Quality of Service
 * ------------------
 *
 * The allocator handles two levels of service: sensitive and best-effort.
 *
 * Sensitive allocations are expected to succeed. They are used to allocate
 * memory for which failure is complex to handle, or may lead to an undesired
 * loss of performance. Sensitive allocation does fail when there is really no
 * memory left in the pool.
 *
 * Best-effort allocations are to be used for everything else. Allocations must
 * be short-lived so that memory can be returned for sensitive allocations if
 * needed.
 *
 * When allocating at the best effort level, if the number of free block would
 * become less than the configured reserve, the allocation is denied. The
 * reserve is not the total number of blocks reserved for sensitive allocations,
 * it rather corresponds to a kind of burst reserve, sufficient until
 * best-effort allocated memory is released.
 *
 * QMalloc variant
 * ---------------
 *
 * A QMalloc variant is available in qblk_qmalloc library, allowing easier
 * transition.
 *
 * When linking with qblk_qmalloc, blocks are allocated one by one from qmalloc,
 * without pool. In this case, the release of a chain of blocks is no longer
 * O(1).
 */

/**
 * QBLK_SIZE - The block size. This is the size in bytes of one block, including
 * the &qblk_node.next pointer.
 */
#define QBLK_SIZE 256

/**
 * QBLK_ALIGNMENT_MASK - The block alignment mask.
 */
#define QBLK_ALIGNMENT_MASK (alignof(max_align_t) - 1)

/**
 * enum qblk_flag - Allocation flags.
 *
 * @QBLK_FLAG_SENSITIVE: Sensitive allocation level.
 * @QBLK_FLAG_BEST_EFFORT: Best-effort allocation level.
 */
enum qblk_flag {
	QBLK_FLAG_SENSITIVE = 0,
	QBLK_FLAG_BEST_EFFORT = 1,
};

/**
 * struct qblk_node - When using a chain of blocks, this is placed at the start
 * of each block.
 */
struct qblk_node {
	/**
	 * @next: Pointer to the next block.
	 */
	struct qblk_node *next;
};

/**
 * union qblk - Used internally to represent a block.
 */
union qblk {
	/**
	 * @node: Block seen as a node.
	 */
	struct qblk_node node;
	/**
	 * @data: Block seen as data bytes.
	 */
	uint8_t data[QBLK_SIZE];
};

/**
 * struct qblk_pool - Pool of block memory, you usually only want one pool in
 * the system.
 */
struct qblk_pool {
	/**
	 * @free_list: Chained list of free blocks.
	 */
	struct qblk_node *free_list;
	/**
	 * @n_total: Total number of blocks in the pool.
	 */
	unsigned int n_total;
	/**
	 * @n_free: Number of free blocks in the pool.
	 */
	unsigned int n_free;
	/**
	 * @n_reserved: Number of blocks to reserve for sensitive allocations.
	 */
	unsigned int n_reserved;
};

/**
 * struct qblk_stats - Structure used to return pool usage statistics.
 */
struct qblk_stats {
	/**
	 * @n_total: Total number of blocks in the pool.
	 */
	unsigned int n_total;
	/**
	 * @n_free: Number of free blocks in the pool.
	 */
	unsigned int n_free;
};

/**
 * qblk_init_with_memory() - Initialize a pool with given memory.
 * @pool: Pool, previously uninitialized memory.
 * @data: Pointer to first byte of pool storage area.
 * @size: Size in bytes of the storage area.
 *
 * The block allocator needs an aligned pool of memory. If the provided storage
 * area is not aligned, an aligned subset will be used.
 */
void qblk_init_with_memory(struct qblk_pool *pool, uint8_t *data, size_t size);

/**
 * qblk_add_memory() - Add more memory to a pool.
 * @pool: Pool.
 * @data: Pointer to first byte of pool storage area.
 * @size: Size in bytes of the storage area.
 *
 * This allows usage of discontinuous memory areas.
 *
 * See &qblk_init_with_memory().
 */
void qblk_add_memory(struct qblk_pool *pool, uint8_t *data, size_t size);

/**
 * qblk_uninit() - Uninitialize a pool, that is, check all blocks returned.
 * @pool: Pool.
 *
 * If any block is still allocated, this is a fatal error. You only have to call
 * this function if you want this check.
 */
void qblk_uninit(struct qblk_pool *pool);

/**
 * qblk_set_reserve() - Set the reserve threshold.
 * @pool: Pool.
 * @n_reserved: Number of blocks to reserve for sensitive allocations.
 */
void qblk_set_reserve(struct qblk_pool *pool, unsigned int n_reserved);

/**
 * qblk_read_stats() - Get statistics about the pool usage.
 * @pool: Pool.
 * @stats: Where to write statistics.
 */
void qblk_read_stats(const struct qblk_pool *pool, struct qblk_stats *stats);

/**
 * qblk_alloc_block() - Allocate a single block.
 * @pool: Pool.
 * @flags: Allocation flags.
 *
 * This is O(1).
 *
 * Returned block is not initialized, not even the &qblk_node.next pointer.
 *
 * Return: Newly allocated block or %NULL if pool is exhausted.
 */
struct qblk_node *qblk_alloc_block(struct qblk_pool *pool, enum qblk_flag flags);

/**
 * qblk_alloc_blocks() - Allocate several chained blocks.
 * @pool: Pool.
 * @n: Number of blocks to allocate.
 * @last_p: Where to write the pointer of the last allocated block.
 * @flags: Allocation flags.
 *
 * This is O(n).
 *
 * This function loops to allocate blocks and therefore is O(n), you may prefer
 * to do it yourself.
 *
 * Returned blocks are not initialized, except the &qblk_node.next pointer which
 * points to the next block or is %NULL.
 *
 * Return: A pointer to the first allocated block, or %NULL if the requested
 * number of blocks is not available.
 */
struct qblk_node *qblk_alloc_blocks(struct qblk_pool *pool, unsigned int n,
				    struct qblk_node **last_p, enum qblk_flag flags);

/**
 * qblk_alloc_block_mem() - Allocate a single block of memory, check size at
 * compilation.
 * @pool: Pool.
 * @size: Allocation size, checked at compilation that it fits in a block.
 * @flags: Allocation flags.
 *
 * This is a macro.
 *
 * The block allocator is not a general purpose allocator, you must know the
 * allocation size at compilation time. If the memory need is not constant, you
 * can give the maximum size instead.
 *
 * Return: Newly allocated block of memory, or %NULL if pool is exhausted.
 */
#define qblk_alloc_block_mem(pool, size, flags)                                    \
	({                                                                         \
		static_assert((size) <= QBLK_SIZE,                                 \
			      "qblk_alloc_block_mem: request do not fit a block"); \
		(uint8_t *)qblk_alloc_block((pool), (flags));                      \
	})

/**
 * qblk_alloc_object() - Allocate memory to store a single object.
 * @pool: Pool.
 * @type: Type of the object (not the pointer).
 * @flags: Allocation flags.
 *
 * This is a macro, type of the object is used to check that the object fit in a
 * block.
 *
 * Return: Newly allocated object or %NULL if pool is exhausted. Do not cast
 * the result so that the compiler can detect an erroneous parameter.
 */
#define qblk_alloc_object(pool, type, flags) \
	((type *)qblk_alloc_block_mem((pool), sizeof(type), flags))

/**
 * qblk_free_block() - Release a block.
 * @pool: Pool.
 * @block: Block to release.
 *
 * This is O(1).
 *
 * If @block is NULL, this is a no-op.
 */
void qblk_free_block(struct qblk_pool *pool, struct qblk_node *block);

/**
 * qblk_free_blocks() - Release several chained blocks.
 * @pool: Pool.
 * @first: First block to release.
 * @last: Last block to release.
 * @n: Number of released block.
 *
 * This is O(1).
 *
 * Parameters must be consistent, this can be checked by this function or else
 * it would no longer be O(1). It is OK to call this function with no blocks,
 * in this case this is a no-op.
 *
 * You can enable a costly check at configuration time with QBLK_COSTLY_CHECKS
 * set to 1, in this case, this is O(n).
 */
void qblk_free_blocks(struct qblk_pool *pool, struct qblk_node *first, struct qblk_node *last,
		      unsigned int n);

/**
 * qblk_free_block_mem() - Release a block of memory.
 * @pool: Pool.
 * @mem: Block of memory to release.
 *
 * If @mem is NULL, this is a no-op.
 */
static inline void qblk_free_block_mem(struct qblk_pool *pool, uint8_t *mem)
{
	qblk_free_block(pool, (struct qblk_node *)mem);
}

/**
 * qblk_free_object() - Release an object.
 * @pool: Pool.
 * @obj: Object to release.
 *
 * This is a convenience macro.
 *
 * If @obj is NULL, this is a no-op.
 */
#define qblk_free_object(pool, obj) qblk_free_block_mem((pool), (uint8_t *)(obj))

#ifdef __cplusplus
}
#endif
