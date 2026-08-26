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
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa6257a2f, "complete" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa45b3c60, "request_firmware" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x73940530, "devm_extcon_dev_register" },
	{ 0x4ad3bb1e, "devm_extcon_dev_allocate" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xbb169b45, "snd_soc_card_jack_new" },
	{ 0x78b187cf, "fsa4480_unreg_notifier" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x304ef585, "fsa4480_reg_notifier" },
	{ 0x50d27be, "input_set_capability" },
	{ 0x7224e556, "snd_jack_set_key" },
	{ 0x25306f85, "of_parse_phandle" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7398ab8e, "extcon_set_state_sync" },
	{ 0xc5850110, "printk" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3d6dd0aa, "mutex_is_locked" },
	{ 0x34c4d636, "snd_soc_component_read" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x6ea9e4ae, "snd_soc_component_update_bits" },
	{ 0xe4ab54bd, "snd_soc_jack_report" },
};

MODULE_INFO(depends, "fsa4480-i2c");


MODULE_INFO(scmversion, "g2806f02f43ff");
