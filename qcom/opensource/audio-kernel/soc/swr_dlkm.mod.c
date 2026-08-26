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
	{ 0x87c2e299, "pm_generic_resume" },
	{ 0x6415749c, "pm_generic_suspend" },
	{ 0xae862b74, "bus_unregister" },
	{ 0x670c1eef, "bus_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x574add77, "__mutex_init" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3d4456b7, "of_alias_get_id" },
	{ 0x8ba5ae2, "device_unregister" },
	{ 0x4aa9217f, "device_for_each_child" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb9f45b68, "driver_unregister" },
	{ 0x951878f7, "driver_register" },
	{ 0xb1e12d81, "krealloc" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0x4ed9ab11, "of_modalias_node" },
	{ 0xa9600040, "of_get_next_available_child" },
	{ 0xc5850110, "printk" },
	{ 0xea83bb76, "put_device" },
	{ 0xcec2e59f, "device_register" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xa3644398, "get_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5cb814b, "dev_get_regmap" },
	{ 0xf27b784f, "__devm_regmap_init" },
	{ 0xad5a46df, "__regmap_init" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
