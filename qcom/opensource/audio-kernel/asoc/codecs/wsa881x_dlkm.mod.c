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
	{ 0xbd512e3f, "thermal_zone_device_unregister" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xe111202f, "thermal_zone_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x409477c8, "regcache_cache_only" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0x6024d4aa, "snd_soc_dapm_put_volsw" },
	{ 0x6f076475, "snd_soc_dapm_get_volsw" },
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0x89a23a78, "param_ops_int" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2a1c4df0, "snd_soc_component_write" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xd2bb30c9, "swr_remove_from_group" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3bab1eb9, "regmap_multi_reg_write" },
	{ 0x4ab081fd, "swr_slvdev_datapath_control" },
	{ 0x469e64dd, "swr_disconnect_port" },
	{ 0xcf15b69, "swr_connect_port" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0xe83b3328, "snd_soc_component_init_regmap" },
	{ 0xdcb764ad, "memset" },
	{ 0xa8480acd, "swr_write" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x85df9b6c, "strsep" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6bcaa0bb, "swr_read" },
	{ 0xa916b694, "strnlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0x49bbfd77, "msm_cdc_pinctrl_select_sleep_state" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xefbcc556, "msm_cdc_pinctrl_select_active_state" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x817df507, "regcache_sync" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xe02a8297, "swr_remove_device" },
	{ 0x574add77, "__mutex_init" },
	{ 0xac163cde, "of_find_device_by_node" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x4829a47e, "memcpy" },
	{ 0x465dffad, "devm_regmap_qti_debugfs_register" },
	{ 0x68edadda, "__devm_regmap_init_swr" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0x12a38747, "usleep_range" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0x7ec09aa2, "msm_cdc_pinctrl_get_state" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xd9928eb8, "msm_cdc_enable_static_supplies" },
	{ 0xf8bb7821, "msm_cdc_init_supplies" },
	{ 0x9700e38a, "msm_cdc_get_power_supplies" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x83825a64, "swr_driver_unregister" },
	{ 0xfa5c5ed5, "swr_driver_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xc5850110, "printk" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x13bb14aa, "snd_info_free_entry" },
	{ 0x60df450c, "snd_info_create_card_entry" },
	{ 0x6adb7e3, "snd_info_register" },
	{ 0xe50e5b39, "snd_info_create_module_entry" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "swr_dlkm,wcd_core_dlkm,qti-regmap-debugfs");


MODULE_INFO(scmversion, "g2806f02f43ff");
