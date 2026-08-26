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
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x6d7e0186, "platform_bus_type" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd740362b, "seq_printf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x4f731e2b, "single_open" },
	{ 0xbeb6a067, "PDE_DATA" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc310b981, "strnstr" },
	{ 0x9166fada, "strncpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x956acdcf, "filp_close" },
	{ 0x79f6f5fd, "remove_proc_subtree" },
	{ 0xd6256d2a, "proc_create_data" },
	{ 0x234869da, "proc_mkdir_data" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xfb1afdaa, "bio_put" },
	{ 0x9aeadec0, "submit_bio_wait" },
	{ 0x64a885f1, "bio_add_page" },
	{ 0x7a19c2fa, "vmalloc_to_page" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1c7bb1e3, "bio_associate_blkg" },
	{ 0x29517dac, "bio_alloc_bioset" },
	{ 0x9eea2e39, "fs_bio_set" },
	{ 0x96848186, "scnprintf" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a921311, "strncmp" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4841bdee, "strnchr" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0x4829a47e, "memcpy" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x999e8297, "vfree" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcef7b45, "blkdev_get_by_path" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
