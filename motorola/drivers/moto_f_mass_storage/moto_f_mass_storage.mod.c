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
	{ 0x5a9f1d63, "memmove" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa12080fa, "vfs_fsync" },
	{ 0x636ced29, "filp_open_block" },
	{ 0xb6c02e0d, "fput" },
	{ 0x89a23a78, "param_ops_int" },
	{ 0x880d48e4, "usb_ep_alloc_request" },
	{ 0x2dbea237, "usb_ep_enable" },
	{ 0x2e45a14c, "config_ep_by_speed" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1d6766db, "usb_ep_free_request" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x81ee4ce7, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x20d81059, "up_write" },
	{ 0x28ed2847, "down_write" },
	{ 0x6b50e951, "up_read" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3355da1c, "down_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcd0fc5f, "usb_composite_setup_continue" },
	{ 0x9370b708, "usb_ep_clear_halt" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa50158bd, "usb_ep_fifo_flush" },
	{ 0xbadfaba7, "usb_ep_dequeue" },
	{ 0x8d73812, "flush_signals" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8310b89e, "usb_ep_set_halt" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x1aec8cdd, "usb_ep_disable" },
	{ 0xbf35ccc5, "_dev_warn" },
	{ 0xd4616fc7, "usb_ep_queue" },
	{ 0xabf2dbe6, "usb_free_all_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3eb52ba5, "_dev_err" },
	{ 0x2c96344d, "usb_assign_descriptors" },
	{ 0x494cf0f8, "usb_ep_autoconfig" },
	{ 0xa5f7c47c, "usb_interface_id" },
	{ 0xd1ce2398, "wake_up_process" },
	{ 0x4ec0b590, "kthread_create_on_node" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd5932478, "config_item_put" },
	{ 0xa4329472, "usb_gadget_unregister_driver" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0x349cba85, "strchr" },
	{ 0x3b971f1, "usb_put_function_instance" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36f71527, "send_sig_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x24a12ca6, "config_group_init_type_name" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd30b056c, "usb_function_unregister" },
	{ 0x3aab80b8, "usb_function_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xea83bb76, "put_device" },
	{ 0xc5850110, "printk" },
	{ 0xbfb0ee8c, "file_path" },
	{ 0xcec2e59f, "device_register" },
	{ 0x596e3db3, "dev_set_name" },
	{ 0xbaa6702f, "kmem_cache_alloc_trace" },
	{ 0xce7f4b8f, "kmalloc_caches" },
	{ 0xfec46f4e, "usb_gstrings_attach" },
	{ 0x8ba5ae2, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(scmversion, "g2806f02f43ff");
