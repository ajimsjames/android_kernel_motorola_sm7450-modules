#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3c515c, "module_layout" },
	{ 0x89a23a78, "param_ops_int" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x85df9b6c, "strsep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6e6fa237, "swr_device_up" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xe68ffdcf, "irq_find_mapping" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x1ada0f33, "swr_port_response" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x3aaa15b2, "cpu_latency_qos_remove_request" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82e26479, "swr_unregister_master" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0xc4f88961, "of_register_swr_devices" },
	{ 0xd0a09af0, "swr_master_add_boarddevices" },
	{ 0x9e9e8948, "swr_register_master" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x589e1a22, "cpu_latency_qos_add_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x910302ce, "digital_cdc_rsc_mgr_hw_vote_enable" },
	{ 0x58dc1992, "swr_device_down" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x279b23ae, "pm_stay_awake" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xa6257a2f, "complete" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x50d84231, "digital_cdc_rsc_mgr_hw_vote_disable" },
	{ 0x22bbf647, "swr_reset_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0xf861955, "pm_runtime_autosuspend_expiration" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4901ed72, "swr_set_device_group" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8e19f137, "pm_relax" },
	{ 0xdc528096, "cpu_latency_qos_update_request" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd62990d8, "irq_get_irq_data" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x2615e855, "platform_get_irq_byname" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
};

MODULE_INFO(depends, "swr_dlkm,spf_core_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
