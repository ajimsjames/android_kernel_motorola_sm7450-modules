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
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaf8842e, "rproc_set_firmware" },
	{ 0x7e8184fc, "spf_core_is_apm_ready" },
	{ 0xf3a3ddbb, "rproc_boot" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc97f6df5, "rproc_put" },
	{ 0xf524bddc, "kobject_del" },
	{ 0x5792f848, "strlcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x8c25f7e3, "nvmem_cell_get" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x822e5f97, "rproc_get_by_phandle" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab9e40d0, "rproc_shutdown" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x2276db98, "kstrtoint" },
};

MODULE_INFO(depends, "spf_core_dlkm");

MODULE_ALIAS("of:N*T*Cqcom,adsp-loader");
MODULE_ALIAS("of:N*T*Cqcom,adsp-loaderC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
