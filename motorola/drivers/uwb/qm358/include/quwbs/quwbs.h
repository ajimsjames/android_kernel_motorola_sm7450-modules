/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1
 */

#pragma once

/**
 * DOC: QUWBS API
 *
 * Initialization and context
 * --------------------------
 *
 * The QUWBS API must be initialized before use. The context pointer used with quwbs_init() must be
 * given to all other QUWBS functions requiring a context. Some functions do not take the QUWBS
 * context directly because it may be stored inside another QUWBS object.
 *
 * When done, the API can be closed using quwbs_exit(). On embedded targets, this can be skipped and
 * the terminating functions will be removed at link stage.
 *
 *
 * Asynchronous API
 * ----------------
 *
 * The main offered API is asynchronous. This means that no function blocks waiting for an operation
 * to complete. Instead, when an operation is submitted and can not be completed immediately, the
 * function returns immediately and a callback will be called later with the result.
 *
 * If a function can trigger a callback, this is described in the function documentation.
 *
 * The QUWBS API does not create threads. This means that the application must call the QUWBS API so
 * that it can handle events when they are ready to be handled. The way to do this is platform
 * dependant as the application main loop must be able to determine whether QUWBS API has some work
 * to do. However, the synchronous API can be used to handle the platform dependant part.
 *
 *
 * Synchronous API
 * ---------------
 *
 * A synchronous interface is provided for simple use cases. Functions from the synchronous API can
 * block until the requested operation is complete. This has the limitation that the caller thread
 * can no longer handle several tasks in parallel, but the code may be simpler to write.
 *
 * Thread safety
 * -------------
 *
 * The QUWBS API is designed to be used from a single context of execution. If client needs to
 * access it from several contexts, it needs to protect itself from accessing QUWBS API from several
 * contexts at the same time.
 *
 * The asynchronous QUWBS API is reentrant, when client code is called from a callback function, it
 * can use any asynchronous QUWBS API function.
 */

/**
 * DOC: Cookies and channels
 *
 * Internal.
 *
 * UWBMAC API had channels to match netlink sockets. On UCI, there is no such thing, so the UCI back
 * end had to try translating cookies to channels with more or less success. Just stop doing this,
 * do not try to implement a non-existing feature. Users who want to handle cookies will have to do
 * it themself, but many do not care and for them the interface is now simpler.
 */

#include "quwbs/err.h"

#ifndef __KERNEL__
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct qblk_pool;
struct quwbs;
struct qworkqueue;

/**
 * enum quwbs_device_state - State of the device.
 * @QUWBS_DEVICE_STATE_STOPPED:
 *      Device is stopped, MAC configuration and low level calibration can be changed. UWB timestamp
 *      may be stopped. Firmware may transition automatically out of this state to the READY state
 *      at boot.
 * @QUWBS_DEVICE_STATE_READY:
 *	Device is ready to start sessions or protocols.
 * @QUWBS_DEVICE_STATE_ACTIVE:
 *	Device is active, there is at least one active session or protocol. Transition to this state
 *	is automatic as soon as a session is started or a protocol enters an active state, meaning
 *	that the medium is being accessed. When no session and no protocol access the medium, device
 *	transitions automatically to the READY state.
 * @QUWBS_DEVICE_STATE_ERROR:
 *	Device is in an unrecoverable error state and must be restarted.
 *
 * Internal Only: This is a merge of FiRa Based Session device state and MAC state. When starting
 * the MAC, device goes to READY state. When a session or a protocol is started, it signals the MAC
 * that it starts. The MAC counts the number of starts and stops and adjust its READY/ACTIVE state
 * accordingly. This allows to remove intelligence from the UCI layer and centralise information in
 * the MAC. On boot, if no persistent calibration is available, the device can be kept in the
 * STOPPED state until a calibration is received.
 */
enum quwbs_device_state {
	QUWBS_DEVICE_STATE_STOPPED = 0x00,
	QUWBS_DEVICE_STATE_READY = 0x01,
	QUWBS_DEVICE_STATE_ACTIVE = 0x02,
	QUWBS_DEVICE_STATE_ERROR = 0xff,
};

