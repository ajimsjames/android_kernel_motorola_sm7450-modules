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
	{ 0xc6a4a872, "__clk_is_enabled" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x742586a2, "of_platform_populate" },
	{ 0x9d8441c7, "gpr_driver_unregister" },
	{ 0xe24f3a8a, "__gpr_driver_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x42877209, "gpr_send_pkt" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "gpr_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,spf_core");
MODULE_ALIAS("of:N*T*Cqcom,spf_coreC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
