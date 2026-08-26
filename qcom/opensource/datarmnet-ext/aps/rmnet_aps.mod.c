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
	{ 0xedb13e0e, "genl_unregister_family" },
	{ 0x7f970fa9, "genl_register_family" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x2fb510cb, "param_array_ops" },
	{ 0x5246639a, "param_ops_charp" },
	{ 0x5a921311, "strncmp" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc5850110, "printk" },
	{ 0x2dad2459, "netlink_unicast" },
	{ 0xcf65aa3a, "nla_put" },
	{ 0xcd5c29f8, "genlmsg_put" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa4008af, "del_timer" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1db1704, "nla_memcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
