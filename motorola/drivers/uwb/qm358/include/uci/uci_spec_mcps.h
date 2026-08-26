/*
 * SPDX-FileCopyrightText: Copyright (c) 2020 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

/**
 * enum uci_oid_mcps - MAC calls identifiers through UCI.
 *
 * @UCI_OID_QORVO_MAC_START:
 *	Start device.
 * @UCI_OID_QORVO_MAC_STOP:
 *	Stop device.
 * @UCI_OID_QORVO_MAC_TX:
 *	Send data.
 * @UCI_OID_QORVO_MAC_TX_DONE:
 *	Data sent notification (unused).
 * @UCI_OID_QORVO_MAC_TX_QUEUE:
 *	Send queue notification.
 * @UCI_OID_QORVO_MAC_RX:
 *	Data reception notification.
 * @UCI_OID_QORVO_MAC_RX_QUEUE:
 *	Control reception queue.
 * @UCI_OID_QORVO_MAC_SCAN:
 *	Set scanning mode.
 * @UCI_OID_QORVO_MAC_SET_SCHEDULER:
 *	Set scheduler.
 * @UCI_OID_QORVO_MAC_GET_SCHEDULER:
 *	Get scheduler.
 * @UCI_OID_QORVO_MAC_SET_SCHEDULER_PARAMS:
 *	Set scheduler parameters.
 * @UCI_OID_QORVO_MAC_GET_SCHEDULER_PARAMS:
 *	Get scheduler parameters.
 * @UCI_OID_QORVO_MAC_SET_SCHEDULER_REGIONS:
 *	Change scheduler regions.
 * @UCI_OID_QORVO_MAC_GET_SCHEDULER_REGIONS:
 *	Get scheduler regions.
 * @UCI_OID_QORVO_MAC_CALL_SCHEDULER:
 *	Call to scheduler.
 * @UCI_OID_QORVO_MAC_SET_REGION_PARAMS:
 *	Set region parameters.
 * @UCI_OID_QORVO_MAC_GET_REGION_PARAMS:
 *	Get region parameters.
 * @UCI_OID_QORVO_MAC_CALL_REGION:
 *	Call to region.
 * @UCI_OID_QORVO_MAC_SET_CALIBRATIONS:
 *	Set calibration values.
 * @UCI_OID_QORVO_MAC_GET_CALIBRATIONS:
 *	Get calibration values.
 * @UCI_OID_QORVO_MAC_LIST_CALIBRATIONS:
 *	List calibration keys.
 * @UCI_OID_QORVO_MAC_CLOSE_SCHEDULER:
 *	Close scheduler and regions.
 * @UCI_OID_QORVO_MAC_TESTMODE:
 *	Call test mode function.
 * @UCI_OID_QORVO_MAC_CALL_MAX:
 *	Internal use.
 */
enum uci_oid_mcps {
	UCI_OID_QORVO_MAC_START = 0x00,
	UCI_OID_QORVO_MAC_STOP = 0x01,
	UCI_OID_QORVO_MAC_TX = 0x02,
	UCI_OID_QORVO_MAC_TX_DONE = 0x03,
	UCI_OID_QORVO_MAC_TX_QUEUE = 0x04,
	UCI_OID_QORVO_MAC_RX = 0x05,
	UCI_OID_QORVO_MAC_RX_QUEUE = 0x06,
	UCI_OID_QORVO_MAC_SCAN = 0x07,
	UCI_OID_QORVO_MAC_SET_SCHEDULER = 0x20,
	UCI_OID_QORVO_MAC_GET_SCHEDULER = 0x21,
	UCI_OID_QORVO_MAC_SET_SCHEDULER_PARAMS = 0x22,
	UCI_OID_QORVO_MAC_GET_SCHEDULER_PARAMS = 0x23,
	UCI_OID_QORVO_MAC_SET_SCHEDULER_REGIONS = 0x24,
	UCI_OID_QORVO_MAC_GET_SCHEDULER_REGIONS = 0x25,
	UCI_OID_QORVO_MAC_CALL_SCHEDULER = 0x26,
	UCI_OID_QORVO_MAC_SET_REGION_PARAMS = 0x27,
	UCI_OID_QORVO_MAC_GET_REGION_PARAMS = 0x28,
	UCI_OID_QORVO_MAC_CALL_REGION = 0x29,
	UCI_OID_QORVO_MAC_SET_CALIBRATIONS = 0x2a,
	UCI_OID_QORVO_MAC_GET_CALIBRATIONS = 0x2b,
	UCI_OID_QORVO_MAC_LIST_CALIBRATIONS = 0x2c,
	UCI_OID_QORVO_MAC_CLOSE_SCHEDULER = 0x2d,
	UCI_OID_QORVO_MAC_TESTMODE = 0x3f,
	UCI_OID_QORVO_MAC_CALL_MAX,
};

/**
 * enum device_config - Device configurations that are used by
 *CORE_[SG]ET_CONFIG cmd.
 *
 * @DEVICE_CHANNEL:
 *	The device default channel.
 * @DEVICE_PREAMBLE_CODE:
 *	The device default preamble code.
 * @DEVICE_PAN_ID:
 *	The identifier of the PAN on which the device is operating, if 0xffff,
 *device is not associated.
 * @DEVICE_SHORT_ADDR:
 *	The address the device uses to communicate in the PAN.
 * @DEVICE_EXTENDED_ADDR:
 *	The extended address assigned to the device.
 * @DEVICE_PAN_COORD:
 *	Device is a PAN coordinator if 1.
 * @DEVICE_PROMISCUOUS:
 *	Enable (1) or disable (0) promiscuous mode.
 * @DEVICE_FRAME_RETRIES:
 *	The maximum number of retries after a transmission failure.
 * @DEVICE_TRACES:
 *	Bit-field, each bit enable (1) or disable (0) a specific trace module.
 * @DEVICE_PM_MIN_INACTIVITY_S4:
 *	The minimum inactivity time to get into S4, in ms.
 */
enum device_config {
	DEVICE_CHANNEL = 0xa0,
	DEVICE_PREAMBLE_CODE,
	DEVICE_PAN_ID,
	DEVICE_SHORT_ADDR,
	DEVICE_EXTENDED_ADDR,
	DEVICE_PAN_COORD,
	DEVICE_PROMISCUOUS,
	DEVICE_FRAME_RETRIES,
	DEVICE_TRACES,
	DEVICE_PM_MIN_INACTIVITY_S4,
};
