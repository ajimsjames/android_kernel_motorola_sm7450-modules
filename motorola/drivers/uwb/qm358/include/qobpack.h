/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */
#pragma once

#include "qblk.h"

#ifndef __KERNEL__
#include <stdalign.h>
#include <stddef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * DOC: Objects Pack allocator.
 *
 * The objects pack allocator allows allocation of objects of mixed types,
 * packed together in blocks. Objects are allocated one by one, but all objects
 * of a single pack are released together in one operation.
 *
 * Blocks are allocated from the block allocator. The objects pack allocator is
 * designed to handle small objects, but each object can be as large as the
 * block size minus the block node header. If larger objects needs to be stored,
 * they must be cut in smaller pieces.
 *
 * A destructor can be associated to a pack, it is called before the pack is
 * released.
 *
 * An objects pack can have a root object, the first allocated object. The
 * pointer to this root object is sufficient for operations on the objects pack
 * and there is no need to keep a pointer to the pack structure.
 *
 * Quality of Service
 * ------------------
 *
 * The allocator uses the same levels of service as the block allocator. All
 * objects inside a single pack use the same level.
 *
 * Locking
 * -------
 *
 * Operations on a single pack are not thread safe, the user must protect itself
 * from concurrent access if needed. Operations on different packs are thread
 * safe as they do not share any data, they inherit the thread safety of the
 * block allocator.
 *
 * Performance
 * -----------
 *
 * Most allocations should be O(1). However, in some cases, doing a small
 * allocation after large ones which fill the blocks may force the allocator to
 * scan the used blocks to skip the blocks with not enough room for the small
 * allocation. This is a trade-off to optimize block usage when small and large
 * allocation are mixed.
 *
 * Release of the whole pack is O(1).
 */

/**
 * QOBPACK_OBJECT_SIZE_MAX - Maximum size of an object in bytes.
 */
#define QOBPACK_OBJECT_SIZE_MAX (QBLK_SIZE - sizeof(struct qobpack_node))

/**
 * QOBPACK_ROOT_OBJECT_SIZE_MAX - Maximum size of the root object in bytes.
 */
#define QOBPACK_ROOT_OBJECT_SIZE_MAX \
	(QBLK_SIZE - sizeof(struct qobpack_node) - sizeof(struct qobpack_root_header))

/**
 * QOBPACK_ROOT_OBJECT_FIRST_BLK_SIZE_MAX - Maximum size of the root object fitting in the first
 * block in bytes.
 *
 * This is quite low level and deserves its long name.
 */
#define QOBPACK_ROOT_OBJECT_FIRST_BLK_SIZE_MAX \
	(QBLK_SIZE - sizeof(struct qobpack) - sizeof(struct qobpack_root_header))

/**
 * QOBPACK_ALIGNMENT_MAX - Maximum alignment of allocated object.
 *
 * This ensures allocation head pointers are rightly updated.
 *
 * Also, alignment can not be larger than blocks alignment.
 */
#define QOBPACK_ALIGNMENT_MAX (QBLK_ALIGNMENT_MASK + 1 < 16 ? QBLK_ALIGNMENT_MASK + 1 : 16)

/**
 * struct qobpack_node - Objects pack block header.
 */
struct qobpack_node {
	/**
	 * @block_node: Block chain header.
	 *
	 * MUST be the first structure field.
	 */
	struct qblk_node block_node;
	/**
	 * @bytes_used: Used bytes in this block, including this header.
	 */
	size_t bytes_used;
};

/**
 * enum qobpack_destructor_ret - Behaviour after object destruction.
 */
enum qobpack_destructor_ret {
	/**
	 * @QOBPACK_DESTRUCTOR_LEAK: Do not release memory used by the pack,
	 * consider this is handled by the destructor.
	 */
	QOBPACK_DESTRUCTOR_LEAK,
	/**
	 * @QOBPACK_DESTRUCTOR_RELEASE: Release all memory used by the pack.
	 */
	QOBPACK_DESTRUCTOR_RELEASE,
};

/**
 * typedef qobpack_destructor_cb() - Function called before the objects pack is
 * released.
 * @root: root object (or opaque pointer if rootless).
 *
 * Returns: One of &enum qobpack_destructor_ret value.
 */
typedef enum qobpack_destructor_ret (*qobpack_destructor_cb)(void *root);

/**
 * enum qobpack_size_cat - Size categories, used internally to optimize block
 * usage.
 */
