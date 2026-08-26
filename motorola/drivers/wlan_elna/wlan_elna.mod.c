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
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xe28c9bd7, "gpiod_get_raw_value" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0xc5850110, "printk" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "23120E2CDC989078E226469");

MODULE_INFO(scmversion, "g2806f02f43ff");
