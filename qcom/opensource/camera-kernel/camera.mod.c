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
	{ 0x1533f254, "icc_put" },
	{ 0x2e4cb387, "icc_get" },
	{ 0x6d5659c, "icc_set_bw" },
	{ 0x723d48c5, "qti_flash_led_set_param" },
	{ 0xfea2a623, "qti_flash_led_prepare" },
	{ 0x4f19efbb, "gpiod_set_raw_value_cansleep" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6006e194, "led_trigger_event" },
	{ 0xb45ef8ba, "led_trigger_unregister_simple" },
	{ 0xa259f598, "led_trigger_register_simple" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x6ff9cf64, "spi_sync" },
	{ 0x438d5114, "i2c_transfer" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0x5a08fb7, "class_remove_file_ns" },
	{ 0x4a610c0d, "class_create_file_ns" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa45b3c60, "request_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x5f497f4a, "spi_setup" },
	{ 0x62aa2ae0, "devm_clk_put" },
	{ 0xb9f45b68, "driver_unregister" },
	{ 0xc171c3e1, "__spi_register_driver" },
	{ 0x2fb510cb, "param_array_ops" },
	{ 0xc5850110, "printk" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0x78c7940d, "mutex_trylock" },
	{ 0x8d018bba, "devm_regulator_get" },
	{ 0xb4ad1ffd, "of_get_parent" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x9b128a66, "qcom_scm_set_remote_state" },
	{ 0xdd7e3192, "qcom_scm_pas_auth_and_reset" },
	{ 0x5c33ec1f, "qcom_mdt_load" },
	{ 0xe8a3861c, "qcom_mdt_get_size" },
	{ 0xfc52abc7, "qcom_scm_pas_shutdown" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x488b8148, "firmware_request_nowarn" },
	{ 0x82584bd0, "regulator_set_mode" },
	{ 0xac163cde, "of_find_device_by_node" },
	{ 0x6a61cba5, "debugfs_create_u8" },
	{ 0x66694ffc, "debugfs_attr_write" },
	{ 0x6d0772a4, "debugfs_attr_read" },
	{ 0x39c74d8, "no_llseek" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xffc0500f, "of_match_device" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x39bfa514, "of_match_node" },
	{ 0x64cd05cd, "of_property_read_variable_u8_array" },
	{ 0x551b1300, "kobj_sysfs_ops" },
	{ 0x7e5ade52, "llcc_slice_deactivate" },
	{ 0x6b7609b9, "llcc_slice_activate" },
	{ 0x3eaf9c7f, "dev_pm_opp_get_voltage" },
	{ 0x3a75b834, "dev_pm_opp_find_freq_ceil" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0xf5f7b498, "kobject_add" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0xf6b0c7cb, "kobject_init" },
	{ 0xcf51ae91, "llcc_slice_putd" },
	{ 0xbc8055f8, "llcc_get_slice_size" },
	{ 0xefb7aaf9, "llcc_get_slice_id" },
	{ 0x2dc32291, "llcc_slice_getd" },
	{ 0x237efe27, "of_find_node_by_name" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4c8a69b3, "video_devdata" },
	{ 0x127dc2c4, "synx_deregister_ops" },
	{ 0x539fd702, "synx_register_ops" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x89a23a78, "param_ops_int" },
	{ 0x33ad8434, "iommu_get_domain_for_dev" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x606751d6, "iommu_set_fault_handler" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0xb8289519, "of_get_child_by_name" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x8a44ba45, "component_del" },
	{ 0xa76d9111, "component_add" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xa9600040, "of_get_next_available_child" },
	{ 0xe3463541, "of_device_is_compatible" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xfea96c57, "__free_pages" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x87b8798d, "sg_next" },
	{ 0x271892f3, "__alloc_pages_nodemask" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xfce44d14, "iommu_detach_device" },
	{ 0xc7dec78e, "iommu_attach_device" },
	{ 0xe3a8955e, "dma_buf_detach" },
	{ 0xa42eea7f, "dma_buf_unmap_attachment" },
	{ 0xec6a8318, "iommu_map_sg" },
	{ 0xc967b12b, "dma_buf_map_attachment" },
	{ 0x70312a2b, "dma_buf_attach" },
	{ 0x3e9a126c, "iommu_unmap" },
	{ 0x965874eb, "iommu_map" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
	{ 0xea2e69ac, "dma_buf_vunmap" },
	{ 0xf20d6f2e, "dma_buf_vmap" },
	{ 0x87d4bf5a, "iommu_dma_reserve_iova" },
	{ 0x24a54500, "iommu_dma_enable_best_fit_algo" },
	{ 0x4a250ca2, "qcom_iommu_get_fault_ids" },
	{ 0x19d2b4e5, "i2c_bus_type" },
	{ 0xdc8a5b30, "component_match_add_release" },
	{ 0x7a603c17, "bus_find_device" },
	{ 0xea83bb76, "put_device" },
	{ 0x6d7e0186, "platform_bus_type" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x1de67f9b, "qcom_scm_io_writel" },
	{ 0x4e2e74c1, "qcom_scm_io_readl" },
	{ 0x170fe239, "qcom_scm_camera_protect_phy_lanes" },
	{ 0xfae85203, "qcom_scm_smmu_notify_secure_lut" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xb23a57e7, "of_address_to_resource" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5c5efaf3, "trace_event_raw_init" },
	{ 0xf3da2de1, "trace_event_reg" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xa31a19f4, "trace_raw_output_prep" },
	{ 0x8f0277f2, "bpf_trace_run7" },
	{ 0x1fe471ce, "bpf_trace_run5" },
	{ 0xa42ce5cb, "bpf_trace_run3" },
	{ 0x26d3a581, "bpf_trace_run4" },
	{ 0xf2ceec49, "bpf_trace_run2" },
	{ 0x148653, "vsnprintf" },
	{ 0x56b3680b, "perf_trace_run_bpf_submit" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xcb8a6e1b, "perf_trace_buf_alloc" },
	{ 0xb1af35d7, "trace_event_buffer_commit" },
	{ 0xe914e41e, "strcpy" },
	{ 0x830b9d1e, "trace_event_buffer_reserve" },
	{ 0xd87e5d77, "trace_event_ignore_this_pid" },
	{ 0x7cf5c484, "event_triggers_call" },
	{ 0x951804d5, "param_ops_ullong" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x715a5ed0, "vprintk" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x85df9b6c, "strsep" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409a68bd, "param_ops_uint" },
	{ 0x96848186, "scnprintf" },
	{ 0x742471cf, "devm_pinctrl_put" },
	{ 0xb0d1656c, "gpio_free_array" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0x1848221d, "__release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dca9a69, "regulator_put" },
	{ 0x664eed64, "devm_free_irq" },
	{ 0x51ec673b, "clk_get" },
	{ 0x719ce0bf, "regulator_get" },
	{ 0xf9eee56b, "devm_request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xca39ba0, "__request_region" },
	{ 0xc7da062f, "iomem_resource" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0xea3df7d6, "regulator_set_load" },
	{ 0x9cd26dec, "regulator_count_voltages" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x297579ba, "regulator_disable" },
	{ 0xb602cbbc, "of_get_property" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xc41a0ad0, "of_count_phandle_with_args" },
	{ 0xc310b981, "strnstr" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x7784de69, "platform_get_resource_byname" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xa9a939b7, "qcom_clk_dump" },
	{ 0x6be8a03a, "mmrm_client_set_value" },
	{ 0xf77f51e3, "mmrm_client_set_value_in_range" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x6b0e128f, "of_clk_get_from_provider" },
	{ 0x8891bb55, "of_parse_phandle_with_args" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x3ccde25c, "of_property_match_string" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x15e4a2d8, "mmrm_client_deregister" },
	{ 0xbbd8dc5d, "mmrm_client_register" },
	{ 0xde9150a8, "mmrm_client_check_scaling_supported" },
	{ 0xb9fb56dd, "simple_attr_release" },
	{ 0x7daaa491, "simple_attr_write" },
	{ 0x5a0e3afd, "simple_attr_read" },
	{ 0x339e09b, "generic_file_llseek" },
	{ 0x45139159, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3acd5f9c, "debugfs_create_u32" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0x7baf2a33, "kmem_cache_free" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x176e1ed0, "kmem_cache_alloc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa2b09770, "mem_buf_lend" },
	{ 0x962bf470, "dma_heap_buffer_alloc" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xca311a4a, "dma_buf_get" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x4829a47e, "memcpy" },
	{ 0x38751c9a, "dma_buf_put" },
	{ 0x7e4ee745, "dma_buf_fd" },
	{ 0x7ca75f11, "dma_buf_end_cpu_access" },
	{ 0xf936c47c, "dma_buf_begin_cpu_access" },
	{ 0xd5d43a48, "dma_buf_get_flags" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x611daf09, "debugfs_create_bool" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb7a70302, "video_ioctl2" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9f4125f7, "v4l2_event_unsubscribe" },
	{ 0x1d367307, "v4l2_event_subscribe" },
	{ 0x45344692, "v4l2_subdev_call_wrappers" },
	{ 0x20d81059, "up_write" },
	{ 0x69a9a3ab, "v4l2_fh_release" },
	{ 0x45171035, "v4l2_fh_open" },
	{ 0x28ed2847, "down_write" },
	{ 0x3a54f024, "v4l2_event_pending" },
	{ 0x9178093b, "component_unbind_all" },
	{ 0x5ccb937a, "sysfs_remove_file_ns" },
	{ 0xf3de4f4f, "sysfs_create_file_ns" },
	{ 0x9ffce5b0, "kmem_cache_create" },
	{ 0xa9670ecd, "v4l2_device_unregister" },
	{ 0xa98f49c8, "media_device_cleanup" },
	{ 0x2f4b25cb, "media_device_unregister" },
	{ 0x7ff3ed10, "kmem_cache_destroy" },
	{ 0xecf2f2c3, "component_bind_all" },
	{ 0x744b735, "media_entity_pads_init" },
	{ 0xe812204d, "__video_register_device" },
	{ 0x52c5129d, "video_device_release_empty" },
	{ 0xfd87d328, "video_device_alloc" },
	{ 0x8e8feb5f, "__media_device_register" },
	{ 0x35fd62b8, "media_device_init" },
	{ 0x4585829b, "v4l2_device_register" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x5b2a7703, "component_master_del" },
	{ 0xde57ffe2, "component_master_add_with_match" },
	{ 0xd032aaa7, "v4l2_device_unregister_subdev" },
	{ 0x93f1f623, "__v4l2_device_register_subdev_nodes" },
	{ 0x596f7438, "v4l2_device_register_subdev" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x5664392b, "v4l2_subdev_init" },
	{ 0xcb41cc7a, "video_device_release" },
	{ 0xf9120399, "video_unregister_device" },
	{ 0x9a178788, "v4l2_event_queue" },
	{ 0x6b50e951, "up_read" },
	{ 0x3355da1c, "down_read" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x574add77, "__mutex_init" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa6257a2f, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x98a9d10c, "__stack_chk_fail" },
};

MODULE_INFO(depends, "leds-qti-flash,qcom-scm,mdt_loader,llcc-qcom,synx-driver,qcom_iommu_util,clk-qcom,msm-mmrm,mem_buf_dev");

MODULE_ALIAS("of:N*T*Cqcom,cam-req-mgr");
MODULE_ALIAS("of:N*T*Cqcom,cam-req-mgrC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-sync");
MODULE_ALIAS("of:N*T*Cqcom,cam-syncC*");
MODULE_ALIAS("of:N*T*Cqcom,csid170");
MODULE_ALIAS("of:N*T*Cqcom,csid170C*");
MODULE_ALIAS("of:N*T*Cqcom,csid170_200");
MODULE_ALIAS("of:N*T*Cqcom,csid170_200C*");
MODULE_ALIAS("of:N*T*Cqcom,csid175");
MODULE_ALIAS("of:N*T*Cqcom,csid175C*");
MODULE_ALIAS("of:N*T*Cqcom,csid175_200");
MODULE_ALIAS("of:N*T*Cqcom,csid175_200C*");
MODULE_ALIAS("of:N*T*Cqcom,csid165_204");
MODULE_ALIAS("of:N*T*Cqcom,csid165_204C*");
MODULE_ALIAS("of:N*T*Cqcom,csid480");
MODULE_ALIAS("of:N*T*Cqcom,csid480C*");
MODULE_ALIAS("of:N*T*Cqcom,csid570");
MODULE_ALIAS("of:N*T*Cqcom,csid570C*");
MODULE_ALIAS("of:N*T*Cqcom,csid580");
MODULE_ALIAS("of:N*T*Cqcom,csid580C*");
MODULE_ALIAS("of:N*T*Cqcom,csid680");
MODULE_ALIAS("of:N*T*Cqcom,csid680C*");
MODULE_ALIAS("of:N*T*Cqcom,csid680_110");
MODULE_ALIAS("of:N*T*Cqcom,csid680_110C*");
MODULE_ALIAS("of:N*T*Cqcom,csid780");
MODULE_ALIAS("of:N*T*Cqcom,csid780C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite170");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite170C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite175");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite175C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite165");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite165C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite480");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite480C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite570");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite570C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite580");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite580C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite680");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite680C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite680_110");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite680_110C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite780");
MODULE_ALIAS("of:N*T*Cqcom,csid-lite780C*");
MODULE_ALIAS("of:N*T*Cqcom,sfe680");
MODULE_ALIAS("of:N*T*Cqcom,sfe680C*");
MODULE_ALIAS("of:N*T*Cqcom,sfe780");
MODULE_ALIAS("of:N*T*Cqcom,sfe780C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe170");
MODULE_ALIAS("of:N*T*Cqcom,vfe170C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe170_150");
MODULE_ALIAS("of:N*T*Cqcom,vfe170_150C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe175");
MODULE_ALIAS("of:N*T*Cqcom,vfe175C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe175_130");
MODULE_ALIAS("of:N*T*Cqcom,vfe175_130C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe480");
MODULE_ALIAS("of:N*T*Cqcom,vfe480C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe570");
MODULE_ALIAS("of:N*T*Cqcom,vfe570C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe580");
MODULE_ALIAS("of:N*T*Cqcom,vfe580C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe680");
MODULE_ALIAS("of:N*T*Cqcom,vfe680C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe680_110");
MODULE_ALIAS("of:N*T*Cqcom,vfe680_110C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe780");
MODULE_ALIAS("of:N*T*Cqcom,vfe780C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite170");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite170C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite175");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite175C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite480");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite480C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite570");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite570C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite580");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite580C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite680");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite680C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite680_110");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite680_110C*");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite780");
MODULE_ALIAS("of:N*T*Cqcom,vfe-lite780C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-ipe");
MODULE_ALIAS("of:N*T*Cqcom,cam-ipeC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-ipe680");
MODULE_ALIAS("of:N*T*Cqcom,cam-ipe680C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-a5");
MODULE_ALIAS("of:N*T*Cqcom,cam-a5C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-lx7");
MODULE_ALIAS("of:N*T*Cqcom,cam-lx7C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-bps");
MODULE_ALIAS("of:N*T*Cqcom,cam-bpsC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-bps680");
MODULE_ALIAS("of:N*T*Cqcom,cam-bps680C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_encC*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_165");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_165C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_580");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_580C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_680");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_enc_680C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dmaC*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_165");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_165C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_580");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_580C*");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_680");
MODULE_ALIAS("of:N*T*Cqcom,cam_jpeg_dma_680C*");
MODULE_ALIAS("of:N*T*Cqcom,actuator");
MODULE_ALIAS("of:N*T*Cqcom,actuatorC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-actuator");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-actuatorC*");
MODULE_ALIAS("of:N*T*Cqcom,cci");
MODULE_ALIAS("of:N*T*Cqcom,cciC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg101");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg101C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg102");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg102C*");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg103");
MODULE_ALIAS("of:N*T*Cqcom,cam-tpg103C*");
MODULE_ALIAS("of:N*T*Cqcom,csiphy");
MODULE_ALIAS("of:N*T*Cqcom,csiphyC*");
MODULE_ALIAS("of:N*T*Cqcom,eeprom");
MODULE_ALIAS("of:N*T*Cqcom,eepromC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-eeprom");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-eepromC*");
MODULE_ALIAS("of:N*T*Cqcom,ois");
MODULE_ALIAS("of:N*T*Cqcom,oisC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-ois");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-oisC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-sensor");
MODULE_ALIAS("of:N*T*Cqcom,cam-sensorC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-sensor");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-sensorC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-res-mgr");
MODULE_ALIAS("of:N*T*Cqcom,cam-res-mgrC*");
MODULE_ALIAS("of:N*T*Cqcom,camera-flash");
MODULE_ALIAS("of:N*T*Cqcom,camera-flashC*");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-flash");
MODULE_ALIAS("of:N*T*Cqcom,cam-i2c-flashC*");
MODULE_ALIAS("of:N*T*Cqcom,cam_custom_hw_sub_mod");
MODULE_ALIAS("of:N*T*Cqcom,cam_custom_hw_sub_modC*");
MODULE_ALIAS("of:N*T*Cqcom,csid-custom480");
MODULE_ALIAS("of:N*T*Cqcom,csid-custom480C*");
MODULE_ALIAS("of:N*T*Cqcom,csid-custom580");
MODULE_ALIAS("of:N*T*Cqcom,csid-custom580C*");

MODULE_INFO(scmversion, "g2806f02f43ff");
