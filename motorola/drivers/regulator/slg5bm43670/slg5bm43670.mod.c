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
	{ 0x9a4f102c, "regulator_get_voltage_sel_regmap" },
	{ 0xf1a35af0, "regulator_set_voltage_sel_regmap" },
	{ 0x6405ab85, "regulator_map_voltage_linear" },
	{ 0xb9791900, "regulator_list_voltage_linear" },
	{ 0xea7fe4d2, "regulator_is_enabled_regmap" },
	{ 0x2c78494, "regulator_disable_regmap" },
	{ 0x8c45fce4, "regulator_enable_regmap" },
	{ 0xb17792d5, "regmap_write" },
	{ 0x96762fda, "regulator_notifier_call_chain" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x89036b7b, "devm_regulator_register" },
	{ 0x4d1ec273, "regmap_read" },
	{ 0x2505b0c1, "regmap_bulk_read" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xbf35ccc5, "_dev_warn" },
	{ 0xf9eee56b, "devm_request_threaded_irq" },
	{ 0x4a1a457f, "__devm_regmap_init_i2c" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0xff2e1077, "devm_gpio_request_one" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:slg51000");

MODULE_INFO(scmversion, "g2806f02f43ff");
