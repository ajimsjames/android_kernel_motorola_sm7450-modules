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
	{ 0x77396a32, "wcdcal_get_fw_cal" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2a1c4df0, "snd_soc_component_write" },
	{ 0x3d6dd0aa, "mutex_is_locked" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x7f7125d5, "wcd_mbhc_init" },
	{ 0x532a6cf1, "wcd_mbhc_deinit" },
	{ 0xf4fa9cee, "wcd_mbhc_stop" },
	{ 0xd908d16f, "wcd_mbhc_start" },
	{ 0xa6a44f33, "wcd_mbhc_get_impedance" },
	{ 0xce0a5934, "snd_soc_dapm_put_enum_double" },
	{ 0x847eb837, "snd_soc_dapm_get_enum_double" },
	{ 0x6024d4aa, "snd_soc_dapm_put_volsw" },
	{ 0x6f076475, "snd_soc_dapm_get_volsw" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0x20037658, "snd_soc_put_volsw" },
	{ 0xecbd4171, "snd_soc_get_volsw" },
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0xdab18e5b, "msm_cdc_set_supplies_lpm_mode" },
	{ 0x338a5b5e, "msm_cdc_disable_ondemand_supply" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x817df507, "regcache_sync" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0x469e64dd, "swr_disconnect_port" },
	{ 0xcf15b69, "swr_connect_port" },
	{ 0xd8d4b14f, "wcd_clsh_set_hph_mode" },
	{ 0xb6b6cae6, "wcd_cls_h_fsm" },
	{ 0x948cf083, "wcd_enable_irq" },
	{ 0xe4bbf75f, "msm_cdc_enable_ondemand_supply" },
	{ 0xd721c79c, "msm_cdc_is_ondemand_supply" },
	{ 0x4ab081fd, "swr_slvdev_datapath_control" },
	{ 0x6bcaa0bb, "swr_read" },
	{ 0xc310b981, "strnstr" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x9df709eb, "wcd_cls_h_init" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0x52b457a6, "wcd_cal_create_hwdep" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x465dffad, "devm_regmap_qti_debugfs_register" },
	{ 0xe83b3328, "snd_soc_component_init_regmap" },
	{ 0x4d1ec273, "regmap_read" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x452ba7f7, "wcd_free_irq" },
	{ 0x9178093b, "component_unbind_all" },
	{ 0x1b861dd0, "wcd_irq_exit" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0xbb2d6a5c, "wcd_disable_irq" },
	{ 0x429e1957, "wcd_request_irq" },
	{ 0x6ba3e47a, "wcd_irq_init" },
	{ 0xb17792d5, "regmap_write" },
	{ 0x68edadda, "__devm_regmap_init_swr" },
	{ 0x1fd24c78, "swr_init_port_params" },
	{ 0xba8d1283, "get_matching_swr_slave_device" },
	{ 0xecf2f2c3, "component_bind_all" },
	{ 0xefbcc556, "msm_cdc_pinctrl_select_active_state" },
	{ 0x49bbfd77, "msm_cdc_pinctrl_select_sleep_state" },
	{ 0x7ec09aa2, "msm_cdc_pinctrl_get_state" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x5b2a7703, "component_master_del" },
	{ 0xde57ffe2, "component_master_add_with_match" },
	{ 0xdc8a5b30, "component_match_add_release" },
	{ 0x574add77, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9928eb8, "msm_cdc_enable_static_supplies" },
	{ 0xf8bb7821, "msm_cdc_init_supplies" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x9700e38a, "msm_cdc_get_power_supplies" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x13bb14aa, "snd_info_free_entry" },
	{ 0x60df450c, "snd_info_create_card_entry" },
	{ 0x6adb7e3, "snd_info_register" },
	{ 0xe50e5b39, "snd_info_create_module_entry" },
	{ 0xab5a1db, "regmap_update_bits_base" },
	{ 0x19a037d0, "swr_device_wakeup_unvote" },
	{ 0x573103f4, "swr_device_wakeup_vote" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "wcd9xxx_dlkm,mbhc_dlkm,wcd_core_dlkm,swr_dlkm,qti-regmap-debugfs");


MODULE_INFO(scmversion, "g2806f02f43ff");
