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
	{ 0x207f7e59, "sysfs_notify" },
	{ 0x63812eed, "sensors_classdev_unregister" },
	{ 0x78c7940d, "mutex_trylock" },
	{ 0x4117f5c7, "input_free_device" },
	{ 0x6d0a4690, "input_unregister_device" },
	{ 0x2fb8cbe6, "sensors_classdev_register" },
	{ 0xb9ab1a56, "input_register_device" },
	{ 0x91b214bd, "input_set_abs_params" },
	{ 0x98fedf9b, "input_allocate_device" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa138dda0, "panel_event_notifier_unregister" },
	{ 0x6b81c38b, "power_supply_unreg_notifier" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x26a8ddbc, "relay_unregister_action" },
	{ 0x8223981a, "relay_register_action" },
	{ 0x4f9527df, "panel_event_notifier_register" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8375ea18, "power_supply_put" },
	{ 0xb5e10c57, "power_supply_get_property" },
	{ 0x7ee94239, "power_supply_get_by_name" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0x2af66fe3, "dsi_freq_head" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xe3463541, "of_device_is_compatible" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x608604ae, "of_drm_find_panel" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xc41a0ad0, "of_count_phandle_with_args" },
	{ 0xe309e3be, "of_get_next_child" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0x237efe27, "of_find_node_by_name" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc310b981, "strnstr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
	{ 0x3fcaa46c, "input_mt_report_slot_state" },
	{ 0xcb3e900b, "input_event" },
	{ 0x5ccb937a, "sysfs_remove_file_ns" },
	{ 0xf3de4f4f, "sysfs_create_file_ns" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xa16fb596, "relay_notifier_fire" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8ba5ae2, "device_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x20d81059, "up_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x28ed2847, "down_write" },
	{ 0xf987a6, "device_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xb9a35017, "devm_kmalloc" },
};

MODULE_INFO(depends, "sensors_class,panel_event_notifier,mmi_relay,msm_drm");


MODULE_INFO(scmversion, "g2806f02f43ff");
