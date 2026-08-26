/*
 * This file is part of the UWB stack for linux.
 *
 * Copyright (c) 2021-2021 Qorvo US, Inc.
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

#ifndef QORVO_LOG_H_
#define QORVO_LOG_H_

#ifndef LOG_TAG
#define LOG_TAG ""
#endif

#include <linux/kernel.h>

#define QPRINTK(level, tag, fmt, ...) \
	printk(level tag " " fmt "\n", ##__VA_ARGS__)

#define QLOGE(fmt, ...)                                         \
	do {                                                    \
		QPRINTK(KERN_ERR, LOG_TAG, fmt, ##__VA_ARGS__); \
	} while (0)
#define QLOGW(fmt, ...)                                             \
	do {                                                        \
		QPRINTK(KERN_WARNING, LOG_TAG, fmt, ##__VA_ARGS__); \
	} while (0)

#ifndef NDEBUG
#define QLOGN(fmt, ...)                                            \
	do {                                                       \
		QPRINTK(KERN_NOTICE, LOG_TAG, fmt, ##__VA_ARGS__); \
	} while (0)
#define QLOGI(fmt, ...)                                          \
	do {                                                     \
		QPRINTK(KERN_INFO, LOG_TAG, fmt, ##__VA_ARGS__); \
	} while (0)
#define QLOGD(fmt, ...)                                           \
	do {                                                      \
		QPRINTK(KERN_DEBUG, LOG_TAG, fmt, ##__VA_ARGS__); \
	} while (0)
#else
#define QLOGN(fmt, ...) \
	do {            \
	} while (0)
#define QLOGI(fmt, ...) \
	do {            \
	} while (0)
#define QLOGD(fmt, ...) \
	do {            \
	} while (0)
#endif

#endif /* QORVO_LOG_H_ */