enum qobpack_size_cat {
	/**
	 * @QOBPACK_SIZE_CAT_LESS_THAN_16: Category for objects smaller than 16
	 * bytes.
	 */
	QOBPACK_SIZE_CAT_LESS_THAN_16,
	/**
	 * @QOBPACK_SIZE_CAT_LESS_THAN_32: Category for objects smaller than 32
	 * bytes.
	 */
	QOBPACK_SIZE_CAT_LESS_THAN_32,
	/**
	 * @QOBPACK_SIZE_CAT_LESS_THAN_64: Category for objects smaller than 64
	 * bytes.
	 */
	QOBPACK_SIZE_CAT_LESS_THAN_64,
	/**
	 * @QOBPACK_SIZE_CAT_BIGGER: Category for bigger objects.
	 */
	QOBPACK_SIZE_CAT_BIGGER,
};

/**
 * struct qobpack - Objects pack.
 */
struct qobpack {
	/**
	 * @node: Block header.
	 *
	 * MUST be the first structure field.
	 */
	struct qobpack_node node;
	/**
	 * @destructor: Function called before the objects pack is released, or
	 * %NULL if none.
	 */
	qobpack_destructor_cb destructor;
	/**
	 * @pool: Block pool to allocate blocks from.
	 */
	struct qblk_pool *pool;
	/**
	 * @blk_flags: Block allocation flags.
	 */
	enum qblk_flag blk_flags;
	/**
	 * @n_blocks: Number of blocks in the chain.
	 */
	size_t n_blocks;
	/**
	 * @alloc_heads: Pointers to blocks where new objects are allocated. The
	 * first pointers are used for objects with a size less than 16, 32, and
	 * 64 bytes. The last one is used for bigger objects.
	 *
	 * How it works is that when a new allocation is done, the corresponding
	 * pointer is advanced until it reaches a block with enough size or the
	 * end of the chain. Only when it reaches the end of the chain, a new
	 * block must be allocated.
	 *
	 * After this first step, pointers for bigger objects may be advanced as
	 * they can not point to a block earlier in the chain than a pointer for
	 * smaller objects.
	 *
	 * The last pointer, the one used for bigger objects, always point to
	 * the last block in the chain. This is guaranteed because of the
	 * maximum allowed alignment parameter.
	 *
	 * Those pointers can not be %NULL as this very structure is stored at
	 * the start of the first block and therefore, there is always at least
	 * one block in the chain.
	 */
	struct qobpack_node *alloc_heads[QOBPACK_SIZE_CAT_BIGGER + 1];
};

/**
 * struct qobpack_root_header - Structure placed in front of root object to
 * locate the objects pack.
 */
struct qobpack_root_header {
	/**
	 * @pack: Pointer to the object pack.
	 */
	struct qobpack *pack;
};

/**
 * struct qobpack_rootless - Dummy structure to avoid void pointer for rootless packs.
 */
struct qobpack_rootless {
	/**
	 * @extern_c_compat_warn_dummy: Dummy field to make the structure the same size for C and
	 * C++, avoiding a warning from the compiler.
	 */
	char extern_c_compat_warn_dummy;
};

/**
 * qobpack_alloc_root_mem() - Create a new objects pack and allocate root
 * object.
 * @pool: Pool to allocate memory from.
 * @blk_flags: Block allocation flags.
 * @destructor: Function called before the objects pack is released, or %NULL if
 * none.
 * @root_size: Size of the root object in bytes.
 * @root_alignment_mask: Alignment mask of the root object, must be a power of
 * two minus one, and no more than QOBPACK_ALIGNMENT_MAX - 1.
 *
 * When possible, use the &qobpack_alloc_root() macro instead.
 *
 * This is a fatal error if the root object can not fit in a block.
 *
 * Returns: A pointer to the root object or %NULL if pool is exhausted. The
 * pointer can be used to manipulate the objects pack.
 */
void *qobpack_alloc_root_mem(struct qblk_pool *pool, enum qblk_flag blk_flags,
			     qobpack_destructor_cb destructor, size_t root_size,
			     size_t root_alignment_mask);

/**
 * qobpack_alloc_root() - Create a new objects pack and allocate root object,
 * with automatic type handling.
 * @pool: Pool to allocate memory from.
 * @blk_flags: Block allocation flags.
 * @destructor: Function called before the objects pack is released, or %NULL if
 * none.
 * @root_type: Type of the root object (not the pointer).
 *
 * This is a macro.
 *
 * This is a fatal error if the root object can not fit in a block.
 *
 * Returns: A pointer to the root object or %NULL if pool is exhausted. The
 * pointer can be used to manipulate the objects pack. Do not cast the result so
 * that the compiler can detect an erroneous parameter.
 */
