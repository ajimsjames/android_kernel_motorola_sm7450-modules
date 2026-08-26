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
	{ 0x85a87d3a, "skb_queue_tail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x923d0764, "skb_put" },
	{ 0xab1f5be6, "__alloc_skb" },
	{ 0xcbdd06ee, "cdev_del" },
	{ 0x9d8441c7, "gpr_driver_unregister" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xe24f3a8a, "__gpr_driver_register" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xadfc90e, "device_destroy" },
	{ 0x4305d412, "cdev_add" },
	{ 0x77f94169, "cdev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0xf987a6, "device_create" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x42877209, "gpr_send_pkt" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4124677, "mutex_lock_interruptible" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x13b963ad, "msm_audio_get_phy_addr" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9b4f1f33, "msm_audio_ion_crash_handler" },
	{ 0x8892c6d0, "spf_core_apm_close_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x490fa147, "kfree_skb" },
	{ 0xf1e24a9a, "skb_dequeue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8b83a1e8, "ipc_log_string" },
};

MODULE_INFO(depends, "gpr_dlkm,audpkt_ion_dlkm,spf_core_dlkm,qcom_ipc_logging");

MODULE_ALIAS("of:N*T*Cqcom,audio-pkt");
MODULE_ALIAS("of:N*T*Cqcom,audio-pktC*");
MODULE_ALIAS("of:N*T*Cqcom,audio-pkt-core-platform");
MODULE_ALIAS("of:N*T*Cqcom,audio-pkt-core-platformC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
