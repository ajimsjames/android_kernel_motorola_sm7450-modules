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
	{ 0x20496296, "snd_soc_pm_ops" },
	{ 0xe22d993f, "audio_prm_set_cdc_earpa_duty_cycling_req" },
	{ 0xeb96c213, "wsa883x_codec_get_dev_num" },
	{ 0xa31d9aa4, "wcd938x_codec_get_dev_num" },
	{ 0x587b5f9b, "wcd937x_codec_get_dev_num" },
	{ 0xc8876480, "wsa881x_codec_get_dev_num" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xfa3a8dc8, "snd_soc_dai_set_channel_map" },
	{ 0x384fd7a6, "wcd937x_get_codec_variant" },
	{ 0xbfb9346b, "wcd937x_info_create_codec_entry" },
	{ 0x12f00213, "lpass_cdc_rx_set_fir_capability" },
	{ 0xc3291299, "wcd938x_get_codec_variant" },
	{ 0x57f71bc6, "wcd938x_info_create_codec_entry" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0x6b5b2a4d, "lpass_cdc_register_wake_irq" },
	{ 0xa96e785a, "snd_soc_dapm_add_routes" },
	{ 0xcf85f6c8, "wsa883x_codec_info_create_codec_entry" },
	{ 0x95418f6b, "wsa883x_set_channel_map" },
	{ 0x2db3a3fb, "wsa881x_codec_info_create_codec_entry" },
	{ 0x78e27f85, "wsa881x_set_channel_map" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x13bb14aa, "snd_info_free_entry" },
	{ 0x6adb7e3, "snd_info_register" },
	{ 0xe50e5b39, "snd_info_create_module_entry" },
	{ 0x32001ed3, "lpass_cdc_set_port_map" },
	{ 0x54d8c05, "lpass_cdc_info_create_codec_entry" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0x4a615359, "snd_soc_dapm_new_controls" },
	{ 0x61ebadbb, "wcd937x_mbhc_hs_detect" },
	{ 0x7eb4e8c8, "wcd938x_mbhc_hs_detect" },
	{ 0x9c3f7781, "snd_soc_get_pcm_runtime" },
	{ 0xb4e73bb9, "snd_event_notify" },
	{ 0x3d7f91cf, "snd_event_master_register" },
	{ 0x270a5ec7, "snd_event_mstr_add_client" },
	{ 0xd9928eb8, "msm_cdc_enable_static_supplies" },
	{ 0xf8bb7821, "msm_cdc_init_supplies" },
	{ 0x9700e38a, "msm_cdc_get_power_supplies" },
	{ 0x63347a60, "fsa4480_switch_event" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x73d3b051, "snd_soc_unregister_card" },
	{ 0x8a4161ed, "snd_event_master_deregister" },
	{ 0xb17d9150, "msm_cdc_pinctrl_set_wakeup_capable" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x8474169f, "devm_snd_soc_register_card" },
	{ 0xdbdf3c2f, "of_device_is_available" },
	{ 0x3ccde25c, "of_property_match_string" },
	{ 0x6961ddd9, "snd_soc_of_parse_audio_routing" },
	{ 0xc9f49aea, "snd_soc_of_parse_card_name" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x8c25f7e3, "nvmem_cell_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x39bfa514, "of_match_node" },
	{ 0x7d95b65c, "wsa883x_codec_detect" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0x7c8b8ace, "dev_pm_qos_update_request" },
	{ 0xf1e046cc, "panic" },
	{ 0xfa5c04ea, "snd_soc_rtdcom_lookup" },
	{ 0xc4652660, "snd_soc_card_get_kcontrol" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6adba2f4, "snd_soc_dai_get_channel_map" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb9e063, "dev_pm_qos_remove_request" },
	{ 0xa1cf65e0, "dev_pm_qos_add_request" },
	{ 0x25a78573, "get_cpu_device" },
	{ 0x7281ec27, "cpu_topology" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x574add77, "__mutex_init" },
	{ 0x9b4f1f33, "msm_audio_ion_crash_handler" },
	{ 0x8892c6d0, "spf_core_apm_close_all" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x49bbfd77, "msm_cdc_pinctrl_select_sleep_state" },
	{ 0xefbcc556, "msm_cdc_pinctrl_select_active_state" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xdf30c99, "audio_prm_set_lpass_clk_cfg" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xc310b981, "strnstr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x50d84231, "digital_cdc_rsc_mgr_hw_vote_disable" },
	{ 0x910302ce, "digital_cdc_rsc_mgr_hw_vote_enable" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0xc5850110, "printk" },
	{ 0xf3de4f4f, "sysfs_create_file_ns" },
	{ 0xef1d7977, "kobject_init_and_add" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x207f7e59, "sysfs_notify" },
};

MODULE_INFO(depends, "audio_prm_dlkm,wsa883x_dlkm,wcd938x_dlkm,wcd937x_dlkm,wsa881x_dlkm,lpass_cdc_rx_macro_dlkm,lpass_cdc_dlkm,snd_event_dlkm,wcd_core_dlkm,fsa4480-i2c,audpkt_ion_dlkm,spf_core_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,waipio-asoc-snd");
MODULE_ALIAS("of:N*T*Cqcom,waipio-asoc-sndC*");
MODULE_ALIAS("of:N*T*Cqcom,waipio-asoc-snd-stub");
MODULE_ALIAS("of:N*T*Cqcom,waipio-asoc-snd-stubC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
