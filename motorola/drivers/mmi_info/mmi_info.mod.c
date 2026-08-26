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
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc310b981, "strnstr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb602cbbc, "of_get_property" },
	{ 0x1c9248ef, "of_prop_next_string" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xbeb6a067, "PDE_DATA" },
	{ 0xf3cb0240, "mmi_annotate" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa07a37f0, "memchr" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0x48e68de3, "remove_proc_entry" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34b57571, "qcom_smem_alloc" },
	{ 0xa607ae3f, "proc_create" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xa916b694, "strnlen" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xeeffa750, "qcom_smem_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf524bddc, "kobject_del" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x5482805e, "mmi_annotate_persist" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
};

MODULE_INFO(depends, "mmi_annotate,smem");


MODULE_INFO(scmversion, "g2806f02f43ff");
