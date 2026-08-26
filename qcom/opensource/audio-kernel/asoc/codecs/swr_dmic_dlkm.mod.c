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
	{ 0x6024d4aa, "snd_soc_dapm_put_volsw" },
	{ 0x6f076475, "snd_soc_dapm_get_volsw" },
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0xbf35ccc5, "_dev_warn" },
	{ 0x469e64dd, "swr_disconnect_port" },
	{ 0x4ab081fd, "swr_slvdev_datapath_control" },
	{ 0xcf15b69, "swr_connect_port" },
	{ 0xc310b981, "strnstr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe67d5f14, "wcd938x_swr_dmic_register_notifier" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1fd24c78, "swr_init_port_params" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0x12a38747, "usleep_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xc5850110, "printk" },
	{ 0xe02a8297, "swr_remove_device" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x4a374be4, "wcd938x_codec_force_enable_micbias_v2" },
	{ 0x2bebaa7e, "snd_soc_lookup_component" },
	{ 0xac163cde, "of_find_device_by_node" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x83825a64, "swr_driver_unregister" },
	{ 0xfa5c5ed5, "swr_driver_register" },
};

MODULE_INFO(depends, "swr_dlkm,wcd938x_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
