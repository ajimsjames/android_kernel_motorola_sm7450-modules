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
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x679bf49a, "irq_set_chip_and_handler_name" },
	{ 0xeaaca108, "handle_simple_irq" },
	{ 0x1cb2c300, "devm_regmap_del_irq_chip" },
	{ 0xe68ffdcf, "irq_find_mapping" },
	{ 0xfb323279, "devm_regmap_add_irq_chip" },
	{ 0x3bfe3c2, "irq_create_mapping_affinity" },
	{ 0xb419e39c, "__irq_domain_add" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xc5f040e5, "_dev_info" },
	{ 0xb602cbbc, "of_get_property" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6dbadc2b, "snd_soc_dapm_sync" },
	{ 0x1ae47dbd, "snd_soc_dapm_disable_pin" },
	{ 0x7ae43253, "snd_soc_dapm_force_enable_pin" },
	{ 0x2bebaa7e, "snd_soc_lookup_component" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xb62b6003, "devm_regulator_bulk_get" },
	{ 0x9cd26dec, "regulator_count_voltages" },
	{ 0xea3df7d6, "regulator_set_load" },
	{ 0x39f96177, "regulator_enable" },
	{ 0x297579ba, "regulator_disable" },
	{ 0x58a28ea3, "regulator_set_voltage" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x742471cf, "devm_pinctrl_put" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1b71bec9, "of_get_named_gpio_flags" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xba19ea71, "pinctrl_lookup_state" },
	{ 0x30822a11, "devm_pinctrl_get" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xdc9d499c, "msm_gpio_mpm_wake_set" },
	{ 0x6c1be3f0, "pinctrl_select_state" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0xfdb6bd3b, "gpiod_get_raw_value_cansleep" },
	{ 0x16ec718d, "gpio_to_desc" },
	{ 0xac163cde, "of_find_device_by_node" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "pinctrl-msm");


MODULE_INFO(scmversion, "g2806f02f43ff");
