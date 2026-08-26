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
	{ 0xef8edf17, "kobject_uevent_env" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb2aa579, "thermal_zone_get_temp" },
	{ 0xdcb764ad, "memset" },
	{ 0x136605b8, "misc_deregister" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0xbd512e3f, "thermal_zone_device_unregister" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0xcbdf3b1a, "thermal_zone_get_zone_by_name" },
	{ 0x54ee7f51, "misc_register" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe111202f, "thermal_zone_device_register" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmmi,sys-temp");
MODULE_ALIAS("of:N*T*Cmmi,sys-tempC*");

MODULE_INFO(scmversion, "g2806f02f43ff");
