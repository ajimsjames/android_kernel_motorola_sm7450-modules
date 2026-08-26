/*
 * SPDX-FileCopyrightText: Copyright (c) 2020 Qorvo, Inc.
 * SPDX-License-Identifier: LicenseRef-QORVO-1 OR GPL-2.0
 */

#pragma once

#include "qerr.h"
#include "quwbs/msg.h"
#include "uwbmac/uwbmac_buf.h" /* IWYU pragma: keep */
#include "uwbmac/uwbmac_msg.h" /* IWYU pragma: keep */

/* IWYU pragma: no_include <stdbool.h> */
/* IWYU pragma: no_include <stddef.h> */
/* IWYU pragma: no_include <stdint.h> */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * QDEPRECATED() - Marks a function as deprecated.
 * @when: when the function will be removed.
 * @what: what to use instead.
 */
#if defined(__GNUC__) || defined(__clang__)
#define QDEPRECATED(when, what) \
	__attribute__((deprecated("will be removed " #when ", please use " #what " instead.")))
#else
#define QDEPRECATED(when, what)
#endif

/**
 * UWBMAC_MAX_CHANNEL_COUNT - Maximum number of channels in use at the same
 * time.
 */
#define UWBMAC_MAX_CHANNEL_COUNT 10

/**
 * enum uwbmac_device_state - State of the device.
 * @UWBMAC_DEVICE_STATE_STOPPED:
 *	Device is stopped.
 * @UWBMAC_DEVICE_STATE_STARTED:
 *	Device is started.
 * @UWBMAC_DEVICE_STATE_BROKEN:
 *	Device is in a unrecoverable broken state.
 */
enum uwbmac_device_state {
	UWBMAC_DEVICE_STATE_STOPPED,
	UWBMAC_DEVICE_STATE_STARTED,
	UWBMAC_DEVICE_STATE_BROKEN,
};

/**
 * typedef uwbmac_device_state_cb() - Receive a device state report callback.
 * @user_data: data given when registering this callback.
 * @state: New device state.
 *
 * This is called when the device changes state.
 *
 * Return: nothing.
 */
typedef void (*uwbmac_device_state_cb)(void *user_data, enum uwbmac_device_state state);

/**
 * typedef uwbmac_call_region_cb() - Receive a region call callback.
 * @user_data: data given when registering this callback.
 * @call_id: the region call identifier.
 * @call_params: the payload of the callback.
 *
 * Return: nothing.
 */
typedef void (*uwbmac_call_region_cb)(void *user_data, uint32_t call_id,
				      struct uwbmac_msg *call_params);

/*
 * struct uwbmac_context: UWB MAC context (opaque)
 */
struct uwbmac_context;

/**
 * struct uwbmac_data_ops - Data operations.
 *
 * The same interface is used for any data transfer when at least one of the
 * active regions implements it.
 *
 * Data is sent and received as MPDU without the FCS, this means that the MAC
 * header must be included, but not the MAC footer. The data must be included in
 * a &struct uwbmac_buf.
 *
 * Transmission:
 *
 * To send a data frame, use the uwbmac_tx() function. The MAC will handle all
 * the timing details and send the frame when possible. Once the frame has been
 * sent, or when the MAC determined that the frame cannot be sent, the
 * &uwbmac_data_ops.tx_done callback is called so that the application can have
 * a status of the transmission and reclaim memory.
 *
 * The MAC can handle several queues. Frame ordering for a recipient inside
 * a queue is guaranteed, but not between two different recipients or between
 * two different queues.
 *
 * A queue can be stopped or woken up. When a queue is stopped, the application
 * is expected to refrain transmission of any other frame for the same queue.
 * Any transmission attempt will result in a error returned by uwbmac_tx().
 * Queue state change is signaled by &uwbmac_data_ops.tx_queue_stop and
 * &uwbmac_data_ops.tx_queue_wake callbacks. Queues start in the woken up state.
 *
 * Reception:
 *
 * When a data frame is received by the MAC, the &uwbmac_data_ops.rx callback is
 * called. The callback must quickly handle the received frame and return.
 * Typical implementation will add the received data in a FIFO and wake the
 * processing thread. Once the frame data has been processed, the application
 * must release the associated memory.
 *
 * Application can also control the flow of data reception by calling the
 * uwbmac_rx_queue_stop() and uwbmac_rx_queue_wake() function. Queues start in
 * the woken up state.
 */
struct uwbmac_data_ops {
	/**
	 * @tx_done: Called when a buffer given to &uwbmac_tx() can be disposed.
	 * If NULL, buffer is released.
	 *
	 * The success parameter is true if the transmission was done
	 * successfully.
	 *
	 * This callback must return quickly and it must not reenter the MAC.
	 * Typical implementation will release the memory, or add the buffer in
	 * a FIFO and wake up the processing thread.
	 */
	void (*tx_done)(void *user_data, struct uwbmac_buf *buf, bool success);
	/**
	 * @tx_queue_stop: Called to signal a queue is stopped. Application
	 * should refrain from transmitting more data frame on this queue. If
	 * NULL, ignored.
	 *
	 * This can be called while the application is calling a MAC function.
	 *
	 * This callback must return quickly and it must not reenter the MAC.
	 * Typical implementation will clear a flag.
	 */
	void (*tx_queue_stop)(void *user_data, int queue_index);
	/**
	 * @tx_queue_wake: Called to signal a queue is woken up. Application can
	 * resume data frame transmission on this queue. If NULL, ignored.
	 *
	 * This callback must return quickly and it must not reenter the MAC.
	 * Typical implementation will set a flag and wake up the processing
	 * thread.
	 */
	void (*tx_queue_wake)(void *user_data, int queue_index);
	/**
	 * @rx: Called when a data frame has been received and that the
	 * receiving queue is not stopped. If NULL, buffer is released.
	 *
	 * This callback must return quickly and it must not reenter the MAC.
	 * Typical implementation will add the buffer in a FIFO and wake up the
	 * processing thread.
	 */
	void (*rx)(void *user_data, struct uwbmac_buf *buf, int queue_index);
};

/**
 * uwbmac_get_device_count() - Get the number of uwb chips available.
 * @context: UWB MAC context.
 * @count: Number of uwb devices.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_device_count(struct uwbmac_context *context, int *count);

/**
 * uwbmac_get_supported_channels() - Get the supported UWB channels
 * @context: UWB MAC context.
 * @channels: (out parameter) bitmask for supported channels.
 * First bit is for channel 0, and so on.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_supported_channels(struct uwbmac_context *context, uint16_t *channels);

/**
 * uwbmac_init_device() - Fill the corresponding device information.
 * @context: UWB MAC context.
 * @idx: index of the device.
 *
 * NOTE: use &uwbmac_get_device_count to check how many devices are present.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_init_device(struct uwbmac_context *context, unsigned int idx);

/**
 * uwbmac_register_device_state_callback() - Register a callback for device
 * state change.
 * @context: UWB MAC context.
 * @cb: Callback to call on device state change.
 * @user_data: Context to give back to callback.
 */
void uwbmac_register_device_state_callback(struct uwbmac_context *context,
					   uwbmac_device_state_cb cb, void *user_data);

/*
 * struct uwbmac_channel - Abstract channel of communication with uwb stack.
 */
struct uwbmac_channel {
	/**
	 *@uwbmac: Pointer to associated UWB MAC context.
	 */
	struct uwbmac_context *uwbmac;
	/**
	 *@port_id: communication link identification
	 */
	uint8_t port_id;
};

/**
 * uwbmac_channel_create() - Create a new channel.
 * @context: UWB MAC context.
 * @channel: The channel to be created.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_channel_create(struct uwbmac_context *context, struct uwbmac_channel *channel);

/**
 * uwbmac_channel_release() - Release a channel.
 * @channel: The channel to be released.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_channel_release(struct uwbmac_channel *channel);

/**
 * uwbmac_channel_set_timeout() - Set a timeout on a channel.
 * @channel: The channel .
 * @timeout: The timeout in seconds.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_channel_set_timeout(struct uwbmac_channel *channel, int timeout);

/**
 * uwbmac_channel_receive() - Ask channel to process incoming messages if any.
 * @channel: The channel that should process the messages.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_channel_receive(struct uwbmac_channel *channel);

/**
 * uwbmac_register_report_callback_nl() - Register a region callback for a specific
 * channel.
 * @channel: The channel associated with this callback.
 * @msg_cb: Callback to call when a report is available on this channel.
 * @user_data: Context to give back to callback.
 *
 * This function registers the callback to call in case of a mac event.
 *
 * NOTE: In embedded application, the callback might be called from MAC context,
 * large treatments should be deferred.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_register_report_callback_nl(struct uwbmac_channel *channel,
					     uwbmac_call_region_cb msg_cb, void *user_data);

/**
 * uwbmac_register_report_callback() - Register a callback for a specific scope of message.
 * Register with callback NULL to unregister.
 * @id: Scope identifier.
 * @cb: The message handler.
 * @user_data: Context to give back to callback.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_register_report_callback(enum quwbs_scope_id id, quwbs_msg_recv_cb cb,
					  void *user_data);

/**
 * uwbmac_register_data_ops() - Set callbacks used for data transfer.
 * @context: UWB MAC context.
 * @user_data: Context to give back to callback.
 * @ops: Structure with the data callbacks must be kept valid. NULL to clear
 * callbacks.
 *
 * Please see &struct uwbmac_data_ops for details.
 */
void uwbmac_register_data_ops(struct uwbmac_context *context, void *user_data,
			      const struct uwbmac_data_ops *ops);

/**
 * uwbmac_init() - Initialize the UWB MAC and return an UWB MAC context.
 * @context: UWB MAC context.
 *
 * NOTE: Some flavors of uwbmac have their own init method in their dedicated
 * headers.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_init(struct uwbmac_context **context);

/**
 * uwbmac_exit() - Free the UWB MAC.
 * @context: UWB MAC context.
 */
void uwbmac_exit(struct uwbmac_context *context);

/**
 * uwbmac_start() - Start the device.
 * @context: UWB MAC context.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_start(struct uwbmac_context *context);

/**
 * uwbmac_stop() - Stop the device.
 * @context: UWB MAC context.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_stop(struct uwbmac_context *context);

/**
 * uwbmac_is_started() - Return the state of UWB MAC.
 * @context: UWB MAC context.
 *
 * Return: true if UWB MAC is started, false otherwise.
 */
bool uwbmac_is_started(struct uwbmac_context *context);

/**
 * uwbmac_poll_events() - Poll next event.
 * @context: UWB MAC context.
 * @timeout_us: Timeout, in micro-seconds, for the poll.
 *
 * This function is only available if you passed a NULL @event_loop_ops to
 * uwbmac_init().
 *
 * Passing 0 for @timeout_us will make the call non-bloquing: existent pending
 * event will be consume, and if there is no event the function will return
 * instead of blocking.
 *
 * Passing a value greated than 0 will make the function block until the timeout
 * is reached when there is no pending event.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_poll_events(struct uwbmac_context *context, uint64_t timeout_us);

/**
 * uwbmac_set_frame_retries() - Set number of retries.
 * @context: UWB MAC context.
 * @retries: Number of retries between 0 and 7.
 *
 * Set the number of tx frame retries when sending a frame with ACK.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_frame_retries(struct uwbmac_context *context, int retries);

/**
 * uwbmac_tx() - Send a data frame.
 * @context: UWB MAC context.
 * @buf: Frame buffer.
 * @queue_index: Corresponding queue.
 *
 * Please see &struct uwbmac_data_ops for details.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_tx(struct uwbmac_context *context, struct uwbmac_buf *buf, int queue_index);

/**
 * uwbmac_tx_drop() - Notifies a packet drop.
 * @buf: Frame buffer.
 *
 */
void uwbmac_tx_drop(struct uwbmac_buf *buf);

/**
 * uwbmac_rx_queue_stop() - Stop a reception queue.
 * @context: UWB MAC context.
 * @queue_index: Corresponding queue.
 *
 * Please see &struct uwbmac_data_ops for details.
 */
void uwbmac_rx_queue_stop(struct uwbmac_context *context, int queue_index);

/**
 * uwbmac_rx_queue_wake() - Wake up a reception queue.
 * @context: UWB MAC context.
 * @queue_index: Corresponding queue.
 *
 * Please see &struct uwbmac_data_ops for details.
 */
void uwbmac_rx_queue_wake(struct uwbmac_context *context, int queue_index);

QDEPRECATED(in the near future, uwbmac_set_channel_preamble_code)
/**
 * uwbmac_set_channel() - Set UWB channel to use.
 * @context: UWB MAC context.
 * @channel: Uwb channel, supported channels depend on driver/hardware.
 * @deprecated
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_channel(struct uwbmac_context *context, int channel);

QDEPRECATED(in the near future, uwbmac_get_channel_preamble_code)
/**
 * uwbmac_get_channel() - Get used UWB channel.
 * @context: UWB MAC context.
 * @channel: Uwb channel, supported channels depend on driver/hardware.
 * @deprecated
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_channel(struct uwbmac_context *context, int *channel);

/**
 * uwbmac_set_channel_preamble_code() - Set UWB channel and preamble code to
 * use.
 * @context: UWB MAC context.
 * @channel: UWB channel, supported channels depend on driver/hardware.
 * @preamble_code: UWB preamble code.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_channel_preamble_code(struct uwbmac_context *context, int channel,
					   int preamble_code);

/**
 * uwbmac_get_channel_preamble_code() - Get currently used UWB channel and
 * preamble code.
 * @context: UWB MAC context.
 * @channel: UWB channel, supported channels depend on driver/hardware.
 * @preamble_code: UWB preamble code.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_channel_preamble_code(struct uwbmac_context *context, int *channel,
					   int *preamble_code);

/**
 * uwbmac_set_calibration() - Send a calibration key and its value
 * @context: UWB MAC context.
 * @key: the calibration key name
 * @value: the value for the specified calibration key
 * @value_size: the size of the calibration key's value
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_calibration(struct uwbmac_context *context, const char *key, void *value,
				 size_t value_size);

/**
 * uwbmac_get_calibration() - Retrieve a calibration value.
 * @context: UWB MAC context.
 * @key: The calibration key name.
 * @value: The output array for the specified calibration key.
 * @length: The length of the the resulting array.
 * @max_length: Capacity of the array given.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_calibration(struct uwbmac_context *context, const char *key, void *value,
				 int *length, size_t max_length);

/**
 * uwbmac_get_calibration_key_name() - Get calibration key name for a specific
 * key index.
 * @context: UWB MAC context.
 * @key_idx: Calibration key index to get name of.
 * @key: Calibration key name to fill-in.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_calibration_key_name(struct uwbmac_context *context, uint16_t key_idx,
					  char *key);

/**
 * struct uwbmac_list_calibration_context - context for listing calibration keys
 */
struct uwbmac_list_calibration_context {
	/**
	 *@list: list of retrieved calibration keys
	 */
	const char *const *list;
	/**
	 *@key_count: count of retrieved calibration keys
	 */
	size_t key_count;
	/**
	 *@dealloc_cb: callback for freeing memory buffer
	 */
	void (*dealloc_cb)(struct uwbmac_list_calibration_context *list_calibration_ctx);
};

/**
 * uwbmac_list_calibrations() - Retrieve the list calibration keys.
 * @context: UWB MAC context.
 * @list_calibration_ctx: Operation context.
 *
 * The list must be freed by client by calling list_calibration_ctx->dealloc_cb.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_list_calibrations(struct uwbmac_context *context,
				   struct uwbmac_list_calibration_context *list_calibration_ctx);

/**
 * uwbmac_reset_calibration() - Reset values for all calibration keys.
 * @context: UWB MAC context.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_reset_calibration(struct uwbmac_context *context);

/**
 * uwbmac_set_pan_id() - Set pan id to use.
 * @context: UWB MAC context.
 * @pan_id: Pan id.
 *
 * NOTE: HW Filtering is disabled if promiscuous mode is enabled.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_pan_id(struct uwbmac_context *context, uint16_t pan_id);

/**
 * uwbmac_set_short_addr() - Set short address to use.
 * @context: UWB MAC context.
 * @short_addr: Short address.
 *
 * NOTE: HW Filtering is disabled if promiscuous mode is enabled.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_short_addr(struct uwbmac_context *context, uint16_t short_addr);

/**
 * uwbmac_set_extended_addr() - Set extended address to use.
 * @context: UWB MAC context.
 * @extended_addr: extended address.
 *
 * NOTE: HW Filtering is disabled if promiscuous mode is enabled.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_extended_addr(struct uwbmac_context *context, uint64_t extended_addr);

/**
 * uwbmac_set_promiscuous_mode() - Set promiscuous mode.
 * @context: UWB MAC context.
 * @on: True to enable promiscuous mode.
 *
 * Control hardware filtering, if promiscuous mode is enabled, the hardware
 * filtering is disabled.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_promiscuous_mode(struct uwbmac_context *context, bool on);

/**
 * uwbmac_set_scheduler() - Set the scheduler responsible for managing
 * the schedule, and configure its parameters.
 * @context: UWB MAC context.
 * @name: Scheduler name.
 * @params: Scheduler paraameters.
 *
 * Device should not be started for the moment.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_scheduler(struct uwbmac_context *context, const char *name,
			       const struct uwbmac_msg *params);

/**
 * uwbmac_get_scheduler() - Get the scheduler name in use.
 * @context: UWB MAC context.
 * @name: The buffer to fill with the scheduler name.
 * @max_length: Length of provided buffer.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_scheduler(struct uwbmac_context *context, char *name, int max_length);

/**
 * uwbmac_close_scheduler() - Close the current scheduler and all regions.
 * @context: UWB MAC context.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_close_scheduler(struct uwbmac_context *context);

/**
 * uwbmac_set_scheduler_parameters() - Set the scheduler parameters.
 * @context: UWB MAC context.
 * @name: Scheduler name.
 * @params: Scheduler parameters.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_scheduler_parameters(struct uwbmac_context *context, const char *name,
					  const struct uwbmac_msg *params);

/**
 * uwbmac_get_scheduler_parameters() - Get the scheduler parameters.
 * @context: UWB MAC context.
 * @name: Scheduler name.
 * @reply: Message filled with the parameters.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_scheduler_parameters(struct uwbmac_context *context, const char *name,
					  struct uwbmac_msg *reply);

/**
 * uwbmac_set_regions() - Set regions that populate the schedule.
 * @context: UWB MAC context.
 * @scheduler_name: Scheduler name.
 * @region_id: Identifier of the region, scheduler specific.
 * @region_name: Name of region to attach to the scheduler.
 * @params: Region parameters.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_regions(struct uwbmac_context *context, const char *scheduler_name,
			     uint32_t region_id, const char *region_name,
			     const struct uwbmac_msg *params);

/**
 * uwbmac_set_region_parameters() - Set region parameters.
 * @context: UWB MAC context.
 * @scheduler_name: Scheduler name.
 * @region_id: Identifier of the region, scheduler specific.
 * @region_name: Name of region to attach to the scheduler.
 * @params: Region parameters.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_region_parameters(struct uwbmac_context *context, const char *scheduler_name,
				       uint32_t region_id, const char *region_name,
				       const struct uwbmac_msg *params);

/**
 * uwbmac_get_region_parameters() - Get region parameters.
 * @context: UWB MAC context.
 * @scheduler_name: Scheduler name.
 * @region_id: Identifier of the region, scheduler specific.
 * @region_name: Name of the region to call.
 * @reply: Empty message to store parameters.
 *
 * NOTE: uwbmac_call_region_free must be called on the reply when done.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_region_parameters(struct uwbmac_context *context, const char *scheduler_name,
				       uint32_t region_id, const char *region_name,
				       struct uwbmac_msg *reply);

/**
 * uwbmac_call_scheduler() - Call scheduler specific procedure.
 * @context: UWB MAC context.
 * @name: Scheduler name.
 * @call_id: Identifier of the procedure, scheduler specific.
 * @params: Scheduler call parameters.
 * @channel: Channel to get response.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_call_scheduler(struct uwbmac_context *context, const char *name, uint32_t call_id,
				const struct uwbmac_msg *params,
				const struct uwbmac_channel *channel);

/**
 * uwbmac_call_region() - Call region specific procedure.
 * @context: UWB MAC context.
 * @scheduler_name: Scheduler name.
 * @region_id: Identifier of the region, scheduler specific.
 * @region_name: Name of the region to call.
 * @call_id: Identifier of the procedure, region specific.
 * @params: Region call parameters.
 * @channel: Channel to get response if reply is not NULL.
 * @reply: If not NULL, wait for a reply and store its payload here.
 *
 * NOTE: most calls to this function do not trigger a response, so reply must
 * only be given when a reply is expected, in which case uwbmac_call_region_free
 * must be called on the reply when done.
 *
 * Return: QERR_SUCCESS, error or a positive return code.
 */
int uwbmac_call_region(struct uwbmac_context *context, const char *scheduler_name,
		       uint32_t region_id, const char *region_name, uint32_t call_id,
		       const struct uwbmac_msg *params, const struct uwbmac_channel *channel,
		       struct uwbmac_msg *reply);

/**
 * uwbmac_call_region_free() - Free internal resources after uwbmac_call_region.
 * @reply: The reply filled in by a call to uwbmac_call_region.
 */
void uwbmac_call_region_free(struct uwbmac_msg *reply);

/**
 * uwbmac_get_time_ns() - Get the current MAC time.
 * @context: UWB MAC context.
 * @time: Pointer to store current MAC time.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_time_ns(struct uwbmac_context *context, uint64_t *time);

/**
 * uwbmac_get_version() - Get the uwbmac release version.
 *
 * Return: The release version string.
 */
const char *uwbmac_get_version(void);

/**
 * struct uwbmac_pids_info - UWB SPI pids.
 */
struct uwbmac_pids_info {
	/**
	 *@spi: pid of dw3000 spi controller
	 */
	int spi;
	/**
	 *@dw3000_spi: pid of dw3000
	 */
	int dw3000_spi;
};

/**
 * uwbmac_get_spi_pids() - Return spi PIDs.
 * @context: UWB MAC context.
 * @pids: spi PIDs returned.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_spi_pids(struct uwbmac_context *context, struct uwbmac_pids_info *pids);

/**
 * uwbmac_set_scanning_mode() - Enable or disable scanning.
 * @context: UWB MAC context.
 * @enabled: True to enable ieee 802.15.4 scanning.
 *
 * This mode is only used for IEEE 802.15.4 scanning,
 * actual control must be handled by the MLME running on the client side.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_scanning_mode(struct uwbmac_context *context, bool enabled);

/**
 * typedef uwbmac_testmode_cb_t() - Receive a testmode call response.
 * @user_data: data given when registering this callback.
 * @data: response given.
 * @length: length of data.
 *
 * Return: nothing.
 */
typedef void (*uwbmac_testmode_cb_t)(void *user_data, void *data, int length);

/**
 * uwbmac_register_testmode_callback() - Register a testmode callback.
 * @context: UWB MAC context.
 * @msg_cb: Callback to call when the result of the test is available.
 * @user_data: Context to give back to callback.
 *
 * This function registers the callback to call in case of a mac event.
 * The callback is called from MAC context, big treatments should be deferred.
 *
 * NOTE: The msg sent to the callback should be freed by the APP using
 * uwbmac_buf_free.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_register_testmode_callback(struct uwbmac_context *context,
					    uwbmac_testmode_cb_t msg_cb, void *user_data);

/**
 * uwbmac_call_testmode() - Call a test mode function.
 * @context: UWB MAC context.
 * @data: Test data.
 * @length: Size of test data.
 *
 * Test mode allows to directly call the driver. This is expected to be called
 * for tests. Test mode may be disabled in a device.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_call_testmode(struct uwbmac_context *context, void *data, int length);

/**
 * uwbmac_trace_init() - Initialize trace management module.
 *
 * Description: This API **must** be called by the user to initialize tracing.
 *
 * NOTE: That API is only required for embedded systems.
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_trace_init(void);

#define UWBMAC_TRACE_MODULE_NAME_MAX_SIZE 29

/**
 * enum uwbmac_trace_module_ids - Unique ID for each trace module
 * @UWBMAC_TRACE_MODULE_ID_MAIN: Main module.
 * @UWBMAC_TRACE_MODULE_ID_FBS: FBS module.
 * @UWBMAC_TRACE_MODULE_ID_FIRA: Fira module.
 * @UWBMAC_TRACE_MODULE_ID_LLD_COMMON: LLD Common module.
 * @UWBMAC_TRACE_MODULE_ID_LLDD: LLDD module.
 * @UWBMAC_TRACE_MODULE_ID_LLDC: LLDC module.
 * @UWBMAC_TRACE_MODULE_ID_PCTT: PCTT module.
 * @UWBMAC_TRACE_MODULE_ID_RADAR: Radar module.
 * @UWBMAC_TRACE_MODULE_ID_CCC: CCC module.
 * @UWBMAC_TRACE_MODULE_NUMBER: Number of modules.
 */
enum uwbmac_trace_module_ids {
	UWBMAC_TRACE_MODULE_ID_MAIN = 0,
	UWBMAC_TRACE_MODULE_ID_FBS,
	UWBMAC_TRACE_MODULE_ID_FIRA,
	UWBMAC_TRACE_MODULE_ID_LLD_COMMON,
	UWBMAC_TRACE_MODULE_ID_LLDD,
	UWBMAC_TRACE_MODULE_ID_LLDC,
	UWBMAC_TRACE_MODULE_ID_PCTT,
	UWBMAC_TRACE_MODULE_ID_RADAR,
	UWBMAC_TRACE_MODULE_ID_CCC,
	UWBMAC_TRACE_MODULE_NUMBER
};

/**
 * struct uwbmac_trace_info - Trace module information
 */
struct uwbmac_trace_info {
	/**
	 *@name: name of the trace module
	 */
	char name[UWBMAC_TRACE_MODULE_NAME_MAX_SIZE];
	/**
	 *@enable: true is trace module enabled, false otherwise
	 */
	bool enable;
};

/**
 * uwbmac_trace_module_enable() - Enable/disable trace for a specific module
 * @module_name: Name of the module to set trace of.
 * @enable: true to enable, false to disable.
 *
 * When the user wants to enable/disable a trace module, it sets true or false
 * the **enable** parameter.
 *
 * NOTE: That API is only required for embedded systems.
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_trace_module_enable(const char *module_name, bool enable);

/**
 * uwbmac_trace_module_enable_by_id() - Enable/disable trace for a specific
 * module
 * @module_id: ID of the module to set trace of.
 * @enable: true to enable, false to disable.
 *
 * When the user wants to enable/disable a trace module, it sets true or false
 * the **enable** parameter.
 *
 * NOTE: That API is only required for embedded systems.
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_trace_module_enable_by_id(enum uwbmac_trace_module_ids module_id, bool enable);

/**
 * uwbmac_get_trace_modules() - Retrieve info of all trace modules available
 * @info: output param where trace module informations are stored.
 * @nb_modules: output param where number of modules is stored.
 *
 * NOTE: That API is only required for embedded systems.
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_trace_modules(struct uwbmac_trace_info **info, int *nb_modules);

/**
 * uwbmac_is_trace_module_enabled() - Get trace enable status for a module.
 * @id: unique ID of the module to get trace status of.
 *
 * NOTE: That API is only required for embedded systems.
 * Return: true if enable, false if disable or ID not found.
 */
bool uwbmac_is_trace_module_enabled(enum uwbmac_trace_module_ids id);

enum uwbmac_power_state {
	UWBMAC_PWR_STATE_SLEEP,
	UWBMAC_PWR_STATE_IDLE,
	UWBMAC_PWR_STATE_RX,
	UWBMAC_PWR_STATE_TX,
	UWBMAC_PWR_STATE_MAX
};

/**
 * struct power_state_stats - Contains power statistics details for one state
 */
struct power_state_stats {
	/**
	 *@duration_ms: total duration of the state in ms
	 */
	uint32_t duration_ms;
	/**
	 *@count: number of activations
	 */
	uint32_t count;
};

/**
 * struct uwbmac_power_stats - Contains power statistics about uwb
 */
struct uwbmac_power_stats {
	/**
	 *@state_stats: statistics for each state
	 */
	struct power_state_stats state_stats[UWBMAC_PWR_STATE_MAX];
	/**
	 *@interrupts: number of handled interrupts
	 */
	uint32_t interrupts;
};

/**
 * struct uwbmac_uwb_device_stats - Contains device statistics about uwb
 *
 */
struct uwbmac_uwb_device_stats {
	/**
	 * @temperature_hundredth_celsius: Temperature in hundredth of degree Celsius.
	 */
	int16_t temperature_hundredth_celsius;
};

/**
 * struct uwbmac_device_info - Device information.
 * @lot_id: Lot ID.
 * @dev_id: Device ID.
 * @part_id: Part ID.
 */
struct uwbmac_device_info {
	uint64_t lot_id;
	uint32_t dev_id;
	uint32_t part_id;
};

enum qerr uwbmac_get_power_stats(struct uwbmac_context *context, struct uwbmac_power_stats *stats);

/**
 * uwbmac_set_low_power_mode() - Set low power mode.
 * @context: UWB MAC context.
 * @enabled: True to enable low power mode state.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_low_power_mode(struct uwbmac_context *context, bool enabled);

/**
 * uwbmac_get_low_power_mode() - Get low power mode S4 state.
 *
 * Return: True if low power mode S4 is set, otherwise false.
 */
bool uwbmac_get_low_power_mode(void);

/**
 * uwbmac_set_pm_min_inactivity_s4() - Set minimum inactivity time for S4.
 * @context: UWB MAC context.
 * @time_ms: Minimum inactivity time to get into S4, in ms.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_set_pm_min_inactivity_s4(struct uwbmac_context *context, uint32_t time_ms);

/**
 * uwbmac_get_pm_min_inactivity_s4() - Get minimum inactivity time for S4.
 * @context: UWB MAC context.
 * @time_ms: minimum inactivity time to get in S4, in ms.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_pm_min_inactivity_s4(struct uwbmac_context *context, uint32_t *time_ms);

/**
 * uwbmac_se_set_key() - Set a SE key for a given session.
 * @session_id: Id of the session.
 * @key: pointer to the session key
 * @size: length of the session key, can be 128 or 256 bits.
 * @status: SE status.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_se_set_key(uint32_t session_id, uint8_t *key, uint8_t size, uint16_t *status);

/**
 * uwbmac_se_derive_key() - Derive a key from a root key and derivation data.
 * @key: pointer to the root key
 * @data: Derivation data.
 * @data_len: Derivation data length in bytes.
 * @out: pointer to the derived key
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_se_derive_key(const uint8_t *key, const uint8_t *data, unsigned int data_len,
			       uint8_t *out);
/**
 * uwbmac_query_gpio_timestamp() - Dequeue and return gpio timestamp and
 * sequence number.
 * @context: UWB MAC context.
 * @timestamp_us: Pointer to store the timestamp in microseconds.
 * @sequence_number: Pointer to store the sequence number.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_query_gpio_timestamp(struct uwbmac_context *context, int64_t *timestamp_us,
				      uint8_t *sequence_number);
/**
 * uwbmac_get_uwb_device_stats() - Get uwb stats.
 * @context: UWB MAC context.
 * @uwb_device_stats: Pointer to store the uwb stats.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_uwb_device_stats(struct uwbmac_context *context,
				      struct uwbmac_uwb_device_stats *uwb_device_stats);

/**
 * uwbmac_reinit_crypto() - Reinitialize crypto context from MCPS crypto.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_reinit_crypto(void);

/**
 * uwbmac_get_device_info() - Get Device Information.
 * @context: UWB MAC context.
 * @device_info: Pointer to store the device info.
 *
 * Return: QERR_SUCCESS or error.
 */
enum qerr uwbmac_get_device_info(struct uwbmac_context *context,
				 struct uwbmac_device_info *device_info);

/**
 * uwbmac_get_quwbs() - Get QUWBS context.
 * @context: UWB MAC context.
 *
 * Return: QUWBS context.
 */
struct quwbs *uwbmac_get_quwbs(struct uwbmac_context *context);

#ifdef __cplusplus
}
#endif
