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
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x34e88e9d, "param_ops_bool" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6257a2f, "complete" },
	{ 0x56e3edd9, "pmic_glink_unregister_client" },
	{ 0xf470e1fe, "ipc_log_context_destroy" },
	{ 0x33172d60, "debugfs_create_x32" },
	{ 0xfeb48609, "debugfs_create_x64" },
	{ 0x58ba3d68, "debugfs_remove" },
	{ 0x591ee2bf, "debugfs_create_file" },
	{ 0xa33b2b66, "debugfs_create_dir" },
	{ 0xd1ce2398, "wake_up_process" },
	{ 0x4ec0b590, "kthread_create_on_node" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x6fdbaa2a, "ipc_log_context_create" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x9f8f094d, "pmic_glink_register_client" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
	{ 0x8b83a1e8, "ipc_log_string" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5a5edc5c, "pmic_glink_write" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "pmic_glink,qcom_ipc_logging");


MODULE_INFO(scmversion, "g2806f02f43ff");
