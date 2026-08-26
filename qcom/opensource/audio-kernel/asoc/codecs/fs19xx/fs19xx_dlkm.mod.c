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
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0x39c74d8, "no_llseek" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xeec87728, "snd_pcm_hw_constraint_list" },
	{ 0x1c514236, "snd_pcm_hw_constraint_mask64" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x8375ea18, "power_supply_put" },
	{ 0xb5e10c57, "power_supply_get_property" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x96848186, "scnprintf" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf9eee56b, "devm_request_threaded_irq" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0xb22947d8, "devm_gpio_free" },
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x27885e58, "gpiod_set_raw_value" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xff2e1077, "devm_gpio_request_one" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0x574add77, "__mutex_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x7ee94239, "power_supply_get_by_name" },
	{ 0x9dca9a69, "regulator_put" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0x719ce0bf, "regulator_get" },
	{ 0x92bf83a4, "i2c_transfer_buffer_flags" },
	{ 0x438d5114, "i2c_transfer" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x136605b8, "misc_deregister" },
	{ 0x54ee7f51, "misc_register" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0xa45b3c60, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x2f22cc2, "request_firmware_nowait" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfoursemi,fs16xx");
MODULE_ALIAS("of:N*T*Cfoursemi,fs16xxC*");
MODULE_ALIAS("i2c:fs16xx");

MODULE_INFO(srcversion, "D5F5F8AF0FC6741EC781BDF");

MODULE_INFO(scmversion, "g2806f02f43ff");
