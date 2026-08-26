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
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x574add77, "__mutex_init" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmmi,sys-relay");
MODULE_ALIAS("of:N*T*Cmmi,sys-relayC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
