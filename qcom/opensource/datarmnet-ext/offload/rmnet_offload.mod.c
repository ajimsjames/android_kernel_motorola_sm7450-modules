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
	{ 0xae1701e0, "param_get_ullong" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x951804d5, "param_ops_ullong" },
	{ 0x2fb510cb, "param_array_ops" },
	{ 0x5246639a, "param_ops_charp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x5a921311, "strncmp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
