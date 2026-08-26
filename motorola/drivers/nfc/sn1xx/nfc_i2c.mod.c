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
	{ 0x39c74d8, "no_llseek" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0xcbde8bae, "pm_wakeup_dev_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x574add77, "__mutex_init" },
	{ 0x618c2bab, "mmi_device_is_available" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdcb764ad, "memset" },
	{ 0x92bf83a4, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xf987a6, "device_create" },
	{ 0x4305d412, "cdev_add" },
	{ 0x77f94169, "cdev_init" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xcbdd06ee, "cdev_del" },
	{ 0xadfc90e, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x5d3713d4, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27885e58, "gpiod_set_raw_value" },
	{ 0xe28c9bd7, "gpiod_get_raw_value" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x9dca9a69, "regulator_put" },
	{ 0x719ce0bf, "regulator_get" },
	{ 0xb602cbbc, "of_get_property" },
	{ 0x39f96177, "regulator_enable" },
	{ 0xea3df7d6, "regulator_set_load" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "mmi_info");

MODULE_ALIAS("of:N*T*Cqcom,sn-nci");
MODULE_ALIAS("of:N*T*Cqcom,sn-nciC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
