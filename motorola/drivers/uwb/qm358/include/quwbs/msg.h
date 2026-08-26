/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

/**
 * DOC: QUWBS messages
 *
 * Messages are exchanged between the MAC and higher layers using two queues. The downlink queue
 * allows to send commands to the MAC. The uplink queue allows to receive responses and
 * notifications.
 *
 * The list of possible messages is reduced and should rarely change. Protocol specific exchanges
 * are done through scheduler or region messages.
 */

#include "qobpack.h"
#include "qtils.h"
#include "quwbs/config.h"
#include "quwbs/err.h"
#include "quwbs/quwbs.h"

#ifndef __KERNEL__
#include <stdalign.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct quwbs;
struct quwbs_msg;

/**
 * enum quwbs_msg_type - Message type.
 *
 * @QUWBS_MSG_TYPE_CMD:
 *	Command, from higher layers to MAC.
 * @QUWBS_MSG_TYPE_RSP:
 *	Response to a previous command, from MAC to higher layers.
 * @QUWBS_MSG_TYPE_NTF:
 *	Notification, from MAC to higher layers.
 * @QUWBS_MSG_TYPE_INVALID:
 *      Used for messages invalidated during construction, trying to send them will trigger an
 *      error.
 */
enum quwbs_msg_type {
	QUWBS_MSG_TYPE_CMD = 1,
	QUWBS_MSG_TYPE_RSP = 2,
	QUWBS_MSG_TYPE_NTF = 3,
	QUWBS_MSG_TYPE_INVALID = 0xff,
} __attribute__((packed));

/**
 * enum quwbs_msg_id - Message identifier.
 */
