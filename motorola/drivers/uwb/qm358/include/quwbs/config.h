/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

#include "quwbs/err.h"

#ifndef __KERNEL__
#include <stdbool.h>
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct quwbs;
struct quwbs_msg_config_status;

/**
 * DOC: QUWBS Configuration
 *
 * Configuration parameters are global device parameters. They include PIB (PAN Information Base)
 * attributes defined in 802.15.4. Those PIB attributes may be used or not depending of the
 * protocol.
 */

/**
 * enum quwbs_config_id - Configuration parameter identifiers.
 * @QUWBS_CONFIG_ID_DEVICE_STATE: Device state (read only).
 * @QUWBS_CONFIG_ID_LOW_POWER_MODE: Low power mode.
 * @QUWBS_CONFIG_ID_PHY_CURRENT_CHANNEL: phyCurrentChannel PIB.
 * @QUWBS_CONFIG_ID_PHY_CURRENT_CODE: phyCurrentCode PIB.
 * @QUWBS_CONFIG_ID_MAC_PAN_ID: macPanId PIB.
 * @QUWBS_CONFIG_ID_MAC_SHORT_ADDR: macShortAddress PIB.
 * @QUWBS_CONFIG_ID_MAC_EXTENDED_ADDR: macExtendedAddress PIB.
 * @QUWBS_CONFIG_ID_MAC_PAN_COORD: Pan coordinator.
 * @QUWBS_CONFIG_ID_MAC_PROMISCUOUS_MODE: macPromiscuousMode PIB.
 * @QUWBS_CONFIG_ID_MAC_MAX_FRAME_RETRIES: macMaxFrameRetries PIB.
 */
enum quwbs_config_id {
	QUWBS_CONFIG_ID_DEVICE_STATE = 0x00,
	QUWBS_CONFIG_ID_LOW_POWER_MODE = 0x01,
	QUWBS_CONFIG_ID_PHY_CURRENT_CHANNEL = 0xa0,
	QUWBS_CONFIG_ID_PHY_CURRENT_CODE = 0xa1,
	QUWBS_CONFIG_ID_MAC_PAN_ID = 0xa2,
	QUWBS_CONFIG_ID_MAC_SHORT_ADDR = 0xa3,
	QUWBS_CONFIG_ID_MAC_EXTENDED_ADDR = 0xa4,
	QUWBS_CONFIG_ID_MAC_PAN_COORD = 0xa5,
	QUWBS_CONFIG_ID_MAC_PROMISCUOUS_MODE = 0xa6,
	QUWBS_CONFIG_ID_MAC_MAX_FRAME_RETRIES = 0xa7,
} __attribute__((packed));

/**
 * typedef quwbs_config_set_cb() - Set configuration callback.
 * @user_data: User data provided when this function was registered.
 * @status: QUWBS_ERR_SUCCESS or error setting the configuration.
 * @config_statuses: Status for each parameter to set, chained list, lent to callback, %NULL on
 * error.
 */
typedef void (*quwbs_config_set_cb)(void *user_data, enum quwbs_err status,
				    const struct quwbs_msg_config_status *config_statuses);

/**
 * quwbs_config_register_set_callback() - Register a callback for set configuration.
 * @ctx: QUWBS context.
 * @cb: Callback function to be called once the set configuration response is available, %NULL to
 * unset.
 * @user_data: User data to pass to callback function.
 *
 * One of the configuration function must be used to request setting the configuration. Once
 * response is available, the callback is triggered.
 */
void quwbs_config_register_set_callback(struct quwbs *ctx, quwbs_config_set_cb cb, void *user_data);

/**
 * quwbs_config_set_phy_current_channel_code() - Set phyCurrentChannel and phyCurrentCode PIBs.
 * @ctx: QUWBS context.
 * @phy_current_channel: Channel to use.
 * @phy_current_code: Preamble code index to use.
 *
 * Set the channel and preamble code index, used by protocols supporting this PIB. Some protocols
 * handle this by themself.
 *
 * Channel page (phyCurrentPage PIB) is always set to 4.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_phy_current_channel_code(struct quwbs *ctx, int phy_current_channel,
							 int phy_current_code);

/**
 * quwbs_config_set_mac_pan_id() - Set macPanId PIB.
 * @ctx: QUWBS context.
 * @mac_pan_id: Identifier of the PAN on which the device is operating, 0xffff if not associated.
 *
 * Set PAN ID, used by protocols supporting this PIB.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_mac_pan_id(struct quwbs *ctx, uint16_t mac_pan_id);

/**
 * quwbs_config_set_mac_short_addr() - Set macShortAddress PIB.
 * @ctx: QUWBS context.
 * @mac_short_addr: The address the device uses to communicate in the PAN.
 *
 * Set short address, used by protocols supporting this PIB.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_mac_short_addr(struct quwbs *ctx, uint16_t mac_short_addr);

/**
 * quwbs_config_set_mac_extended_addr() - Set macExtendedAddress PIB.
 * @ctx: QUWBS context.
 * @mac_extended_addr: The device extended address.
 *
 * Set extended address, used by protocols supporting this PIB.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_mac_extended_addr(struct quwbs *ctx, uint64_t mac_extended_addr);

/**
 * quwbs_config_set_mac_promiscuous_mode() - Set macPromiscuousMode PIB.
 * @ctx: QUWBS context.
 * @mac_promiscuous_mode: True to enable promiscuous mode.
 *
 * If promiscuous mode is enabled, the hardware filtering is disabled. Used by protocols supporting
 * this PIB.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_mac_promiscuous_mode(struct quwbs *ctx, bool mac_promiscuous_mode);

/**
 * quwbs_config_set_mac_max_frame_retries() - Set macMaxFrameRetries PIB.
 * @ctx: QUWBS context.
 * @mac_max_frame_retries: Number of retries between 0 and 7.
 *
 * Set the number of retries when sending a frame, used by protocols supporting this PIB.
 *
 * The quwbs_config_register_set_callback() function must be used to register the callback receiving
 * the status of the operation.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_config_set_mac_max_frame_retries(struct quwbs *ctx, int mac_max_frame_retries);

#ifdef __cplusplus
}
#endif
