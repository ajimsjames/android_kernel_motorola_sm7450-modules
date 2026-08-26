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
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27885e58, "gpiod_set_raw_value" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x9dca9a69, "regulator_put" },
	{ 0xb22947d8, "devm_gpio_free" },
	{ 0x5d3713d4, "gpiod_direction_input" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x9c2af1f1, "devm_gpio_request" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0x9cd26dec, "regulator_count_voltages" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x719ce0bf, "regulator_get" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x919e5255, "netlink_kernel_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x542085c0, "__netlink_kernel_create" },
	{ 0x675a9622, "init_net" },
	{ 0x2dad2459, "netlink_unicast" },
	{ 0x8c3f2c36, "__nlmsg_put" },
	{ 0x490fa147, "kfree_skb" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0xcbde8bae, "pm_wakeup_dev_event" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0xadfc90e, "device_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4117f5c7, "input_free_device" },
	{ 0x6d0a4690, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb9ab1a56, "input_register_device" },
	{ 0x50d27be, "input_set_capability" },
	{ 0x98fedf9b, "input_allocate_device" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xf987a6, "device_create" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xdcb764ad, "memset" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xcb3e900b, "input_event" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x35f8e56c, "nonseekable_open" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xdaf4ee2d, "__register_chrdev" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
