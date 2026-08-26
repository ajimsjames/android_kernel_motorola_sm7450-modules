/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */
#pragma once

#include "qtypes.h"

#ifndef __KERNEL__
#include <stddef.h>
#endif

/**
 * qparent_of() - Given a pointer to a member, return a pointer to a structure
 * containing that member.
 * @ptr: Pointer to a structure member.
 * @type: Type of the parent structure.
 * @member: Member, or member path.
 *
 * Implementation notes:
 * - 'ptr' must be a pointer type. The verification is done by the ternary test
 *   because both side of a ternary test must have the same type.
 * - 'member' must be in the 'type' also, and it's checked at two places
 *   (ternary test and offsetof).
 *
 * Returns: Pointer to the parent structure.
 */
#define qparent_of(ptr, type, member) \
	((type *)((uint8_t *)(1 ? (ptr) : &((type *)0)->member) - offsetof(type, member)))

/**
 * qround_up() - Rounds up given number x to the nearest multiple of y.
 * @x: Number to be rounded.
 * @y: Step of rounding operation.
 */
#define qround_up(x, y) (((x) + (y)-1) / (y) * (y))

/**
 * qarray_size() - Calculate size in bytes of given array.
 * @a: Array.
 */
#define qarray_size(a) (sizeof(a) / sizeof((a)[0]))

/**
 * qalign_mask() - Align a value using alignment mask.
 * @x: Value to align.
 * @mask: Alignment mask, must be one less than a power of two, may be evaluated several times.
 *
 * Returns: Value aligned up.
 */
#define qalign_mask(x, mask) (((x) + (mask)) & ~(__typeof__(x))(mask))

/**
 * qmin() - Compare numbers and return the lower one.
 * @x: First number to compare.
 * @y: Second number to compare.
 *
 * Returns: Lower number.
 */
#define qmin(x, y)                             \
	({                                     \
		__typeof__(x) _min1 = (x);     \
		__typeof__(y) _min2 = (y);     \
		_min1 < _min2 ? _min1 : _min2; \
	})

/**
 * qmax() - Compare numbers and return the higher one.
 * @x: First number to compare.
 * @y: Second number to compare.
 *
 * Returns: Higher number.
 */
#define qmax(x, y)                             \
	({                                     \
		__typeof__(x) _max1 = (x);     \
		__typeof__(y) _max2 = (y);     \
		_max1 > _max2 ? _max1 : _max2; \
	})
