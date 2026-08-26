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
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xcf15b69, "swr_connect_port" },
	{ 0x573103f4, "swr_device_wakeup_vote" },
	{ 0x4d1ec273, "regmap_read" },
	{ 0x19a037d0, "swr_device_wakeup_unvote" },
	{ 0x469e64dd, "swr_disconnect_port" },
	{ 0xb17792d5, "regmap_write" },
	{ 0x4ab081fd, "swr_slvdev_datapath_control" },
	{ 0xc5850110, "printk" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0xe83b3328, "snd_soc_component_init_regmap" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0x98caa0fa, "snd_soc_unregister_component" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe02a8297, "swr_remove_device" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x9b3fe4a1, "snd_soc_register_component" },
	{ 0x68edadda, "__devm_regmap_init_swr" },
	{ 0x1d592d90, "swr_get_logical_dev_num" },
	{ 0x12a38747, "usleep_range" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0x8d018bba, "devm_regulator_get" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x4475bf0d, "of_device_get_match_data" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x83825a64, "swr_driver_unregister" },
	{ 0xfa5c5ed5, "swr_driver_register" },
};

MODULE_INFO(depends, "swr_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
