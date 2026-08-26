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
	{ 0xd6cc0cc0, "qcom_unregister_ssr_notifier" },
	{ 0xfa538df, "qcom_register_ssr_notifier" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x36d70b72, "srcu_init_notifier_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x822e5f97, "rproc_get_by_phandle" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xfa9d85fd, "srcu_notifier_call_chain" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe4555ceb, "audio_pdr_service_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xb5dec381, "srcu_notifier_chain_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc579925f, "srcu_notifier_chain_unregister" },
	{ 0x386bf0da, "audio_pdr_service_deregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "rproc_qcom_common,q6_pdr_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,adsp-notify");
MODULE_ALIAS("of:N*T*Cqcom,adsp-notifyC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
