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
	{ 0x2dbea237, "usb_ep_enable" },
	{ 0x2e45a14c, "config_ep_by_speed" },
	{ 0x3a29ff40, "netif_rx" },
	{ 0x48848268, "eth_type_trans" },
	{ 0x923d0764, "skb_put" },
	{ 0x1d6766db, "usb_ep_free_request" },
	{ 0x1aec8cdd, "usb_ep_disable" },
	{ 0x880d48e4, "usb_ep_alloc_request" },
	{ 0x494cf0f8, "usb_ep_autoconfig" },
	{ 0xf641d357, "usb_string_id" },
	{ 0xa5f7c47c, "usb_interface_id" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x874aaeea, "__dev_kfree_skb_any" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd4616fc7, "usb_ep_queue" },
	{ 0x3b971f1, "usb_put_function_instance" },
	{ 0xef8edf17, "kobject_uevent_env" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x5792f848, "strlcpy" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3bbb911b, "ether_setup" },
	{ 0x4735ac17, "flush_work" },
	{ 0x14c745b, "sock_release" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xec166ea4, "device_remove_file" },
	{ 0x6b41785e, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ec18ff2, "free_netdev" },
	{ 0xb024cdc2, "sock_create_kern" },
	{ 0x675a9622, "init_net" },
	{ 0x45a36afc, "device_create_file" },
	{ 0x92d925d6, "register_netdev" },
	{ 0x2c0df642, "alloc_netdev_mqs" },
	{ 0x24a12ca6, "config_group_init_type_name" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xd30b056c, "usb_function_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x3aab80b8, "usb_function_register" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
