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
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc310b981, "strnstr" },
	{ 0xb5e10c57, "power_supply_get_property" },
	{ 0x7ee94239, "power_supply_get_by_name" },
	{ 0x8e19f137, "pm_relax" },
	{ 0x279b23ae, "pm_stay_awake" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4f19efbb, "gpiod_set_raw_value_cansleep" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x438d5114, "i2c_transfer" },
	{ 0xd0a63dc4, "i2c_smbus_read_byte_data" },
	{ 0xd6c8d3d0, "i2c_smbus_write_byte_data" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa45b3c60, "request_firmware" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x54ee7f51, "misc_register" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xff2e1077, "devm_gpio_request_one" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x574add77, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x136605b8, "misc_deregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdd64e639, "strscpy" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0x999e8297, "vfree" },
	{ 0x92bf83a4, "i2c_transfer_buffer_flags" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdcb764ad, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
