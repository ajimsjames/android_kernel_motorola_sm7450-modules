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
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xab5a1db, "regmap_update_bits_base" },
	{ 0xa5cb814b, "dev_get_regmap" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0xf27b784f, "__devm_regmap_init" },
	{ 0x2a1c4df0, "snd_soc_component_write" },
	{ 0xafd6b72f, "platform_device_put" },
	{ 0xb86dd74, "platform_device_add" },
	{ 0x3740d63, "platform_device_alloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xa9600040, "of_get_next_available_child" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0x780da5aa, "of_platform_depopulate" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x574add77, "__mutex_init" },
	{ 0x465dffad, "devm_regmap_qti_debugfs_register" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x817df507, "regcache_sync" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0x409477c8, "regcache_cache_only" },
	{ 0xed129500, "snd_event_client_deregister" },
	{ 0xb4e73bb9, "snd_event_notify" },
	{ 0xad7f7254, "snd_event_client_register" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0xe83b3328, "snd_soc_component_init_regmap" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x50d84231, "digital_cdc_rsc_mgr_hw_vote_disable" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x910302ce, "digital_cdc_rsc_mgr_hw_vote_enable" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0x13bb14aa, "snd_info_free_entry" },
	{ 0x60df450c, "snd_info_create_card_entry" },
	{ 0x6adb7e3, "snd_info_register" },
	{ 0xe50e5b39, "snd_info_create_module_entry" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0xc5850110, "printk" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xe3463541, "of_device_is_compatible" },
};

MODULE_INFO(depends, "qti-regmap-debugfs,snd_event_dlkm,spf_core_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,lpass-cdc");
MODULE_ALIAS("of:N*T*Cqcom,lpass-cdcC*");
MODULE_ALIAS("of:N*T*Cqcom,lpass-cdc-clk-rsc-mngr");
MODULE_ALIAS("of:N*T*Cqcom,lpass-cdc-clk-rsc-mngrC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
