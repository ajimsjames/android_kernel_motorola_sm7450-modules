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
	{ 0x8ba5ae2, "device_unregister" },
	{ 0xb4e73bb9, "snd_event_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0x43023eaa, "pm_wakeup_ws_event" },
	{ 0x515a4370, "__pm_relax" },
	{ 0x20978fb9, "idr_find" },
	{ 0x4aa9217f, "device_for_each_child" },
	{ 0xed129500, "snd_event_client_deregister" },
	{ 0x184ef9a5, "wakeup_source_unregister" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xea83bb76, "put_device" },
	{ 0xcec2e59f, "device_register" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x9cf357cc, "wakeup_source_register" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe309e3be, "of_get_next_child" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xad7f7254, "snd_event_client_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4717c148, "audio_notifier_probe_status" },
	{ 0xbee58674, "unregister_rpmsg_driver" },
	{ 0xbcd37b28, "__register_rpmsg_driver" },
	{ 0xae862b74, "bus_unregister" },
	{ 0x670c1eef, "bus_register" },
	{ 0xb9f45b68, "driver_unregister" },
	{ 0x951878f7, "driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x1656912c, "of_device_uevent_modalias" },
	{ 0xffc0500f, "of_match_device" },
	{ 0xc5850110, "printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb86fea0c, "rpmsg_trysend" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5656b4d, "audio_notifier_deregister" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xa7fe7810, "audio_notifier_register" },
};

MODULE_INFO(depends, "snd_event_dlkm,q6_notifier_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,gpr");
MODULE_ALIAS("of:N*T*Cqcom,gprC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