enum quwbs_msg_id {
	/**
	 * @QUWBS_MSG_ID_CORE_DEVICE_STATE: Notify device state change.
	 */
	QUWBS_MSG_ID_CORE_DEVICE_STATE = 0x001,
	/**
	 * @QUWBS_MSG_ID_CORE_GET_DEVICE_INFO: Request device information.
	 */
	QUWBS_MSG_ID_CORE_GET_DEVICE_INFO = 0x002,
	/**
	 * @QUWBS_MSG_ID_CORE_SET_CONFIG: Set device configuration.
	 */
	QUWBS_MSG_ID_CORE_SET_CONFIG = 0x004,
	/**
	 * @QUWBS_MSG_ID_CORE_GET_CONFIG: Get device configuration.
	 */
	QUWBS_MSG_ID_CORE_GET_CONFIG = 0x005,
	/**
	 * @QUWBS_MSG_ID_CORE_GET_TIME: Get current time.
	 */
	QUWBS_MSG_ID_CORE_GET_TIME = 0x008,
	/**
	 * @QUWBS_MSG_ID_MAC_START: Activate MAC. Request to change to the STARTED state (see
	 * &QUWBS_DEVICE_STATE_STARTED).
	 */
	QUWBS_MSG_ID_MAC_START = 0xe00,
	/**
	 * @QUWBS_MSG_ID_MAC_STOP: Deactivate MAC. Request to change to the STOPPED state (see
	 * &QUWBS_DEVICE_STATE_STOPPED).
	 */
	QUWBS_MSG_ID_MAC_STOP = 0xe01,
	/**
	 * @QUWBS_MSG_ID_MAC_SCAN: Enable or disable the scanning state. This allows higher layers
	 * to pause the current activities in order to scan channels.
	 */
	QUWBS_MSG_ID_MAC_SCAN = 0xe07,
	/**
	 * @QUWBS_MSG_ID_MAC_SET_SCHEDULER: Set the MAC scheduler. Can only be done when the MAC is
	 * stopped.
	 */
	QUWBS_MSG_ID_MAC_SET_SCHEDULER = 0xe20,
	/**
	 * @QUWBS_MSG_ID_MAC_GET_SCHEDULER: Retrieve the current MAC scheduler name.
	 */
	QUWBS_MSG_ID_MAC_GET_SCHEDULER = 0xe21,
	/**
	 * @QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS: Set scheduler parameters and/or regions.
	 */
	QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS = 0xe22,
	/**
	 * @QUWBS_MSG_ID_MAC_GET_SCHEDULER_PARAMS: Get scheduler parameters.
	 */
	QUWBS_MSG_ID_MAC_GET_SCHEDULER_PARAMS = 0xe23,
	/**
	 * @QUWBS_MSG_ID_MAC_SET_SCHEDULER_REGIONS: Change scheduler regions (add, replace or
	 * remove).
	 */
	QUWBS_MSG_ID_MAC_SET_SCHEDULER_REGIONS = 0xe24,
	/**
	 * @QUWBS_MSG_ID_MAC_GET_SCHEDULER_REGIONS: Get names of scheduler regions.
	 */
	QUWBS_MSG_ID_MAC_GET_SCHEDULER_REGIONS = 0xe25,
	/**
	 * @QUWBS_MSG_ID_MAC_CALL_SCHEDULER: Call a scheduler procedure.
	 */
	QUWBS_MSG_ID_MAC_CALL_SCHEDULER = 0xe26,
	/**
	 * @QUWBS_MSG_ID_MAC_SET_REGION_PARAMS: Set region parameters.
	 */
	QUWBS_MSG_ID_MAC_SET_REGION_PARAMS = 0xe27,
	/**
	 * @QUWBS_MSG_ID_MAC_GET_REGION_PARAMS: Get region parameters.
	 */
	QUWBS_MSG_ID_MAC_GET_REGION_PARAMS = 0xe28,
	/**
	 * @QUWBS_MSG_ID_MAC_REGION_CALL: Call a region procedure.
	 */
	QUWBS_MSG_ID_MAC_REGION_CALL = 0xe29,
	/**
	 * @QUWBS_MSG_ID_MAC_SESSION_CALL: Call a session procedure.
	 */
	QUWBS_MSG_ID_MAC_SESSION_CALL = 0xe2a,
	/**
	 * @QUWBS_MSG_ID_MAC_CLOSE_SCHEDULER: Release the current scheduler. Can only be done when
	 * the MAC is stopped.
	 */
	QUWBS_MSG_ID_MAC_CLOSE_SCHEDULER = 0xe2d,
	/**
	 * @QUWBS_MSG_ID_TEST_MODE: Call a test mode procedure.
	 */
	QUWBS_MSG_ID_TEST_MODE = 0xe3f,
} __attribute__((packed));

/**
 * typedef quwbs_msg_dequeue_cb - Higher layers message dequeue callback.
 * @msg: Message being dequeued.
 *
 * When a message is dequeued, this callback is called in the context dequeueing the message. This
 * can be used to borrow some processing time from this context.
 *
 * The callback is allowed to change the message following this processing.
 *
 * On return, unless an error is signaled, the caller will handle the message.
 *
 * This is only done on the higher layers receiving end, clients can ignore this detail.
 *
 * Returns: error status, in case of error the message must be released by the callback and caller
 * must not handle it.
 */
typedef enum quwbs_err (*quwbs_msg_dequeue_cb)(struct quwbs_msg *msg);

/**
 * typedef quwbs_msg_recv_cb() - Message reception callback.
 * @user_data: User data provided when this function was registered.
 * @msg: Received message.
 *
 * Ownership is given to this callback, message must be released once handled.
 */
typedef void (*quwbs_msg_recv_cb)(void *user_data, struct quwbs_msg *msg);

/**
 * struct quwbs_msg - Base message structure.
 *
 * This is the base structure for any messages exchanged between the MAC and higher layers. Specific
 * messages derive from this structure.
 *
 * This is the root of an object pack. The message must be released once handled.
 */
