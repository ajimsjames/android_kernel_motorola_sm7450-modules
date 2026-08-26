/*
 * SPDX-FileCopyrightText: Copyright (c) 2024 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * enum quwbs_err - QUWBS error code.
 */
enum quwbs_err {
	/**
	 * @QUWBS_ERR_SUCCESS: Operation successful.
	 */
	QUWBS_ERR_SUCCESS,
	/**
	 * @QUWBS_ERR_INVALID: Invalid value or parameter.
	 */
	QUWBS_ERR_INVALID,
	/**
	 * @QUWBS_ERR_INVALID_ID: Invalid identifier.
	 */
	QUWBS_ERR_INVALID_ID,
	/**
	 * @QUWBS_ERR_READ_ONLY: Trying to write a read only value.
	 */
	QUWBS_ERR_READ_ONLY,
	/**
	 * @QUWBS_ERR_NO_MEM: Not enough memory.
	 */
	QUWBS_ERR_NO_MEM,
	/**
	 * @QUWBS_ERR_BUSY: Operation can not be done at this moment.
	 */
	QUWBS_ERR_BUSY,
};

#ifdef __cplusplus
}
#endif
