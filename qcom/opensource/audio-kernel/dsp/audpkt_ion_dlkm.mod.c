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
	{ 0xc967b12b, "dma_buf_map_attachment" },
	{ 0x70312a2b, "dma_buf_attach" },
	{ 0xf20d6f2e, "dma_buf_vmap" },
	{ 0xf936c47c, "dma_buf_begin_cpu_access" },
	{ 0xca311a4a, "dma_buf_get" },
	{ 0xea83bb76, "put_device" },
	{ 0xa3644398, "get_device" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x4305d412, "cdev_add" },
	{ 0x77f94169, "cdev_init" },
	{ 0xf987a6, "device_create" },
	{ 0xf4d3debf, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91eaa13e, "class_destroy" },
	{ 0xadfc90e, "device_destroy" },
	{ 0xcbdd06ee, "cdev_del" },
	{ 0x574add77, "__mutex_init" },
	{ 0x8891bb55, "of_parse_phandle_with_args" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x38751c9a, "dma_buf_put" },
	{ 0xe3a8955e, "dma_buf_detach" },
	{ 0xa42eea7f, "dma_buf_unmap_attachment" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x7ca75f11, "dma_buf_end_cpu_access" },
	{ 0xea2e69ac, "dma_buf_vunmap" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x398b9914, "hyp_assign_phys" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "secure_buffer");

MODULE_ALIAS("of:N*T*Cqcom,msm-audio-ion");
MODULE_ALIAS("of:N*T*Cqcom,msm-audio-ionC*");
MODULE_ALIAS("of:N*T*Cqcom,msm-audio-ion-cma");
MODULE_ALIAS("of:N*T*Cqcom,msm-audio-ion-cmaC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