/**
 * QUWBS_QORVO_DEVICE_INFO_SOC_ID_LEN - Length of Qorvo specific chip identifier.
 */
#define QUWBS_QORVO_DEVICE_INFO_SOC_ID_LEN 32

/**
 * struct quwbs_qorvo_device_info - Qorvo specific device information.
 */
struct quwbs_qorvo_device_info {
	/**
	 * @firmware_version_major: Major internal firmware version.
	 *
	 * Full internal firmware version is null when not relevant (no internal firmware).
	 */
	uint8_t firmware_version_major;
	/**
	 * @firmware_version_minor: Minor internal firmware version.
	 */
	uint8_t firmware_version_minor;
	/**
	 * @firmware_version_patch: Patch internal firmware version.
	 */
	uint8_t firmware_version_patch;
	/**
	 * @firmware_version_rc: RC internal firmware version.
	 */
	uint8_t firmware_version_rc;
	/**
	 * @build_id: Unique firmware build identifier.
	 */
	uint64_t build_id;
	/**
	 * @oem_version_major: Major product firmware version.
	 */
	uint8_t oem_version_major;
	/**
	 * @oem_version_minor: Minor product firmware version.
	 */
	uint8_t oem_version_minor;
	/**
	 * @oem_version_patch: Patch product firmware version.
	 */
	uint8_t oem_version_patch;
	/**
	 * @soc_id: Unique chip identifier.
	 */
	uint8_t soc_id[QUWBS_QORVO_DEVICE_INFO_SOC_ID_LEN];
	/**
	 * @device_id: Device identifier.
	 */
	uint32_t device_id;
	/**
	 * @package_id: Package identifier, 0 for SoC, 1 for SIP.
	 */
	uint8_t package_id;
};

/**
 * struct quwbs_device_info - Device information.
 */
struct quwbs_device_info {
	/**
	 * @fira_uci_generic_version: FiRa UCI Generic specification version.
	 *
	 * Only applicable when communicating over UCI, else 0.
	 *
	 * When FiRa support is not enabled, this is the version UCI transport is based on.
	 *
	 * Version aa.b.c is coded as 0xbcaa.
	 */
	uint16_t fira_uci_generic_version;
	/**
	 * @fira_mac_version: FiRa MAC specification version.
	 *
	 * Only applicable when FiRa support is enabled, else 0.
	 *
	 * Version aa.b.c is coded as 0xbcaa.
	 */
	uint16_t fira_mac_version;
	/**
	 * @fira_phy_version: FiRa PHY specification version.
	 *
	 * Only applicable when FiRa support is enabled, else 0.
	 *
	 * Version aa.b.c is coded as 0xbcaa.
	 */
	uint16_t fira_phy_version;
	/**
	 * @fira_uci_test_version: FiRa UCI test specification version.
	 *
	 * Only applicable when FiRa test support is enabled, else 0.
	 *
	 * Version aa.b.c is coded as 0xbcaa.
	 */
	uint16_t fira_uci_test_version;
	/**
	 * @qorvo_device_info: Qorvo specific device information.
	 *
	 * Only applicable when device is a Qorvo device, else %NULL.
	 */
	const struct quwbs_qorvo_device_info *qorvo_device_info;
};

/**
 * enum quwbs_scheduler_id - Scheduler identifier.
 */
enum quwbs_scheduler_id {
	/**
	 * @QUWBS_SCHEDULER_ID_DEFAULT: Default scheduler.
	 */
	QUWBS_SCHEDULER_ID_DEFAULT = 0,
	/**
	 * @QUWBS_SCHEDULER_ID_ENDLESS: Endless scheduler, use a simple endless allocation.
	 */
	QUWBS_SCHEDULER_ID_ENDLESS = 1,
	/**
	 * @QUWBS_SCHEDULER_ID_ON_DEMAND: On demand scheduler, give access to several regions, on
	 * demand.
	 */
	QUWBS_SCHEDULER_ID_ON_DEMAND = 2,
};

/**
 * enum quwbs_region_id - Region identifier.
 */