struct quwbs_msg {
	/**
	 * @type: Message type.
	 */
	enum quwbs_msg_type type;
	/**
	 * @id: Message identifier corresponding to the requested action.
	 */
	enum quwbs_msg_id id;
	/**
	 * @cookie: Cookie identifying the call.
	 *
	 * For responses, this is the cookie given for the command.
	 *
	 * For notifications, this is the cookie given by the command which triggered the
	 * notification, or 0 if none. Exact corresponding command is defined by the notification
	 * definition.
	 */
	uint32_t cookie;
	/**
	 * @cmd_status: For response only, status of the command, always
	 * &quwbs_err.QUWBS_ERR_SUCCESS for commands or notifications.
	 *
	 * This is &quwbs_err.QUWBS_ERR_INVALID_ID if no scheduler, no corresponding region, or
	 * invalid scope.
	 *
	 * Other error can be returned by the specific command, &quwbs_err.QUWBS_ERR_INVALID is the
	 * most common error corresponding to invalid parameters.
	 */
	enum quwbs_err cmd_status;
	/**
	 * @dequeue_cb: Message dequeue callback or %NULL.
	 */
	quwbs_msg_dequeue_cb dequeue_cb;
};

/**
 * struct quwbs_msg_core_device_state_ntf - Device state change notification message.
 *
 * Type &QUWBS_MSG_TYPE_NTF, identifier &QUWBS_MSG_ID_CORE_DEVICE_STATE.
 *
 * Cookie is 0.
 */
struct quwbs_msg_core_device_state_ntf {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @state: New device state.
	 */
	enum quwbs_device_state state;
};

/**
 * struct quwbs_msg_core_get_device_info_cmd - Request device information command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_CORE_GET_DEVICE_INFO.
 */
struct quwbs_msg_core_get_device_info_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_core_get_device_info_rsp - Request device information response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_CORE_GET_DEVICE_INFO.
 */
struct quwbs_msg_core_get_device_info_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @device_info: Device information.
	 */
	struct quwbs_device_info *device_info;
};

/**
 * struct quwbs_msg_core_set_config_cmd - Set configuration command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_CORE_SET_CONFIG.
 */
struct quwbs_msg_core_set_config_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @configs: Configuration parameters to set, chained list.
	 */
	struct quwbs_msg_config *configs;
};

/**
 * struct quwbs_msg_core_set_config_rsp - Set configuration response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_CORE_SET_CONFIG.
 */
struct quwbs_msg_core_set_config_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @config_statuses: Status for each parameter to set, chained list.
	 */
	struct quwbs_config_status *config_statuses;
};

/**
 * struct quwbs_msg_core_get_config_cmd - Get configuration command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_CORE_GET_CONFIG.
 */
struct quwbs_msg_core_get_config_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @n_config_ids: Number of parameters to get.
	 */
	size_t n_config_ids;
	/**
	 * @config_ids: Array of identifiers, one for each parameter to get.
	 */
	enum quwbs_config_id *config_ids;
};

/**
 * struct quwbs_msg_core_get_config_rsp - Get configuration response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_CORE_GET_CONFIG.
 */
struct quwbs_msg_core_get_config_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @configs: Configuration parameters, chained list.
	 */
	struct quwbs_config *configs;
	/**
	 * @failed_config_statuses: Failed configuration parameters, with status, chained list.
	 */
	struct quwbs_config_status *failed_config_statuses;
};

/**
 * struct quwbs_msg_mac_start_cmd - MAC start command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_START.
 */
struct quwbs_msg_mac_start_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_start_rsp - MAC start response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_START.
 */
struct quwbs_msg_mac_start_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_stop_cmd - MAC stop command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_STOP.
 */
struct quwbs_msg_mac_stop_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_stop_rsp - MAC stop response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_STOP.
 */
struct quwbs_msg_mac_stop_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_scan_cmd - MAC scan command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_SCAN.
 */
struct quwbs_msg_mac_scan_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scan_mode: True to activate scan mode.
	 */
	bool scan_mode;
};

