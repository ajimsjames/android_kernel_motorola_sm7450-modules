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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe3c515c, "module_layout" },
	{ 0xb1e12d81, "krealloc" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
