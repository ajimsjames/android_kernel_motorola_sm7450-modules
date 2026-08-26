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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5656b4d, "audio_notifier_deregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa7fe7810, "audio_notifier_register" },
	{ 0x4717c148, "audio_notifier_probe_status" },
	{ 0x9d8441c7, "gpr_driver_unregister" },
	{ 0x574add77, "__mutex_init" },
	{ 0xe24f3a8a, "__gpr_driver_register" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e8184fc, "spf_core_is_apm_ready" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x42877209, "gpr_send_pkt" },
	{ 0x66e00834, "gpr_get_q6_state" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
};

MODULE_INFO(depends, "q6_notifier_dlkm,gpr_dlkm,spf_core_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,audio_prm");
MODULE_ALIAS("of:N*T*Cqcom,audio_prmC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