/**
 * struct quwbs_msg_mac_scan_rsp - MAC scan response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_SCAN.
 */
struct quwbs_msg_mac_scan_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_scheduler_region - Scheduler region, given as part of a scheduler message.
 */
struct quwbs_msg_mac_scheduler_region {
	/**
	 * @next: Next element in list or %NULL if last one.
	 */
	struct quwbs_msg_mac_scheduler_region *next;
	/**
	 * @slot: Region slot, specific to scheduler.
	 */
	uint16_t slot;
	/**
	 * @region_id: Region identifier.
	 */
	enum quwbs_region_id region_id;
	/**
	 * @scope_id: Scope of the parameters.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @params: Region parameters, or %NULL for none. Actual type depends on scope.
	 */
	void *params;
};

/**
 * struct quwbs_msg_mac_scheduler_region_id - Scheduler region identifier only, given as part of a
 * scheduler message.
 */
struct quwbs_msg_mac_scheduler_region_id {
	/**
	 * @next: Next element in list or %NULL if last one.
	 */
	struct quwbs_msg_mac_scheduler_region_id *next;
	/**
	 * @slot: Region slot, specific to scheduler.
	 */
	uint16_t slot;
	/**
	 * @region_id: Region identifier.
	 */
	enum quwbs_region_id region_id;
};

/**
 * struct quwbs_msg_mac_set_scheduler_cmd - MAC set scheduler command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_SET_SCHEDULER or
 * &QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS.
 */
struct quwbs_msg_mac_set_scheduler_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier, must match current scheduler for
	 * &QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @scope_id: Scope of the parameters.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @params: Scheduler parameters, or %NULL for none. Actual type depends on scope.
	 */
	void *params;
	/**
	 * @regions: Scheduler regions list, or %NULL for none. When message identifier is
	 * QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS, replace the scheduler regions if not %NULL.
	 */
	struct quwbs_msg_mac_scheduler_region *regions;
};

/**
 * struct quwbs_msg_mac_set_scheduler_rsp - MAC set scheduler response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_SET_SCHEDULER or
 * &QUWBS_MSG_ID_MAC_SET_SCHEDULER_PARAMS.
 */
struct quwbs_msg_mac_set_scheduler_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_get_scheduler_cmd - MAC get scheduler command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER.
 */
struct quwbs_msg_mac_get_scheduler_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_get_scheduler_rsp - MAC get scheduler response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER.
 */
struct quwbs_msg_mac_get_scheduler_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier.
	 */
	enum quwbs_scheduler_id scheduler_id;
};

/**
 * struct quwbs_msg_mac_get_scheduler_params_cmd - MAC get scheduler params command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER_PARAMS.
 */
struct quwbs_msg_mac_get_scheduler_params_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
};

/**
 * struct quwbs_msg_mac_get_scheduler_params_rsp - MAC get scheduler params response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER_PARAMS.
 */
struct quwbs_msg_mac_get_scheduler_params_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scope_id: Scope of the parameters.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @params: Scheduler parameters, or %NULL for none. Actual type depends on scope.
	 */
	void *params;
};

/**
 * struct quwbs_msg_mac_set_scheduler_regions_cmd - MAC change scheduler regions command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_SET_SCHEDULER_REGIONS.
 */
struct quwbs_msg_mac_set_scheduler_regions_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @region_changes: Scheduler region changes list, use &QUWBS_REGION_ID_NONE to remove a
	 * region.
	 */
	struct quwbs_msg_mac_scheduler_region *region_changes;
};

/**
 * struct quwbs_msg_mac_set_scheduler_regions_rsp - MAC change scheduler regions response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_SET_SCHEDULER_REGIONS.
 */
struct quwbs_msg_mac_set_scheduler_regions_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_get_scheduler_regions_cmd - MAC get scheduler regions command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER_REGIONS.
 */
