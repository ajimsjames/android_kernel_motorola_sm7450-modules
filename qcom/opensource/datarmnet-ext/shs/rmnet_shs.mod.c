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
	{ 0x89a23a78, "param_ops_int" },
	{ 0x951804d5, "param_ops_ullong" },
	{ 0x82298d6d, "param_ops_ulong" },
	{ 0xedb13e0e, "genl_unregister_family" },
	{ 0x7f970fa9, "genl_register_family" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xaffc34fa, "netlink_broadcast" },
	{ 0x675a9622, "init_net" },
	{ 0x2dad2459, "netlink_unicast" },
	{ 0xcf65aa3a, "nla_put" },
	{ 0xcd5c29f8, "genlmsg_put" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x48e68de3, "remove_proc_entry" },
	{ 0xa607ae3f, "proc_create" },
	{ 0x44a77c35, "proc_set_user" },
	{ 0x877a4a12, "proc_mkdir" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x894967be, "freq_qos_remove_request" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28498a88, "freq_qos_add_request" },
	{ 0x42d7fd13, "cpufreq_cpu_get" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x409a68bd, "param_ops_uint" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xdcb764ad, "memset" },
	{ 0x184ef9a5, "wakeup_source_unregister" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xc27c34a6, "__skb_get_hash" },
	{ 0x29cc6317, "ipv6_skip_exthdr" },
	{ 0x9cf357cc, "wakeup_source_register" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x490fa147, "kfree_skb" },
	{ 0xdecd36d3, "skb_dequeue_tail" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0x515a4370, "__pm_relax" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x76c41756, "hrtimer_forward" },
	{ 0xaabcd4e7, "consume_skb" },
	{ 0x3a29ff40, "netif_rx" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd2432088, "__skb_gso_segment" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb6e2966d, "softnet_data" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x6e959e17, "netif_rx_ni" },
	{ 0x5d56f1d0, "netif_receive_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x377ef61, "__pm_stay_awake" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0xecd991f, "hrtimer_active" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe1f7b70e, "skb_copy_bits" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2fb510cb, "param_array_ops" },
	{ 0x5246639a, "param_ops_charp" },
	{ 0x5a921311, "strncmp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
