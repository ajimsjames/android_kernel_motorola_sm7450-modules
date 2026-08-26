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
	{ 0x779a18af, "kstrtoll" },
	{ 0xbf35ccc5, "_dev_warn" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8ba5ae2, "device_unregister" },
	{ 0x45a36afc, "device_create_file" },
	{ 0x20d81059, "up_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x28ed2847, "down_write" },
	{ 0xf987a6, "device_create" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
