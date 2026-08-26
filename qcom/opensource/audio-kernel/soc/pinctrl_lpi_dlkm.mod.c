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
	{ 0x54c568f3, "gpiochip_generic_free" },
	{ 0x32bca42c, "gpiochip_generic_request" },
	{ 0xace211b6, "pinctrl_utils_free_map" },
	{ 0x5850611, "digital_cdc_rsc_mgr_hw_vote_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0xd740362b, "seq_printf" },
	{ 0xe63b3a6f, "gpiochip_get_data" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xed398c83, "pinconf_generic_dt_node_to_map" },
	{ 0xc5656b4d, "audio_notifier_deregister" },
	{ 0xed129500, "snd_event_client_deregister" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xf61f2248, "gpiochip_remove" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xa7fe7810, "audio_notifier_register" },
	{ 0xb4e73bb9, "snd_event_notify" },
	{ 0xad7f7254, "snd_event_client_register" },
	{ 0xb6489e36, "gpiochip_add_pin_range" },
	{ 0x41d0fabf, "gpiochip_add_data_with_key" },
	{ 0xc5850110, "printk" },
	{ 0xd4c46b93, "devm_pinctrl_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x4717c148, "audio_notifier_probe_status" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x910302ce, "digital_cdc_rsc_mgr_hw_vote_enable" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x50d84231, "digital_cdc_rsc_mgr_hw_vote_disable" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xa20d01ba, "__trace_bprintk" },
};

MODULE_INFO(depends, "spf_core_dlkm,q6_notifier_dlkm,snd_event_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,lpi-pinctrl");
MODULE_ALIAS("of:N*T*Cqcom,lpi-pinctrlC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
