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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x779a18af, "kstrtoll" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcbde8bae, "pm_wakeup_dev_event" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x92bf83a4, "i2c_transfer_buffer_flags" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xe28c9bd7, "gpiod_get_raw_value" },
	{ 0xdcb764ad, "memset" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x51ec673b, "clk_get" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xbd9a323, "of_find_compatible_node" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x136605b8, "misc_deregister" },
	{ 0x27885e58, "gpiod_set_raw_value" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x9b81d020, "device_set_wakeup_capable" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x54ee7f51, "misc_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd1e32e72, "gpiod_to_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d3713d4, "gpiod_direction_input" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x618c2bab, "mmi_device_is_available" },
	{ 0x50e14333, "i2c_del_driver" },
	{ 0x86f29092, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "mmi_info");


MODULE_INFO(srcversion, "2E35434DE6FE461AB3FF13D");

MODULE_INFO(scmversion, "g2806f02f43ff");
