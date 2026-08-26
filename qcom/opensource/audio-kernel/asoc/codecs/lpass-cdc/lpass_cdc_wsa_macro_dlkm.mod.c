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
	{ 0xecbd4171, "snd_soc_get_volsw" },
	{ 0x6024d4aa, "snd_soc_dapm_put_volsw" },
	{ 0x6f076475, "snd_soc_dapm_get_volsw" },
	{ 0xce0a5934, "snd_soc_dapm_put_enum_double" },
	{ 0x847eb837, "snd_soc_dapm_get_enum_double" },
	{ 0x7acc1f0d, "snd_soc_info_enum_double" },
	{ 0xd823ae36, "snd_soc_info_volsw" },
	{ 0x3aecf493, "lpass_cdc_runtime_resume" },
	{ 0xed52c306, "pm_runtime_force_resume" },
	{ 0xd69360d3, "pm_runtime_force_suspend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x20037658, "snd_soc_put_volsw" },
	{ 0x8fc81c38, "lpass_cdc_update_compander_setting" },
	{ 0xb2b668af, "snd_soc_dapm_mux_update_power" },
	{ 0x429478a1, "snd_soc_dapm_mixer_update_power" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcede774d, "snd_soc_dapm_kcontrol_widget" },
	{ 0x3f815e47, "lpass_cdc_wsa_pa_on" },
	{ 0x2a1c4df0, "snd_soc_component_write" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0x64994eb2, "lpass_cdc_rsc_clk_reset" },
	{ 0x9a860038, "lpass_cdc_runtime_suspend" },
	{ 0x6386a5d, "swrm_wcd_notify" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0xfdebacdf, "snd_soc_dapm_ignore_suspend" },
	{ 0x5d59aba3, "snd_soc_add_component_controls" },
	{ 0x369238e2, "snd_soc_dapm_new_widgets" },
	{ 0xa96e785a, "snd_soc_dapm_add_routes" },
	{ 0x4a615359, "snd_soc_dapm_new_controls" },
	{ 0x12217eb6, "lpass_cdc_get_device_ptr" },
	{ 0xae1a517f, "regcache_sync_region" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0xc12477f4, "lpass_cdc_clk_rsc_request_clock" },
	{ 0x52e2a413, "lpass_cdc_clk_rsc_fs_gen_request" },
	{ 0x866d0374, "lpass_cdc_check_core_votes" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x49bbfd77, "msm_cdc_pinctrl_select_sleep_state" },
	{ 0xab5a1db, "regmap_update_bits_base" },
	{ 0xefbcc556, "msm_cdc_pinctrl_select_active_state" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xa5cb814b, "dev_get_regmap" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0xafd6b72f, "platform_device_put" },
	{ 0xc5850110, "printk" },
	{ 0xb86dd74, "platform_device_add" },
	{ 0xb1e12d81, "krealloc" },
	{ 0x8bf59306, "platform_device_add_data" },
	{ 0x3740d63, "platform_device_alloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc310b981, "strnstr" },
	{ 0xa9600040, "of_get_next_available_child" },
	{ 0x9e3d1dba, "lpass_cdc_unregister_macro" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x6196375e, "platform_device_unregister" },
	{ 0x136d09d6, "thermal_cooling_device_unregister" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x925d9f10, "devm_thermal_of_cooling_device_register" },
	{ 0x71a6a1cb, "lpass_cdc_register_macro" },
	{ 0x574add77, "__mutex_init" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xb17d9150, "msm_cdc_pinctrl_set_wakeup_capable" },
	{ 0x7ec09aa2, "msm_cdc_pinctrl_get_state" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x581d546, "lpass_cdc_is_va_macro_registered" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
};

MODULE_INFO(depends, "lpass_cdc_dlkm,swr_ctrl_dlkm,wcd_core_dlkm");


MODULE_INFO(scmversion, "g2806f02f43ff");