enum quwbs_region_id {
	/**
	 * @QUWBS_REGION_ID_NONE: No region, used to remove region.
	 */
	QUWBS_REGION_ID_NONE = 0,
	/**
	 * @QUWBS_REGION_ID_DEFAULT: Default region, simple Rx and Tx.
	 */
	QUWBS_REGION_ID_DEFAULT = 1,
	/**
	 * @QUWBS_REGION_ID_FBS: FiRa Based Session.
	 */
	QUWBS_REGION_ID_FBS = 2,
	/**
	 * @QUWBS_REGION_ID_LLDC: LLD controller.
	 */
	QUWBS_REGION_ID_LLDC = 3,
	/**
	 * @QUWBS_REGION_ID_LLDD: LLD device.
	 */
	QUWBS_REGION_ID_LLDD = 4,
	/**
	 * @QUWBS_REGION_ID_PCTT: Phy tests.
	 */
	QUWBS_REGION_ID_PCTT = 5,
};

/*
 * enum quwbs_scope_id - Scope identifier.
 *
 * A scope is specific to a component, it can be attached to schedulers, regions or sessions. The
 * scope always need to be explicit to avoid guessing and having a wrong message interpretation.
 */
enum quwbs_scope_id {
	/**
	 * @QUWBS_SCOPE_ID_NONE: No scope, used when no value to describe.
	 */
	QUWBS_SCOPE_ID_NONE = 0,
	/**
	 * @QUWBS_SCOPE_ID_FBS: FiRa Based Session.
	 */
	QUWBS_SCOPE_ID_FBS = 2,
	/**
	 * @QUWBS_SCOPE_ID_LLDC: LLD controller.
	 */
	QUWBS_SCOPE_ID_LLDC = 3,
	/**
	 * @QUWBS_SCOPE_ID_LLDD: LLD device.
	 */
	QUWBS_SCOPE_ID_LLDD = 4,
	/**
	 * @QUWBS_SCOPE_ID_PCTT: PCTT.
	 */
	QUWBS_SCOPE_ID_PCTT = 5,
	/**
	 * @QUWBS_SCOPE_ID_FIRA: FiRa session.
	 */
	QUWBS_SCOPE_ID_FIRA = 6,
	/**
	 * @QUWBS_SCOPE_ID_CCC: CCC session.
	 */
	QUWBS_SCOPE_ID_CCC = 7,
	/**
	 * @QUWBS_SCOPE_ID_RADAR: Radar session.
	 */
	QUWBS_SCOPE_ID_RADAR = 8,
	/**
	 * @QUWBS_SCOPE_ID_MAX: Internal use.
	 */
	QUWBS_SCOPE_ID_MAX = QUWBS_SCOPE_ID_RADAR,
};

/**
 * typedef quwbs_device_state_cb() - Receive a device state change callback.
 * @user_data: User data provided when this function was registered.
 * @state: New device state.
 */
typedef void (*quwbs_device_state_cb)(void *user_data, enum quwbs_device_state state);

/**
 * typedef quwbs_time_cb() - Receive time callback.
 * @user_data: User data provided when this function was registered.
 * @status: QUWBS_ERR_SUCCESS or error retrieving requested information.
 * @time_ns: Current time in nanosecond, 0 on error.
 */
typedef void (*quwbs_time_cb)(void *user_data, enum quwbs_err status, uint64_t time_ns);

/**
 * typedef quwbs_device_info_cb() - Receive device information callback.
 * @user_data: User data provided when this function was registered.
 * @status: QUWBS_ERR_SUCCESS or error retrieving requested information.
 * @device_info: Device information, lent to callback, %NULL on error.
 */
typedef void (*quwbs_device_info_cb)(void *user_data, enum quwbs_err status,
				     const struct quwbs_device_info *device_info);

/**
 * quwbs_init() - Initialize QUWBS API.
 * @ctx: Location to store the context. Only valid when QUWBS_ERR_SUCCESS is returned.
 *
 * This must be called before calling any other QUWBS function.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_init(struct quwbs *ctx);

/**
 * quwbs_exit() - Deinitialize QUWBS API.
 * @ctx: QUWBS context.
 *
 * After this call, the context pointer is unusable and must be discarded. This does not cleanly
 * stops the device, this has to be done before calling this function.
 */
