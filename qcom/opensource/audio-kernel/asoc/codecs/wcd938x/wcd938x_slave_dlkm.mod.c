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
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5850110, "printk" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xa8480acd, "swr_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6bcaa0bb, "swr_read" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x85df9b6c, "strsep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe02a8297, "swr_remove_device" },
	{ 0x8a44ba45, "component_del" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0xa76d9111, "component_add" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x83825a64, "swr_driver_unregister" },
	{ 0xfa5c5ed5, "swr_driver_register" },
};

MODULE_INFO(depends, "swr_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
