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
	{ 0x89a23a78, "param_ops_int" },
	{ 0x34e88e9d, "param_ops_bool" },
	{ 0x50f53c9e, "power_supply_get_drvdata" },
	{ 0xf9a482f9, "msleep" },
	{ 0x377ef61, "__pm_stay_awake" },
	{ 0x515a4370, "__pm_relax" },
	{ 0x8e19f137, "pm_relax" },
	{ 0xfeb6361a, "alarm_start_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x536e1fa7, "alarm_cancel" },
	{ 0x279b23ae, "pm_stay_awake" },
	{ 0x184ef9a5, "wakeup_source_unregister" },
	{ 0x8375ea18, "power_supply_put" },
	{ 0x2115221d, "sysfs_remove_group" },
	{ 0xec166ea4, "device_remove_file" },
	{ 0x6b81c38b, "power_supply_unreg_notifier" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0xf470e1fe, "ipc_log_context_destroy" },
	{ 0x6b6c77f9, "devm_power_supply_register" },
	{ 0x1fbe3658, "alarm_init" },
	{ 0x9cf357cc, "wakeup_source_register" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x574add77, "__mutex_init" },
	{ 0x6fdbaa2a, "ipc_log_context_create" },
	{ 0x1c7137db, "device_init_wakeup" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x45a36afc, "device_create_file" },
	{ 0x7a268829, "sysfs_create_group" },
	{ 0x7ee94239, "power_supply_get_by_name" },
	{ 0xef8edf17, "kobject_uevent_env" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0x4c0b8512, "platform_driver_unregister" },
	{ 0xedf3b609, "__platform_driver_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6b9bd4b2, "devm_kfree" },
	{ 0x9c3d2b68, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb9a35017, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x478a6ecf, "power_supply_changed" },
	{ 0x8b83a1e8, "ipc_log_string" },
	{ 0xb5e10c57, "power_supply_get_property" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc310b981, "strnstr" },
	{ 0x349cba85, "strchr" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5a921311, "strncmp" },
	{ 0xcea47f14, "bi_bootmode" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xc1b6ddce, "of_find_node_opts_by_path" },
};

MODULE_INFO(depends, "qcom_ipc_logging,mmi_info");


MODULE_INFO(scmversion, "g2806f02f43ff");
