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
	{ 0xf90f4c06, "snd_soc_info_multi_ext" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x7d383782, "msm_ext_disp_select_audio_codec" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd38159d2, "msm_ext_disp_register_audio_codec" },
	{ 0xac163cde, "of_find_device_by_node" },
	{ 0xb4ad1ffd, "of_get_parent" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xedf3b609, "__platform_driver_register" },
};

MODULE_INFO(depends, "msm_ext_display");

MODULE_ALIAS("of:N*T*Cqcom,msm-ext-disp-audio-codec-rx");
MODULE_ALIAS("of:N*T*Cqcom,msm-ext-disp-audio-codec-rxC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
