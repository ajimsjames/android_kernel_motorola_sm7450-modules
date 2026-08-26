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
	{ 0x409a68bd, "param_ops_uint" },
	{ 0xadfc90e, "device_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x647bdd91, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb602cbbc, "of_get_property" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0xbd9a323, "of_find_compatible_node" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xf987a6, "device_create" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x574add77, "__mutex_init" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27885e58, "gpiod_set_raw_value" },
	{ 0xe28c9bd7, "gpiod_get_raw_value" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xdcb764ad, "memset" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x35f8e56c, "nonseekable_open" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xea83bb76, "put_device" },
	{ 0x5f497f4a, "spi_setup" },
	{ 0xa3644398, "get_device" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6ff9cf64, "spi_sync" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xb9f45b68, "driver_unregister" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xc171c3e1, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xdaf4ee2d, "__register_chrdev" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,st54spi");
MODULE_ALIAS("of:N*T*Cst,st54spiC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
