/*
 * SPDX-FileCopyrightText: Copyright (c) 2022 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

#include "qerr.h"
#include "qmalloc.h"
#include "qtime.h"
#include "qtypes.h"

#ifndef __KERNEL__

#ifdef __cplusplus
extern "C" {
#endif

/*
 * struct qsemaphore: QOSAL Semaphore (opaque).
 */
struct qsemaphore;

/**
 * qsemaphore_init() - Initialize a semaphore.
 * @init_count: Initial semaphore count.
 * @max_count: Maximum semaphore count.
 *
 * Return: Pointer to the initialized semaphore on NULL on error.
 */
struct qsemaphore *qsemaphore_init(uint32_t init_count, uint32_t max_count);

/**
 * qsemaphore_deinit() - De-initialize a semaphore.
 * @sem: Pointer to the semaphore initialized by qsemaphore_init().
 */
void qsemaphore_deinit(struct qsemaphore *sem);

/**
 * qsemaphore_take() - Take a semaphore.
 * @sem: Pointer to the semaphore initialized by qsemaphore_init().
 * @timeout_ms: Delay until timeout in ms. Use `QOSAL_WAIT_FOREVER` to wait
 * indefinitely.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr qsemaphore_take(struct qsemaphore *sem, uint32_t timeout_ms);

/**
 * qsemaphore_give() - Give a semaphore.
 * @sem: Pointer to the semaphore initialized by qsemaphore_init().
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr qsemaphore_give(struct qsemaphore *sem);

#ifdef __cplusplus
}
#endif

#else /* __KERNEL__ */

#include <linux/semaphore.h>
#include <linux/slab.h>
#include <linux/types.h>

/*
 * Direct use of Linux semaphore
 */
struct qsemaphore {
	struct semaphore s;
};

static inline struct qsemaphore *qsemaphore_init(uint32_t init_count, uint32_t max_count)
{
	struct qsemaphore *sem = qmalloc(sizeof(struct qsemaphore));
	if (!sem)
		return NULL;
	sema_init(&sem->s, init_count);
	return sem;
}

static inline void qsemaphore_deinit(struct qsemaphore *sem)
{
	kfree(sem);
}

static inline enum qerr qsemaphore_take(struct qsemaphore *sem, uint32_t timeout_ms)
{
	int ret;
	if (timeout_ms == QOSAL_WAIT_FOREVER)
		ret = down_interruptible(&sem->s);
	else
		ret = down_timeout(&sem->s, msecs_to_jiffies(timeout_ms));

	if (ret == -ETIME)
		return QERR_ETIME;

	if (ret == -EINTR)
		return QERR_EINTR;

	return QERR_SUCCESS;
}

static inline enum qerr qsemaphore_give(struct qsemaphore *sem)
{
	up(&sem->s);
	return QERR_SUCCESS;
}

#endif
