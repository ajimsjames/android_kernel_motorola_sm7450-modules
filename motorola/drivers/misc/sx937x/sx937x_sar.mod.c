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
	{ 0xfe990052, "gpio_free" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0x5d3713d4, "gpiod_direction_input" },
	{ 0x6d0a4690, "input_unregister_device" },
	{ 0x63812eed, "sensors_classdev_unregister" },
	{ 0x3d4b1658, "class_unregister" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x2fb8cbe6, "sensors_classdev_register" },
	{ 0xcb3e900b, "input_event" },
	{ 0xb9ab1a56, "input_register_device" },
	{ 0x91b214bd, "input_set_abs_params" },
	{ 0x98fedf9b, "input_allocate_device" },
	{ 0x6fccb650, "kobject_uevent" },
	{ 0xe9bfb84f, "__class_register" },
	{ 0x9dca9a69, "regulator_put" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x1f7b7ec7, "regulator_is_enabled" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x719ce0bf, "regulator_get" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xe28c9bd7, "gpiod_get_raw_value" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x438d5114, "i2c_transfer" },
	{ 0x5a921311, "strncmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
};

MODULE_INFO(depends, "sensors_class");

MODULE_ALIAS("i2c:sx937x");

MODULE_INFO(srcversion, "87688CCAACDCD311B2DBE81");

MODULE_INFO(scmversion, "g2806f02f43ff");
