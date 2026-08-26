/*
 * SPDX-FileCopyrightText: Copyright (c) 2021 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

#include "qtypes.h"

#ifdef __KERNEL__
#include <linux/string.h>
#else
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#endif

#ifdef __KERNEL__
#include <linux/bug.h>

#define UCI_ASSERT(x)                                                                           \
	do {                                                                                    \
		if (WARN(!(x), "### UCI ASSERTION FAILED %s: %s: %d: %s\n", __FILE__, __func__, \
			 __LINE__, #x))                                                         \
			dump_stack();                                                           \
	} while (0)

#else

#include "qassert.h"
#define UCI_ASSERT(x) QASSERT(x)

#include <qmalloc.h>
#endif
