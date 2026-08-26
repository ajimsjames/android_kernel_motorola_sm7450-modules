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
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x73fe64c, "__tracepoint_android_vh_alloc_pages_slowpath_end" },
	{ 0x93472c6d, "__tracepoint_android_vh_alloc_pages_slowpath_begin" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x77bc13a0, "strim" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48e68de3, "remove_proc_entry" },
	{ 0xa607ae3f, "proc_create" },
	{ 0x877a4a12, "proc_mkdir" },
	{ 0xdbeeece6, "tracepoint_probe_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x1a27f97f, "__tracepoint_android_vh_drain_all_pages_bypass" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0xebfa95d0, "__tracepoint_android_vh_tune_inactive_ratio" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
