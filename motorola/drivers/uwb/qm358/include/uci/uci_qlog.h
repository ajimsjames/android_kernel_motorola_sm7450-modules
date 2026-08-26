/*
 * SPDX-FileCopyrightText: Copyright (c) 2020 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

#ifndef LOG_TAG
#define LOG_TAG "qorvo.uwb.uci"
#endif

#ifdef CONFIG_QTRACE

#include <qtrace.h>

/* Declare qtrace module used by QLOGx() wrapper macros below. */
extern struct qtrace_module qtrace_uci;

/* These macro implement QLOGx() using QTRACE() macro which store the trace in qtrace_uci module. */
#define QLOGE(fmt, ...) QTRACE(&qtrace_uci, QTRACE_ERROR, LOG_TAG " " fmt, ##__VA_ARGS__)
#define QLOGW(fmt, ...) QTRACE(&qtrace_uci, QTRACE_WARN, LOG_TAG " " fmt, ##__VA_ARGS__)
#define QLOGI(fmt, ...) QTRACE(&qtrace_uci, QTRACE_INFO, LOG_TAG " " fmt, ##__VA_ARGS__)
#define QLOGD(fmt, ...) QTRACE(&qtrace_uci, QTRACE_DEBUG, LOG_TAG " " fmt, ##__VA_ARGS__)

/* Little helper macro to be compatible to both legacy logs and qtraces. */
/* Since QTRACE() cannot be compatible with __func__, rely on locally defined FUNC! */
#define _(fmt) FUNC ": " fmt

#else /* !CONFIG_QTRACE */

#include <log/qorvo_log.h>

static inline void qtrace_uci_init(void)
{
}

#define _(fmt) "%s: " fmt, __func__

#endif /* CONFIG_QTRACE */