struct quwbs_msg_mac_get_scheduler_regions_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier.
	 */
	enum quwbs_scheduler_id scheduler_id;
};

/**
 * struct quwbs_msg_mac_get_scheduler_regions_rsp - MAC get scheduler regions response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_GET_SCHEDULER_REGIONS.
 */
struct quwbs_msg_mac_get_scheduler_regions_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @region_ids: Scheduler region identifiers list.
	 */
	struct quwbs_msg_mac_scheduler_region_id *region_ids;
};

/**
 * struct quwbs_msg_mac_call_scheduler_cmd - MAC call scheduler procedure command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_CALL_SCHEDULER.
 *
 * Scheduler call command must use this structure as base structure and may be followed by a typed
 * pointer to parameters.
 */
struct quwbs_msg_mac_call_scheduler_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_call_scheduler_rsp_ntf - MAC call scheduler procedure response or
 * notification message.
 *
 * Type &QUWBS_MSG_TYPE_RSP or &QUWBS_MSG_TYPE_NTF, identifier &QUWBS_MSG_ID_MAC_CALL_SCHEDULER.
 *
 * Scheduler call response and notification must use this structure as base structure and may be
 * followed by a typed pointer to parameters.
 */
struct quwbs_msg_mac_call_scheduler_rsp_ntf {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_set_region_params_cmd - MAC set region parameters command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_SET_REGION_PARAMS.
 */
struct quwbs_msg_mac_set_region_params_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @regions: Scheduler regions list with region parameters.
	 */
	struct quwbs_msg_mac_scheduler_region *regions;
};

/**
 * struct quwbs_msg_mac_set_region_params_rsp - MAC set region parameters response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_SET_REGION_PARAMS.
 */
struct quwbs_msg_mac_set_region_params_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_get_region_params_cmd - MAC get region parameters command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_GET_REGION_PARAMS.
 */
struct quwbs_msg_mac_get_region_params_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @slot: Region slot, specific to scheduler.
	 */
	uint16_t slot;
	/**
	 * @region_id: Region identifier.
	 */
	enum quwbs_region_id region_id;
};

/**
 * struct quwbs_msg_mac_get_region_params_rsp - MAC get region parameters response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_GET_REGION_PARAMS.
 */
struct quwbs_msg_mac_get_region_params_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scope_id: Scope of the parameters.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @params: Region parameters, or %NULL for none. Actual type depends on scope.
	 */
	void *params;
};

/**
 * struct quwbs_msg_mac_region_call_cmd - MAC call region command procedure message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_REGION_CALL.
 *
 * Region call command must use this structure as base structure and may be followed by a typed
 * pointer to parameters.
 */
struct quwbs_msg_mac_region_call_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scheduler_id: Scheduler identifier, must match current scheduler.
	 */
	enum quwbs_scheduler_id scheduler_id;
	/**
	 * @region_slot: Region slot, specific to the scheduler.
	 */
	uint16_t region_slot;
	/**
	 * @region_id: Region identifier, must match current region in specified region slot.
	 */
	enum quwbs_region_id region_id;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_region_call_rsp_ntf - MAC call region procedure response or notification
 * message.
 *
 * Type &QUWBS_MSG_TYPE_RSP or &QUWBS_MSG_TYPE_NTF, identifier &QUWBS_MSG_ID_MAC_REGION_CALL.
 *
 * Region call response and notification must use this structure as base structure and may be
 * followed by a typed pointer to parameters.
 *
 * Internal only:
 *
 * There is no region slot here, and this might be a problem if the current scheduler has several
 * regions with the same scope and one of them triggers a notification without cookie. In this case,
 * it is not possible to identify the region which emitted the notification. This is really a corner
 * case.
 */
