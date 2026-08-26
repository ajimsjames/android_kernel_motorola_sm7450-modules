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
	{ 0x4829a47e, "memcpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2e5a6763, "qcom_clk_get_voltage" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x574add77, "__mutex_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x628cf2aa, "simple_open" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0x6a61cba5, "debugfs_create_u8" },
	{ 0x3acd5f9c, "debugfs_create_u32" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x39bfa514, "of_match_node" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x96848186, "scnprintf" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xe3463541, "of_device_is_compatible" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "clk-qcom");

MODULE_ALIAS("of:N*T*Cqcom,msm-mmrm");
MODULE_ALIAS("of:N*T*Cqcom,msm-mmrmC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
