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
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x417b1b2a, "neigh_resolve_output" },
	{ 0xc861d400, "xfrm_lookup" },
	{ 0xeb7f2c67, "neigh_destroy" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1c76ccc0, "dst_release" },
	{ 0xc88aced4, "ip_route_output_flow" },
	{ 0xcb19a575, "ipv6_stub" },
	{ 0x3a29ff40, "netif_rx" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5d56f1d0, "netif_receive_skb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xed269ad2, "__hrtimer_get_remaining" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x951804d5, "param_ops_ullong" },
	{ 0x2dad2459, "netlink_unicast" },
	{ 0xd9b53393, "dev_get_by_name" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x349cba85, "strchr" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedb13e0e, "genl_unregister_family" },
	{ 0x7f970fa9, "genl_register_family" },
	{ 0x2fb510cb, "param_array_ops" },
	{ 0x5246639a, "param_ops_charp" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2ca20c17, "dev_get_by_name_rcu" },
	{ 0x675a9622, "init_net" },
	{ 0x490fa147, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0xca4e1b63, "netdev_rx_handler_register" },
	{ 0x3e455f43, "netdev_rx_handler_unregister" },
	{ 0xb53031f2, "skb_trim" },
	{ 0xcf65aa3a, "nla_put" },
	{ 0xcd5c29f8, "genlmsg_put" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xec8747be, "dev_queue_xmit" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x69796ebf, "__pskb_pull_tail" },
	{ 0x923d0764, "skb_put" },
	{ 0xedcb3537, "pskb_expand_head" },
	{ 0x29cc6317, "ipv6_skip_exthdr" },
	{ 0xe1f7b70e, "skb_copy_bits" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
