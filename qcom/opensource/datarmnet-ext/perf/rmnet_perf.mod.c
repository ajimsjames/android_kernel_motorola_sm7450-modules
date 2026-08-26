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
	{ 0x2fb510cb, "param_array_ops" },
	{ 0x5246639a, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x29cc6317, "ipv6_skip_exthdr" },
	{ 0xe1f7b70e, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
