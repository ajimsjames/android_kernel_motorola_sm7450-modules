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
	{ 0x8e0a0301, "audio_prm_set_lpass_hw_core_req" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9de5fab, "clk_hw_get_num_parents" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdf30c99, "audio_prm_set_lpass_clk_cfg" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x742471cf, "devm_pinctrl_put" },
	{ 0xd1337fd4, "of_clk_add_provider" },
	{ 0xc66aba0c, "of_clk_src_onecell_get" },
	{ 0x41771e5f, "devm_clk_register" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
};

MODULE_INFO(depends, "audio_prm_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,audio-ref-clk");
MODULE_ALIAS("of:N*T*Cqcom,audio-ref-clkC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