void quwbs_exit(struct quwbs *ctx);

/**
 * quwbs_register_pool() - Register a QBlk pool for message allocation.
 * @ctx: QUWBS context.
 * @pool: Previously initialized pool.
 */
void quwbs_register_pool(struct quwbs *ctx, struct qblk_pool *pool);

/**
 * quwbs_register_workqueue() - Register a workqueue for notification handling.
 * @ctx: QUWBS context.
 * @wq: Workqueue to be registered, %NULL to unset.
 *
 * TODO: this is a temporary interface until execution model is implemented.
 */
void quwbs_register_workqueue(struct quwbs *ctx, struct qworkqueue *wq);

/**
 * quwbs_register_device_state_callback() - Register a callback for device state change.
 * @ctx: QUWBS context.
 * @cb: Callback function to be called when the device state change, %NULL to unset.
 * @user_data: User data to pass to callback function.
 */
void quwbs_register_device_state_callback(struct quwbs *ctx, quwbs_device_state_cb cb,
					  void *user_data);

/**
 * quwbs_register_time_callback() - Register a callback for device time.
 * @ctx: QUWBS context.
 * @cb: Callback function to be called when the time is available, %NULL to unset.
 * @user_data: User data to pass to callback function.
 *
 * The quwbs_get_time() function must be used to request time. Once it is available, the callback is
 * triggered.
 */
void quwbs_register_time_callback(struct quwbs *ctx, quwbs_time_cb cb, void *user_data);

/**
 * quwbs_register_device_info_callback() - Register a callback for device information.
 * @ctx: QUWBS context.
 * @cb: Callback function to be called when device information is available, %NULL to unset.
 * @user_data: User data to pass to callback function.
 *
 * The quwbs_get_device_info() function must be used to request information. Once it is available,
 * the callback is triggered.
 */
void quwbs_register_device_info_callback(struct quwbs *ctx, quwbs_device_info_cb cb,
					 void *user_data);

/**
 * quwbs_start() - Request to start the device.
 * @ctx: QUWBS context.
 *
 * Request to transition from the STOPPED state to the READY state, ignored if the device is not
 * STOPPED.
 *
 * A device may transition automatically to the READY state depending on its firmware.
 *
 * See &enum quwbs_device_state for more details.
 *
 * See quwbs_register_device_state_callback() to be informed about the state change.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_start(struct quwbs *ctx);

/**
 * quwbs_stop() - Request to stop the device.
 * @ctx: QUWBS context.
 *
 * Request to transition to the STOPPED state, ignored if the device is STOPPED yet.
 *
 * See &enum quwbs_device_state for more details.
 *
 * As other functions, this is asynchronous, the device may need some time to stop.
 *
 * See quwbs_register_device_state_callback() to be informed about the state change.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_stop(struct quwbs *ctx);

/**
 * quwbs_get_time() - Get the current device time.
 * @ctx: QUWBS context.
 *
 * The quwbs_register_time_callback() function must be used to register the callback receiving the
 * time.
 *
 * On some implementations, information is available without delay, in this case, this can trigger
 * calling of corresponding registered callback immediately.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_get_time(struct quwbs *ctx);

/**
 * quwbs_get_device_info() - Request device information.
 * @ctx: QUWBS context.
 *
 * The quwbs_register_device_info_callback() function must be used to register the callback
 * receiving information.
 *
 * On some implementations, information is available without delay, in this case, this can trigger
 * calling of corresponding registered callback immediately.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_get_device_info(struct quwbs *ctx);

/**
 * quwbs_handle_events() - Handle pending events and return.
 * @ctx: QUWBS context.
 *
 * Handle any pending events and return without blocking.
 *
 * This can trigger calling of registered callbacks.
 *
 * Returns: QUWBS_ERR_SUCCESS or error.
 */
enum quwbs_err quwbs_handle_events(struct quwbs *ctx);

#ifdef __cplusplus
}
#endif
