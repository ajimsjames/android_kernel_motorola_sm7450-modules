/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

#include <uci/uci.h>

/**
 * uwbmac_uci_init() - Initialize the UWB MAC UCI flavor and return an UWB MAC
 * context.
 * @context: UWB MAC context.
 * @uci: The uci context to use setup with transport and allocator.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_uci_init(struct uwbmac_context **context, struct uci *uci);