#define qobpack_alloc_root(pool, blk_flags, destructor, root_type)                                 \
	((root_type *)qobpack_alloc_root_mem((pool), (blk_flags), (destructor), sizeof(root_type), \
					     alignof(root_type) - 1))

/**
 * qobpack_alloc_rootless() - Create a new objects pack without a root objects.
 * @pool: Pool to allocate memory from.
 * @blk_flags: Block allocation flags.
 * @destructor: Function called before the objects pack is released, or %NULL if
 * none.
 *
 * Returns: An opaque pointer or %NULL if pool is exhausted. The pointer can be
 * used to manipulate the objects pack as if it was pointing to a root object.
 */
struct qobpack_rootless *qobpack_alloc_rootless(struct qblk_pool *pool, enum qblk_flag blk_flags,
						qobpack_destructor_cb destructor);

/**
 * qobpack_free() - Release an objects pack and all associated objects.
 * @root: root object (or opaque pointer if rootless).
 */
void qobpack_free(void *root);

/**
 * qobpack_alloc_mem() - Allocate memory from an objects pack.
 * @root: root object (or opaque pointer if rootless).
 * @size: Size of memory to allocate in bytes.
 * @alignment_mask: Alignment mask of memory to allocate, must be a power of two
 * minus one, and no more than QOBPACK_ALIGNMENT_MAX - 1.
 *
 * Returns: A pointer to the allocated memory, or %NULL if pool is exhausted or
 * request is too large to fit in any block.
 */
void *qobpack_alloc_mem(void *root, size_t size, size_t alignment_mask);

/**
 * qobpack_alloc_object() - Allocate object from an objects pack.
 * @root: root object (or opaque pointer if rootless).
 * @type: Type of the object (not the pointer).
 *
 * This is a macro.
 *
 * Returns: A pointer to the allocated object, or %NULL if pool is exhausted or
 * object is too large to fit in any block.
 */
#define qobpack_alloc_object(root, type) \
	((type *)qobpack_alloc_mem((root), sizeof(type), alignof(type) - 1))

/**
 * qobpack_alloc_array() - Allocate a continuous array of objects from an
 * objects pack.
 * @root: root object (or opaque pointer if rootless).
 * @type: Type of the object (not the pointer).
 * @n_elem: Number of elements to allocate.
 *
 * This is a macro.
 *
 * The array must fit in a block. If the caller can handle a segmented array, it
 * is usually a good idea to first query the maximum number of continuous
 * elements which can be allocated and possibly split the allocation in several
 * smaller allocations.
 *
 * Returns: A pointer to the first object of the allocated array, or %NULL if
 * pool is exhausted or array is too large to fit in any block.
 */
#define qobpack_alloc_array(root, type, n_elem) \
	((type *)qobpack_alloc_mem((root), (n_elem) * sizeof(type), alignof(type) - 1))

/**
 * qobpack_array_n_elems_mem() - Query the number of array elements that could
 * be allocated continuously.
 * @root: root object (or opaque pointer if rootless).
 * @elem_size: Size of elements in bytes.
 * @alignment_mask: Alignment mask of elements, must be a power of two minus
 * one, and no more than QOBPACK_ALIGNMENT_MAX - 1.
 *
 * Use this to avoid wasting space at end of block before allocating an array.
 *
 * Use &qobpack_array_n_elems() for a nicer interface.
 *
 * Returns: The number of elements that can be allocated, or 0 if element is too
 * large to fit in any block.
 */
size_t qobpack_array_n_elems_mem(void *root, size_t elem_size, size_t alignment_mask);

/**
 * qobpack_array_n_elems() - Query the number of array elements that could be
 * allocated continuously.
 * @root: root object (or opaque pointer if rootless).
 * @type: Type of the object (not the pointer).
 *
 * This is a macro.
 *
 * Use this to avoid wasting space at end of block before allocating an array.
 *
 * Returns: The number of elements that can be allocated, or 0 if element is too
 * large to fit in any block.
 */
#define qobpack_array_n_elems(root, type) \
	(qobpack_array_n_elems_mem((root), sizeof(type), alignof(type) - 1))

#ifdef __cplusplus
}
#endif
