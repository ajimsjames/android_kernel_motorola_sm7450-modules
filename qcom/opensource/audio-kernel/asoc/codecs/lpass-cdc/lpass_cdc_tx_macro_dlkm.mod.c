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
	{ 0x345566aa, "snd_soc_put_enum_double" },
	{ 0x62ef004f, "snd_soc_get_enum_double" },
	{ 0x20037658, "snd_soc_put_volsw" },
	{ 0xecbd4171, "snd_soc_get_volsw" },
	{ 0x847eb837, "snd_soc_dapm_get_enum_double" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0x3aecf493, "lpass_cdc_runtime_resume" },
	{ 0xed52c306, "pm_runtime_force_resume" },
	{ 0xd69360d3, "pm_runtime_force_suspend" },
	{ 0x89a23a78, "param_ops_int" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xab5a1db, "regmap_update_bits_base" },
	{ 0xae1a517f, "regcache_sync_region" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0x52e2a413, "lpass_cdc_clk_rsc_fs_gen_request" },
	{ 0xc12477f4, "lpass_cdc_clk_rsc_request_clock" },
	{ 0xa5cb814b, "dev_get_regmap" },
	{ 0xce0a5934, "snd_soc_dapm_put_enum_double" },
	{ 0xc310b981, "strnstr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x429478a1, "snd_soc_dapm_mixer_update_power" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcede774d, "snd_soc_dapm_kcontrol_widget" },
	{ 0x2a1c4df0, "snd_soc_component_write" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x279b23ae, "pm_stay_awake" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xf4b96c1, "lpass_cdc_dmic_clk_enable" },
	{ 0x8e19f137, "pm_relax" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xab734d12, "lpass_cdc_clear_amic_tx_hold" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0x64994eb2, "lpass_cdc_rsc_clk_reset" },
	{ 0x9a860038, "lpass_cdc_runtime_suspend" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x369238e2, "snd_soc_dapm_new_widgets" },
	{ 0xa96e785a, "snd_soc_dapm_add_routes" },
	{ 0x4a615359, "snd_soc_dapm_new_controls" },
	{ 0x8110dfcd, "lpass_cdc_get_version" },
	{ 0x12217eb6, "lpass_cdc_get_device_ptr" },
	{ 0x9e3d1dba, "lpass_cdc_unregister_macro" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x71a6a1cb, "lpass_cdc_register_macro" },
	{ 0x574add77, "__mutex_init" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x581d546, "lpass_cdc_is_va_macro_registered" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
};

MODULE_INFO(depends, "lpass_cdc_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
