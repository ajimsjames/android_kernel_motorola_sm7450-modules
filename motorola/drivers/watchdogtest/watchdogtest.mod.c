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
	{ 0xb9fb56dd, "simple_attr_release" },
	{ 0x7daaa491, "simple_attr_write" },
	{ 0x5a0e3afd, "simple_attr_read" },
	{ 0x339e09b, "generic_file_llseek" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5850110, "printk" },
	{ 0x45139159, "simple_attr_open" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0x1797245e, "qcom_wdt_trigger_bite" },
	{ 0x591ee2bf, "debugfs_create_file" },
};

MODULE_INFO(depends, "qcom_wdt_core");


MODULE_INFO(scmversion, "g2806f02f43ff");