struct quwbs_msg_mac_region_call_rsp_ntf {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_session_call_cmd - MAC call session command procedure message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_SESSION_CALL.
 *
 * Session call command must use this structure as base structure and may be followed by a typed
 * pointer to parameters.
 */
struct quwbs_msg_mac_session_call_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @session_handle: Session instance reference, generated by the MAC when session
	 * is initialized.
	 */
	uint32_t session_handle;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_session_call_rsp_ntf - MAC call session procedure response or notification
 * message.
 *
 * Type &QUWBS_MSG_TYPE_RSP or &QUWBS_MSG_TYPE_NTF, identifier &QUWBS_MSG_ID_MAC_SESSION_CALL.
 *
 * Session call response and notification must use this structure as base structure and may be
 * followed by a typed pointer to parameters.
 */
struct quwbs_msg_mac_session_call_rsp_ntf {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @session_handle: Session instance reference, generated by the MAC when session
	 * is initialized.
	 */
	uint32_t session_handle;
	/**
	 * @scope_id: Scope of the call.
	 */
	enum quwbs_scope_id scope_id;
	/**
	 * @id: Call identifier, using enumeration defined in the specified scope.
	 */
	uint16_t id;
};

/**
 * struct quwbs_msg_mac_close_scheduler_cmd - MAC close scheduler command message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, identifier &QUWBS_MSG_ID_MAC_CLOSE_SCHEDULER.
 */
struct quwbs_msg_mac_close_scheduler_cmd {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_mac_close_scheduler_rsp - MAC close scheduler response message.
 *
 * Type &QUWBS_MSG_TYPE_RSP, identifier &QUWBS_MSG_ID_MAC_CLOSE_SCHEDULER.
 */
struct quwbs_msg_mac_close_scheduler_rsp {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
};

/**
 * struct quwbs_msg_test_mode - Test mode message.
 *
 * Type &QUWBS_MSG_TYPE_CMD, &QUWBS_MSG_TYPE_RSP or &QUWBS_MSG_TYPE_NTF, identifier
 * &QUWBS_MSG_ID_TEST_MODE.
 */
struct quwbs_msg_test_mode {
	/**
	 * @msg: Base message structure.
	 */
	struct quwbs_msg msg;
	/**
	 * @data: Test data, untyped.
	 */
	struct qnetbuf *data;
};

/**
 * quwbs_msg_new_size() - Allocate and initialize a new message.
 * @ctx: QUWBS context.
 * @type: Message type.
 * @id: Message identifier.
 * @root_size: Size of the message root structure in bytes.
 *
 * When possible, use the &quwbs_msg_new() macro instead.
 *
 * Returns: A pointer to the message root structure, or %NULL if memory is exhausted.
 */
struct quwbs_msg *quwbs_msg_new_size(struct quwbs *ctx, enum quwbs_msg_type type,
				     enum quwbs_msg_id id, size_t root_size);

/**
 * quwbs_msg_new() - Allocate and initialize a new message with automatic type handling.
 * @ctx: QUWBS context.
 * @type: Message type.
 * @id: Message identifier.
 * @root_type: Type of the message root (not the pointer), must include a `msg` member for the base
 * message structure.
 *
 * This is a macro.
 *
 * Returns: A pointer to the message root structure, or %NULL if memory is exhausted. Do not cast
 * the result so that the compiler can detect an erroneous parameter.
 */
#define quwbs_msg_new(ctx, type, id, root_type) \
	(qparent_of(quwbs_msg_new_size((ctx), (type), (id), sizeof(root_type)), root_type, msg))

/**
 * quwbs_msg_free() - Release a message.
 * @msg: Message to release, or %NULL.
 *
 * This releases the message and all associated memory.
 *
 * No-op when called with %NULL.
 */
void quwbs_msg_free(struct quwbs_msg *msg);

/**
 * quwbs_msg_alloc_mem() - Allocate memory for a message.
 * @msg: Message.
 * @size: Size of memory to allocate in bytes.
 * @alignment_mask: Alignment mask of memory to allocate, must be a power of two minus one, and no
 * more than QOBPACK_ALIGNMENT_MAX - 1.
 *
 * Returns: A pointer to the allocated memory, or %NULL if pool is exhausted or request is too large
 * to fit in any block.
 */
static inline void *quwbs_msg_alloc_mem(struct quwbs_msg *msg, size_t size, size_t alignment_mask)
{
	return qobpack_alloc_mem(msg, size, alignment_mask);
}

/**
 * quwbs_msg_alloc_object() - Allocate object for a message.
 * @msg: Message.
 * @type: Type of the object (not the pointer).
 *
 * This is a macro.
 *
 * Returns: A pointer to the allocated object, or %NULL if pool is exhausted or object is too large
 * to fit in any block.
 */
#define quwbs_msg_alloc_object(msg, type) \
	((type *)quwbs_msg_alloc_mem((msg), sizeof(type), alignof(type) - 1))

/**
 * quwbs_msg_alloc_array() - Allocate a continuous array of objects for a message.
 * @msg: Message.
 * @type: Type of the object (not the pointer).
 * @n_elem: Number of elements to allocate.
 *
 * This is a macro.
 *
 * The array must fit in a block. If the caller can handle a segmented array, it is usually a good
 * idea to first query the maximum number of continuous elements which can be allocated and possibly
 * split the allocation in several smaller allocations.
 *
 * Returns: A pointer to the first object of the allocated array, or %NULL if pool is exhausted or
 * array is too large to fit in any block.
 */
#define quwbs_msg_alloc_array(msg, type, n_elem) \
	((type *)quwbs_msg_alloc_mem((msg), (n_elem) * sizeof(type), alignof(type) - 1))

/**
 * quwbs_msg_array_n_elems_mem() - Query the number of array elements that could be allocated
 * continuously.
 * @msg: Message.
 * @elem_size: Size of elements in bytes.
 * @alignment_mask: Alignment mask of elements, must be a power of two minus one, and no more than
 * QOBPACK_ALIGNMENT_MAX - 1.
 *
 * Use this to avoid wasting space at end of block before allocating an array.
 *
 * Use &quwbs_msg_array_n_elems() for a nicer interface.
 *
 * Returns: The number of elements that can be allocated, or 0 if element is too large to fit in any
 * block.
 */
static inline size_t quwbs_msg_array_n_elems_mem(struct quwbs_msg *msg, size_t elem_size,
						 size_t alignment_mask)
{
	return qobpack_array_n_elems_mem(msg, elem_size, alignment_mask);
}

/**
 * quwbs_msg_array_n_elems() - Query the number of array elements that could be allocated
 * continuously.
 * @msg: Message.
 * @type: Type of the object (not the pointer).
 *
 * This is a macro.
 *
 * Use this to avoid wasting space at end of block before allocating an array.
 *
 * Returns: The number of elements that can be allocated, or 0 if element is too large to fit in any
 * block.
 */
#define quwbs_msg_array_n_elems(msg, type) \
	(quwbs_msg_array_n_elems_mem((msg), sizeof(type), alignof(type) - 1))

/**
 * quwbs_msg_send() - Send a message to lower layers.
 * @ctx: QUWBS context.
 * @msg: Message to send, take ownership.
 *
 * This function takes ownership of the message in every cases, the caller must discard its pointer.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_msg_send(struct quwbs *ctx, struct quwbs_msg *msg);

/**
 * quwbs_msg_register_recv_callback() - Register a callback for messages reception.
 * @ctx: QUWBS context.
 * @cb: Callback function to be called when no prior callback handled the received message, %NULL to
 * unset.
 * @user_data: User data to pass to callback function.
 *
 * Messages are only given to the callback if they were not handled by something else. In
 * particular, a message is not given to the callback if there is a specific callback registered for
 * it.
 */
void quwbs_msg_register_recv_callback(struct quwbs *ctx, quwbs_msg_recv_cb cb, void *user_data);

#ifdef __cplusplus
}
#endif
