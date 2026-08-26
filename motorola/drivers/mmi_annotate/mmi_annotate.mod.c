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
	{ 0xd740362b, "seq_printf" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4f731e2b, "single_open" },
	{ 0xbc90f31c, "vmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x37a0cba, "kfree" },
	{ 0x48e68de3, "remove_proc_entry" },
	{ 0xc5850110, "printk" },
	{ 0x5bb305e8, "msm_minidump_add_region" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xa607ae3f, "proc_create" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xb23a57e7, "of_address_to_resource" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x148653, "vsnprintf" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "minidump");


MODULE_INFO(scmversion, "g2806f02f43ff");
