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
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xe02a8297, "swr_remove_device" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x8a44ba45, "component_del" },
	{ 0xa76d9111, "component_add" },
	{ 0x83825a64, "swr_driver_unregister" },
	{ 0xfa5c5ed5, "swr_driver_register" },
};

MODULE_INFO(depends, "swr_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
