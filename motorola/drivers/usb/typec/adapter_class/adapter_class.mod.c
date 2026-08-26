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
	{ 0xf9a482f9, "msleep" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc0f9442e, "class_find_device" },
	{ 0x8ba5ae2, "device_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xcec2e59f, "device_register" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0x574add77, "__mutex_init" },
	{ 0x36d70b72, "srcu_init_notifier_head" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xc579925f, "srcu_notifier_chain_unregister" },
	{ 0xb5dec381, "srcu_notifier_chain_register" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
