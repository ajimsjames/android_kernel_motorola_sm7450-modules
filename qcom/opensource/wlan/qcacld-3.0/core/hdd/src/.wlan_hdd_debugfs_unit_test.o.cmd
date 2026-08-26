cmd_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o := scripts/basic/cc-wrapper clang -Wp,-MMD,/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/.wlan_hdd_debugfs_unit_test.o.d -nostdinc -isystem /home/aju/Android/evox/prebuilts/clang/host/linux-x86/clang-r574158/lib/clang/21/include -I../arch/arm64/include -I./arch/arm64/include/generated -I../include -I./include -I../arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I../include/uapi -I./include/generated/uapi -include ../include/linux/kconfig.h -include ../include/linux/compiler_types.h -D__KERNEL__ --target=aarch64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=../= -include /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/configs/default_config.h -DCONFIG_LITHIUM -DWLAN_HANG_EVENT -Wall -Werror -DTHERMAL_STATS_SUPPORT -DPTT_SOCK_SVC_ENABLE -DFEATURE_WLAN_WAPI -DATH_SUPPORT_WAPI -DSOFTAP_CHANNEL_RANGE -DFEATURE_WLAN_SCAN_PNO -DWLAN_FEATURE_PACKET_FILTERING -DWLAN_NS_OFFLOAD -DWLAN_FEATURE_ICMP_OFFLOAD -DFEATURE_WLAN_RA_FILTERING -DFEATURE_WLAN_LPHB -DQCA_SUPPORT_TX_THROTTLE -DWMI_INTERFACE_EVENT_LOGGING -DWLAN_FEATURE_LINK_LAYER_STATS -DFEATURE_CLUB_LL_STATS_AND_GET_STATION -DWLAN_FEATURE_MIB_STATS -DCONFIG_160MHZ_SUPPORT -DCONFIG_MCL -DCONFIG_REG_CLIENT -DWLAN_PMO_ENABLE -DCONVERGED_P2P_ENABLE -DWLAN_POLICY_MGR_ENABLE -DFEATURE_BLACKLIST_MGR -DFEATURE_WAPI_BIG_ENDIAN -DSUPPORT_11AX -DCONFIG_HDD_INIT_WITH_RTNL_LOCK -DWLAN_CONV_SPECTRAL_ENABLE -DWLAN_CFR_ENABLE -DWLAN_ENH_CFR_ENABLE -DWLAN_CFR_PM -DCFR_USE_FIXED_FOLDER -DWLAN_FEATURE_MEDIUM_ASSESS -DFEATURE_RADAR_HISTORY -DDIRECT_BUF_RX_ENABLE -DWMI_DBR_SUPPORT -DWMI_CMD_STRINGS -DWLAN_SUPPORT_TWT -DWLAN_DISABLE_EXPORT_SYMBOL -DWIFI_POS_CONVERGED -DWLAN_TWT_CONV_SUPPORTED -DFEATURE_HTC_CREDIT_HISTORY -DWLAN_FEATURE_P2P_DEBUG -DWLAN_WEXT_SUPPORT_ENABLE -DWLAN_LOGGING_SOCK_SVC_ENABLE -DWLAN_FEATURE_FILS_SK -DWLAN_SUPPORT_INFRA_CTRL_PATH_STATS -DQCA_SUPPORT_CP_STATS -DQCA_SUPPORT_MC_CP_STATS -DWLAN_SUPPORT_LEGACY_CP_STATS_HANDLERS -DWLAN_FEATURE_INTEROP_ISSUES_AP -DWLAN_FEATURE_MEMDUMP_ENABLE -DFEATURE_FW_LOG_PARSING -DFEATURE_OEM_DATA -DWLAN_FW_OFFLOAD -DWLAN_FEATURE_ELNA -DHOST_WAKEUP_OVER_QMI -DCONFIG_PLD_IPCI_ICNSS -DWLAN_FEATURE_GPIO_CFG -DFEATURE_WLAN_DP_RX_THREADS -DWLAN_FEATURE_RX_SOFTIRQ_TIME_LIMIT -DFEATURE_HAL_DELAYED_REG_WRITE -DWLAN_FEATURE_LRO_CTX_IN_CB -DFEATURE_MONITOR_MODE_SUPPORT -DWLAN_NL80211_TESTMODE -DFEATURE_RUNTIME_PM -DCONNECTIVITY_PKTLOG -DFEATURE_NAPI -DHIF_IRQ_AFFINITY -DMSM_PLATFORM -DWLAN_FEATURE_DP_BUS_BANDWIDTH -DQCA_LL_TX_FLOW_CONTROL_V2 -DQCA_LL_TX_FLOW_GLOBAL_MGMT_POOL -DWLAN_DEBUG -DTRACE_RECORD -DLIM_TRACE_RECORD -DSME_TRACE_RECORD -DHDD_TRACE_RECORD -DCONFIG_WLAN_SYSFS_FW_MODE_CFG -DCONFIG_WLAN_REASSOC -DCONFIG_WLAN_SCAN_DISABLE -DCONFIG_WLAN_WOW_ITO -DCONFIG_WLAN_WOWL_ADD_PTRN -DCONFIG_WLAN_WOWL_DEL_PTRN -DCONFIG_WLAN_SYSFS_TX_STBC -DCONFIG_WLAN_SYSFS_WLAN_DBG -DCONFIG_WLAN_TXRX_FW_ST_RST -DCONFIG_WLAN_GTX_BW_MASK -DCONFIG_WLAN_SYSFS_SCAN_CFG -DCONFIG_WLAN_SYSFS_MONITOR_MODE_CHANNEL -DCONFIG_WLAN_SYSFS_RADAR -DWLAN_SYSFS_RTS_CTS -DCONFIG_WLAN_TXRX_FW_STATS -DCONFIG_WLAN_TXRX_STATS -DWLAN_SYSFS_DP_TRACE -DWLAN_SYSFS_STATS -DCONFIG_WLAN_SYSFS_TEMPERATURE -DCONFIG_WLAN_THERMAL_CFG -DCONFIG_WLAN_SYSFS_MEM_STATS -DWLAN_SYSFS_DCM -DWLAN_SYSFS_HE_BSS_COLOR -DWLAN_SYSFS_STA_INFO -DCONFIG_WLAN_DL_MODES -DFEATURE_WPSS_THERMAL_MITIGATION -DCONFIG_WLAN_DUMP_IN_PROGRESS -DCONFIG_WLAN_BMISS -DCONFIG_WLAN_FREQ_LIST -DWIFI_MONITOR_SUPPORT -DQCA_MONITOR_PKT_SUPPORT -DCONFIG_DP_PKT_ADD_TIMESTAMP -DKERNEL_SUPPORT_11R_CFG80211 -DUSE_80211_WMMTSPEC_FOR_RIC -DFEATURE_WLAN_ESE -DFEATURE_WLAN_TDLS -DTDLS_WOW_ENABLED -DWLAN_SYSFS_TDLS_PEERS -DWLAN_FEATURE_ROAM_OFFLOAD -DWLAN_FEATURE_CONNECTIVITY_LOGGING -DWLAN_FEATURE_MBSSID -DWLAN_FEATURE_P2P_P2P_STA -DCNSS_GENL -DCNSS_UTILS -DCNSS_MEM_PRE_ALLOC -DFEATURE_ROAM_DEBUG -DWLAN_MWS_INFO_DEBUGFS -DWLAN_DEBUG_LINK_VOTE -DWLAN_FEATURE_SAE -DFEATURE_WLAN_DIAG_SUPPORT -DFEATURE_WLAN_DIAG_SUPPORT_CSR -DFEATURE_WLAN_DIAG_SUPPORT_LIM -DCONFIG_ATH_PROCFS_DIAG_SUPPORT -DFEATURE_WLAN_CH_AVOID -DWLAN_FEATURE_LPSS -DDEBUG_RX_RING_BUFFER -DPANIC_ON_BUG -DWLAN_WARN_ON_ASSERT -DWLAN_LOG_FATAL -DWLAN_LOG_ERROR -DWLAN_LOG_WARN -DWLAN_LOG_INFO -DWLAN_LOG_DEBUG -DWLAN_LOG_ENTER -DWLAN_LOG_EXIT -DWLAN_OPEN_SOURCE -DWLAN_FEATURE_STATS_EXT -DWLAN_FEATURE_NAN -DWLAN_SYSFS -DWLAN_SYSFS_CHANNEL -DWLAN_FEATURE_BEACON_RECEPTION_STATS -DWLAN_SYSFS_CONNECT_INFO -DATH_PERF_PWR_OFFLOAD -DATH_11AC_TXCOMPACT -DHIF_IPCI -DCONFIG_LL_DP_SUPPORT -DWLAN_FULL_REORDER_OFFLOAD -DWLAN_FEATURE_BIG_DATA_STATS -DWLAN_FEATURE_IGMP_OFFLOAD -DWLAN_FEATURE_GET_USABLE_CHAN_LIST -DATH_BUS_PM -DWDI_EVENT_ENABLE -DPKTLOG_HAS_SPECIFIC_DATA -DANI_LITTLE_BYTE_ENDIAN -DANI_LITTLE_BIT_ENDIAN -DDOT11F_LITTLE_ENDIAN_HOST -DQCA_WIFI_FTM -DQCA_WIFI_FTM_NL80211 -DLINUX_QCMBR -DQCA_WIFI_FTM_IOCTL -DCHECKSUM_OFFLOAD -DIPA_WDI3_GSI -DWLAN_FEATURE_WMI_DIAG_OVER_CE7 -DWLAN_DP_FEATURE_DEFERRED_REO_QDESC_DESTROY -DWLAN_OPEN_P2P_INTERFACE -DWLAN_WMI_BCN -DWLAN_FEATURE_WBUFF -DWLAN_FEATURE_GTK_OFFLOAD -DQCA_CONFIG_SMP -DQCA_CONFIG_RPS -DWLAN_ENABLE_SOCIAL_CHANNELS_5G_ONLY -DWLAN_SUPPORT_GREEN_AP -DFEATURE_WLAN_APF -DTARGET_RAMDUMP_AFTER_KERNEL_PANIC -DLINUX_QCMBR -DWLAN_FEATURE_TSF -DWLAN_FEATURE_TSF_UPLINK_DELAY -DRECEIVE_OFFLOAD -DATH_TX_PRI_OVERRIDE -DAR900B -DHTT_PADDR64 -DFEATURE_ALLOW_PKT_DROPPING -DFEATURE_TSO -DFEATURE_TSO_STATS -DFORCE_WAKE -DWLAN_FEATURE_EPPING -DWLAN_FEATURE_OFFLOAD_PACKETS -DWLAN_FEATURE_DISA -DWLAN_FEATURE_ACTION_OUI -DWLAN_FEATURE_FIPS -DFEATURE_LFR_SUBNET_DETECTION -DFEATURE_WLAN_MCC_TO_SCC_SWITCH -DCONFIG_SHADOW_V2 -DQCA6750_HEADERS_DEF -DQCA_WIFI_QCA6750 -DQCA_WIFI_QCA8074 -DSCALE_INCLUDES -DQCA_WIFI_QCA8074_VP -DDP_INTR_POLL_BASED -DTX_PER_PDEV_DESC_POOL -DCONFIG_DP_TRACE -DFEATURE_TSO -DTSO_DEBUG_LOG_ENABLE -DDP_LFR -DDUP_RX_DESC_WAR -DDP_MEM_PRE_ALLOC -DDP_TXRX_SOC_ATTACH -DHTT_PADDR64 -DRX_DESC_SANITY_WAR -DWLAN_FEATURE_DYNAMIC_RX_AGGREGATION -DRX_HASH_DEBUG -DQCA_AC_BASED_FLOW_CONTROL -DFEATURE_NO_DBS_INTRABAND_MCC_SUPPORT -DHAL_DISABLE_NON_BA_2K_JUMP_ERROR -BLE_HAL_SOC_STATS -DCONFIG_ENABLE_HAL_REG_WR_HISTORY -DDP_RX_DESC_COOKIE_INVALIDATE -DMON_ENABLE_DROP_FOR_MAC -DDISABLE_MON_RING_MSI_CFG -DFEATURE_IRQ_AFFINITY -DTX_MULTIQ_PER_AC -DPCI_LINK_STATUS_SANITY -DDP_MON_RSSI_IN_DBM -DSYSTEM_PM_CHECK -DDISABLE_EAPOL_INTRABSS_FWD -DTX_MULTI_TCL -DCLD_PM_QOS -DCLD_DEV_PM_QOS -DREO_DESC_DEFER_FREE -DWLAN_FEATURE_11AX -DWLAN_FEATURE_11AX_BSS_COLOR -DSUPPORT_11AX_D3 -DRXDMA_ERR_PKT_DROP -DMAX_ALLOC_PAGE_SIZE -DDELIVERY_TO_STACK_STATUS_CHECK -DFIX_TXDMA_LIMITATION -DFEATURE_AST -DPEER_PROTECTED_ACCESS -DSERIALIZE_QUEUE_SETUP -DDP_RX_PKT_NO_PEER_DELIVER -DDP_RX_DROP_RAW_FRM -DFEATURE_ALIGN_STATS_FROM_DP -DDP_RX_SPECIAL_FRAME_NEED -DFEATURE_STATS_EXT_V2 -DWLAN_FEATURE_CAL_FAILURE_TRIGGER -DWLAN_FEATURE_DYNAMIC_MAC_ADDR_UPDATE -DENABLE_VERBOSE_DEBUG -DRX_DESC_DEBUG_CHECK -DFEATURE_VDEV_OPS_WAKELOCK -DFEATURE_RSSI_MONITOR -DFEATURE_BSS_TRANSITION -DFEATURE_STATION_INFO -DFEATURE_TX_POWER -DFEATURE_OTA_TEST -DFEATURE_ACTIVE_TOS -DFEATURE_SAR_LIMITS -DFEATURE_CONCURRENCY_MATRIX -DFEATURE_SAP_COND_CHAN_SWITCH -DFEATURE_WLAN_CH_AVOID_EXT -DWLAN_FEATURE_MDNS_OFFLOAD -DFEATURE_P2P_LISTEN_OFFLOAD -DFEATURE_ANI_LEVEL_REQUEST -DWMI_ROAM_SUPPORT -DWMI_CONCURRENCY_SUPPORT -DWMI_STA_SUPPORT -DHIF_CE_LOG_INFO -DHIF_BUS_LOG_INFO -DDP_SUPPORT_RECOVERY_NOTIFY -DWLAN_DFS_STATIC_MEM_ALLOC -DMOBILE_DFS_SUPPORT -DWLAN_DFS_FULL_OFFLOAD -DDFS_COMPONENT_ENABLE -DQCA_DFS_USE_POLICY_MANAGER -DQCA_DFS_NOL_PLATFORM_DRV_SUPPORT -DWLAN_DEBUGFS -DENABLE_MTRACE_LOG -DWLAN_ADAPTIVE_11R -DWLAN_SAE_SINGLE_PMK -DMULTI_CLIENT_LL_SUPPORT -DWLAN_FEATURE_MSCS -DWLAN_NUD_TRACKING -DDISABLE_CHANNEL_LIST -DWLAN_BCN_RECV_FEATURE -DFW_THERMAL_THROTTLE -DLTE_COEX -DHOST_OPCLASS -DHOST_OPCLASS_EXT -DTARGET_11D_SCAN -DSAP_AVOID_ACS_FREQ_LIST -DFEATURE_WLAN_DYNAMIC_CVM -DFEATURE_FW_STATE -DRX_DESC_MULTI_PAGE_ALLOC -DSAR_SAFETY_FEATURE -DWLAN_FEATURE_DP_EVENT_HISTORY -DWLAN_DP_PER_RING_TYPE_CONFIG -DWLAN_CE_INTERRUPT_THRESHOLD_CONFIG -DSAP_DHCP_FW_IND -DWLAN_DP_PENDING_MEM_FLUSH -DWLAN_SUPPORT_DATA_STALL -DWLAN_DP_FEATURE_MARK_ICMP_REQ_TO_FW -DWLAN_SKIP_BAR_UPDATE -DWLAN_TRACEPOINTS -DHANDLE_RX_REROUTE_ERR -DCONFIG_BAND_6GHZ -DFEATURE_6G_SCAN_CHAN_SORT_ALGO -DWLAN_SUPPORT_RX_FISA -DWLAN_DP_FEATURE_SW_LATENCY_MGR -DRX_DEFRAG_DO_NOT_REINJECT -DHANDLE_BROADCAST_EAPOL_TX_FRAME -DTX_TO_NPEERS_INC_TX_DESCS -DHIF_CONFIG_SLUB_DEBUG_ON -DWLAN_CUSTOM_DSCP_UP_MAP -DIPA_SET_RESET_TX_DB_PA -DWLAN_FEATURE_RX_PREALLOC_BUFFER_POOL -DDP_TX_TRACKING -DHW_TX_DELAY_STATS_ENABLE -DWLAN_FEATURE_COAP -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret+leaf+bti -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-format-invalid-specifier -Wno-gnu -mno-global-merge -Wno-default-const-init-unsafe -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fsanitize=shadow-call-stack -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -fno-builtin-wcslen -Wno-initializer-overrides -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -Wno-cast-function-type-strict -Wno-enum-compare-conditional -Wno-error -Wno-error=strict-prototypes -Wno-strict-prototypes -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/motorola/include -DPOWER_SUPPLY_TYPE_USB_HVDCP_3=21 -DPOWER_SUPPLY_TYPE_USB_HVDCP_3P5=22 -DPOWER_SUPPLY_TYPE_USB_FLOAT=23 -DPOWER_SUPPLY_TYPE_USB_HVDCP=20 -DPSY_IIO_MMI_OTG_ENABLE=116 -DPSY_IIO_USB_CHARGING_ENABLED=117 -DPSY_IIO_INPUT_CURRENT_SETTLED=118 -DPSY_IIO_USB_TERMINATION_ENABLED=119 -DPSY_IIO_MMI_QC3P_POWER=120 -DPSY_IIO_MMI_PD_VDM_VERIFY=121 -DPSY_IIO_MMI_CP_INPUT_CURRENT_NOW=122 -DPSY_IIO_MMI_CP_INPUT_VOLTAGE_NOW=123 -DPSY_IIO_CP_CLEAR_ERROR=124 -DPSY_IIO_MMI_CP_CHIP_ID=125 -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1488 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/sync/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/sync/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/test -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/epping/inc -Iinclude -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/dph -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/lim -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/nan -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sap/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/src/csr -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/common/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/legacy/src/platform/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/legacy/src/system/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/legacy/src/utils/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/wmi/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qal/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qal/linux/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/test -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wbuff/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/cfg/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/cfg/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cfg -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dfs/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dfs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/dfs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/init_deinit/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/crypto/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/regulatory/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/mlme/vdev_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/mlme/psoc/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/pmo/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/pmo/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/disa/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/blacklist_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/action_oui/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/scan/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/spectral/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/crypto/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/mlme/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/gpio/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/global_lmac_if/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/global_lmac_if/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/ftm/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/ftm/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/ftm/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/ftm/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/uapi/linux -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/common -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/fwlog -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/ol/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/pktlog/include -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/htt -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/init_deinit/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/scheduler/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/regulatory/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/regulatory/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/htc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dfs/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dfs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/dfs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wlan_cfg -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx3.0 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hif/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hif/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hif/src/dispatcher -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hif/src/ipcie -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hif/src/ce -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/bmi/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/sys -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hal/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hal/wifi3.0 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hal/wifi3.0/li -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/hal/wifi3.0/qca6750 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/wifi3.0 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dp/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/wifi3.0/monitor -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/wifi3.0/monitor/1.0 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/wifi_pos/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/wifi_pos/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/wifi_pos/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/cp_stats/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/cp_stats/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cp_stats/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cp_stats/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cp_stats/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/cp_stats/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/twt/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/twt/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/twt/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/twt/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/twt/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/twt/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/twt/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/twt/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dcs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dcs/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/interop_issues_ap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/interop_issues_ap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/interop_issues_ap/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/interop_issues_ap/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/nan/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/nan/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/nan/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/nan/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/son/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/son/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/global_umac_dispatcher/lmac_if/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/mgmt_txrx/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/p2p/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/p2p/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/p2p/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/policy_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/policy_mgr/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//hw/qca6750/v1 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/tdls/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/tdls/core/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/tdls/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/tdls/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/serialization/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/nlink/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/ptt/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/logging/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/pld/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/pld/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ocb/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ocb/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ipa/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ipa/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/sm_engine/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/mlme_objmgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/vdev_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/pdev_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/psoc_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/utf/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/utf/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/connection_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/wfa_config/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/wfa_config/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/fw_offload/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/fw_offload/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/fw_offload/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/fw_offload/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/thermal/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/blacklist_mgr/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/blacklist_mgr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/logging/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/pktlog/include -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/host_diag_log/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/host_diag_log/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/disa/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/disa/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/action_oui/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/action_oui/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pkt_capture/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pkt_capture/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/pkt_capture//inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/pkt_capture/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ftm_time_sync/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/ftm_time_sync/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/global_umac_dispatcher/lmac_if/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/scan/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/green_ap/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/green_ap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/cmn_defs/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/utils/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/spectral/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/spectral/core -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/direct_buf_rx/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cfr/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cfr/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/cfr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/spectral -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/gpio/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/gpio/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/-I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/gpio -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/gpio -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/direct_buf_tx/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/crypto/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/crypto/src -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/interface_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/interface_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlo_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/mlo_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/mlo_mgr/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/coex/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/coex/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/coex/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/coex/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/coap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/target_if/coap/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/coap/dispatcher/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/coap/core/inc -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/wmi/inc -DWLAN_POWER_MANAGEMENT_OFFLOAD -DCE_SVC_CMN_INIT -DDP_LEGACY_MODE_CSM_DEFAULT_DISABLE=1 -DWLAN_MAX_PSOCS=1 -DWLAN_MAX_PDEVS=1 -DWLAN_MAX_ML_VDEVS=0 -DWLAN_MAX_VDEVS=6 -DWLAN_SER_MAX_PENDING_CMDS_AP=32+3 -DWLAN_SER_MAX_PENDING_CMDS_STA=4 -DWLAN_SER_MAX_PENDING_CMDS=32*3+4*2 -DWLAN_PDEV_MAX_VDEVS=6 -DWLAN_PSOC_MAX_VDEVS=6 -DMAX_SCAN_CACHE_SIZE=500 -DSCAN_MAX_REST_TIME=0 -DSCAN_MIN_REST_TIME=0 -DSCAN_BURST_DURATION=0 -DSCAN_PROBE_SPACING_TIME=0 -DSCAN_PROBE_DELAY=0 -DSCAN_MAX_SCAN_TIME=30000 -DSCAN_NETWORK_IDLE_TIMEOUT=0 -DHIDDEN_SSID_TIME=0xFFFFFFFF -DSCAN_CHAN_STATS_EVENT_ENAB=false -DMAX_BCN_PROBE_IN_SCAN_QUEUE=150 -DRX_DIAG_WQ_MAX_SIZE=1000 -DMGMT_DESC_POOL_MAX=64 -DFW_THERMAL_THROTTLE_SUPPORT -DHASTINGS_BT_WAR -DFEATURE_FOURTH_CONNECTION -DWLAN_FEATURE_WMI_SEND_RECV_QMI -DDP_RX_BUFFER_POOL_SIZE=128 -DDP_RX_BUFFER_POOL_ALLOC_THRES=5 -Wmissing-prototypes -Wheader-guard -DMULTI_IF_NAME=\"qca_cld3_qca6750\" -DWLAN_HOST_ARCH_ARM=1  -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-undefined-trap-on-error  -DMODULE  -DKBUILD_BASENAME='"wlan_hdd_debugfs_unit_test"' -DKBUILD_MODNAME='"hdd"' -D__KBUILD_MODNAME=kmod_hdd -c -o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.c

source_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o := /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.c

deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o := \
  ../include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  ../include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  ../include/linux/compiler_attributes.h \
  ../include/linux/compiler-clang.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
    $(wildcard include/config/clang/version.h) \
  ../arch/arm64/include/asm/compiler.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/configs/default_config.h \
    $(wildcard include/config/chan/freq/api.h) \
    $(wildcard include/config/chan/num/api.h) \
    $(wildcard include/config/fw/logs/based/on/ini.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_main.h \
    $(wildcard include/config/has/wakelock.h) \
    $(wildcard include/config/hl/support.h) \
    $(wildcard include/config/band/6ghz.h) \
    $(wildcard include/config/wlan/freq/list.h) \
    $(wildcard include/config/cnss/logger.h) \
    $(wildcard include/config/dp/trace.h) \
    $(wildcard include/config/wlan/debug/crash/inject.h) \
  ../include/linux/netdevice.h \
    $(wildcard include/config/dcb.h) \
    $(wildcard include/config/hyperv/net.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/ax25.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/net/ipgre.h) \
    $(wildcard include/config/ipv6/sit.h) \
    $(wildcard include/config/ipv6/tunnel.h) \
    $(wildcard include/config/rps.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/xps.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/xdp/sockets.h) \
    $(wildcard include/config/bql.h) \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/rfs/accel.h) \
    $(wildcard include/config/fcoe.h) \
    $(wildcard include/config/xfrm/offload.h) \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/libfcoe.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/net/l3/master/dev.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/tls/device.h) \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/net/dsa.h) \
    $(wildcard include/config/tipc.h) \
    $(wildcard include/config/irda.h) \
    $(wildcard include/config/atalk.h) \
    $(wildcard include/config/mpls/routing.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/netfilter/ingress.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/garp.h) \
    $(wildcard include/config/mrp.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/macsec.h) \
    $(wildcard include/config/net/flow/limit.h) \
    $(wildcard include/config/ethtool/netlink.h) \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/dynamic/debug/core.h) \
  ../include/linux/timer.h \
    $(wildcard include/config/debug/objects/timers.h) \
    $(wildcard include/config/no/hz/common.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  ../include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  ../include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  ../include/uapi/linux/types.h \
  arch/arm64/include/generated/uapi/asm/types.h \
  ../include/uapi/asm-generic/types.h \
  ../include/asm-generic/int-ll64.h \
  ../include/uapi/asm-generic/int-ll64.h \
  ../arch/arm64/include/uapi/asm/bitsperlong.h \
  ../include/asm-generic/bitsperlong.h \
  ../include/uapi/asm-generic/bitsperlong.h \
  ../include/uapi/linux/posix_types.h \
  ../include/linux/stddef.h \
  ../include/uapi/linux/stddef.h \
  ../arch/arm64/include/uapi/asm/posix_types.h \
  ../include/uapi/asm-generic/posix_types.h \
  ../include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  ../include/linux/const.h \
  ../include/vdso/const.h \
  ../include/uapi/linux/const.h \
  ../include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/preempt/rt.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  ../include/linux/limits.h \
  ../include/uapi/linux/limits.h \
  ../include/vdso/limits.h \
  ../include/linux/linkage.h \
    $(wildcard include/config/arch/use/sym/annotations.h) \
  ../include/linux/stringify.h \
  ../include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/cfi/clang.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  ../include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
  ../arch/arm64/include/asm/rwonce.h \
    $(wildcard include/config/lto.h) \
    $(wildcard include/config/as/has/ldapr.h) \
  ../include/asm-generic/rwonce.h \
  ../include/linux/kasan-checks.h \
    $(wildcard include/config/kasan/generic.h) \
    $(wildcard include/config/kasan/sw/tags.h) \
  ../include/linux/kcsan-checks.h \
    $(wildcard include/config/kcsan.h) \
    $(wildcard include/config/kcsan/ignore/atomics.h) \
  ../arch/arm64/include/asm/linkage.h \
    $(wildcard include/config/arm64/bti/kernel.h) \
  ../include/linux/bitops.h \
  ../include/linux/bits.h \
  ../include/vdso/bits.h \
  ../include/linux/build_bug.h \
  ../arch/arm64/include/asm/bitops.h \
  ../include/asm-generic/bitops/builtin-__ffs.h \
  ../include/asm-generic/bitops/builtin-ffs.h \
  ../include/asm-generic/bitops/builtin-__fls.h \
  ../include/asm-generic/bitops/builtin-fls.h \
  ../include/asm-generic/bitops/ffz.h \
  ../include/asm-generic/bitops/fls64.h \
  ../include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  ../include/asm-generic/bitops/sched.h \
  ../include/asm-generic/bitops/hweight.h \
  ../include/asm-generic/bitops/arch_hweight.h \
  ../include/asm-generic/bitops/const_hweight.h \
  ../include/asm-generic/bitops/atomic.h \
  ../include/linux/atomic.h \
  ../arch/arm64/include/asm/atomic.h \
  ../arch/arm64/include/asm/barrier.h \
    $(wildcard include/config/arm64/pseudo/nmi.h) \
  ../include/asm-generic/barrier.h \
  ../arch/arm64/include/asm/cmpxchg.h \
  ../arch/arm64/include/asm/lse.h \
    $(wildcard include/config/arm64/lse/atomics.h) \
  ../arch/arm64/include/asm/atomic_ll_sc.h \
    $(wildcard include/config/cc/has/k/constraint.h) \
  ../include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
    $(wildcard include/config/have/arch/jump/label/relative.h) \
  ../arch/arm64/include/asm/jump_label.h \
  ../arch/arm64/include/asm/insn.h \
  ../arch/arm64/include/asm/brk-imm.h \
  ../arch/arm64/include/asm/alternative.h \
  ../arch/arm64/include/asm/alternative-macros.h \
  ../arch/arm64/include/asm/cpucaps.h \
  ../include/linux/init.h \
    $(wildcard include/config/strict/kernel/rwx.h) \
    $(wildcard include/config/strict/module/rwx.h) \
    $(wildcard include/config/lto/clang.h) \
  ../arch/arm64/include/asm/atomic_lse.h \
  ../include/linux/atomic-arch-fallback.h \
    $(wildcard include/config/generic/atomic64.h) \
  ../include/asm-generic/atomic-instrumented.h \
  ../include/linux/instrumented.h \
  ../include/asm-generic/atomic-long.h \
  ../include/asm-generic/bitops/lock.h \
  ../include/asm-generic/bitops/non-atomic.h \
  ../include/asm-generic/bitops/le.h \
  ../arch/arm64/include/uapi/asm/byteorder.h \
  ../include/linux/byteorder/little_endian.h \
  ../include/uapi/linux/byteorder/little_endian.h \
  ../include/linux/swab.h \
  ../include/uapi/linux/swab.h \
  arch/arm64/include/generated/uapi/asm/swab.h \
  ../include/uapi/asm-generic/swab.h \
  ../include/linux/byteorder/generic.h \
  ../include/asm-generic/bitops/ext2-atomic-setbit.h \
  ../include/linux/kstrtox.h \
  ../include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  ../include/linux/minmax.h \
  ../include/linux/typecheck.h \
  ../include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/quiet.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk/nmi.h) \
    $(wildcard include/config/printk.h) \
  ../include/linux/kern_levels.h \
  ../include/linux/ratelimit_types.h \
  ../include/uapi/linux/param.h \
  ../arch/arm64/include/uapi/asm/param.h \
  ../include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  ../include/uapi/asm-generic/param.h \
  ../include/linux/spinlock_types.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  ../arch/arm64/include/asm/spinlock_types.h \
  ../include/asm-generic/qspinlock_types.h \
    $(wildcard include/config/nr/cpus.h) \
  ../include/asm-generic/qrwlock_types.h \
  ../include/linux/lockdep_types.h \
    $(wildcard include/config/prove/raw/lock/nesting.h) \
    $(wildcard include/config/preempt/lock.h) \
    $(wildcard include/config/lock/stat.h) \
  ../include/linux/rwlock_types.h \
  arch/arm64/include/generated/asm/div64.h \
  ../include/asm-generic/div64.h \
  ../include/uapi/linux/kernel.h \
  ../include/uapi/linux/sysinfo.h \
  ../include/linux/ktime.h \
  ../include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
    $(wildcard include/config/posix/timers.h) \
  ../include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  ../arch/arm64/include/asm/cache.h \
    $(wildcard include/config/kasan/hw/tags.h) \
  ../arch/arm64/include/asm/cputype.h \
  ../arch/arm64/include/asm/sysreg.h \
    $(wildcard include/config/broken/gas/inst.h) \
    $(wildcard include/config/arm64/pa/bits/52.h) \
    $(wildcard include/config/arm64/4k/pages.h) \
    $(wildcard include/config/arm64/16k/pages.h) \
    $(wildcard include/config/arm64/64k/pages.h) \
  ../include/linux/kasan-tags.h \
  ../arch/arm64/include/asm/mte-def.h \
  ../include/linux/kasan-enabled.h \
    $(wildcard include/config/kasan.h) \
  ../include/linux/static_key.h \
  ../include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  ../include/vdso/math64.h \
  ../include/linux/time64.h \
  ../include/vdso/time64.h \
  ../include/uapi/linux/time.h \
  ../include/uapi/linux/time_types.h \
  ../include/linux/time32.h \
  ../include/linux/timex.h \
  ../include/uapi/linux/timex.h \
  ../arch/arm64/include/asm/timex.h \
  ../arch/arm64/include/asm/arch_timer.h \
    $(wildcard include/config/arm/arch/timer/ool/workaround.h) \
    $(wildcard include/config/compat.h) \
  ../arch/arm64/include/asm/hwcap.h \
  ../arch/arm64/include/uapi/asm/hwcap.h \
  ../arch/arm64/include/asm/cpufeature.h \
    $(wildcard include/config/arm64/sw/ttbr0/pan.h) \
    $(wildcard include/config/arm64/sve.h) \
    $(wildcard include/config/arm64/cnp.h) \
    $(wildcard include/config/arm64/ptr/auth.h) \
    $(wildcard include/config/arm64/mte.h) \
    $(wildcard include/config/arm64/debug/priority/masking.h) \
    $(wildcard include/config/arm64/bti.h) \
    $(wildcard include/config/arm64/tlb/range.h) \
    $(wildcard include/config/arm64/pa/bits.h) \
    $(wildcard include/config/arm64/hw/afdbm.h) \
    $(wildcard include/config/arm64/amu/extn.h) \
  ../include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/bug/on/data/corruption.h) \
  ../arch/arm64/include/asm/bug.h \
  ../arch/arm64/include/asm/asm-bug.h \
    $(wildcard include/config/debug/bugverbose.h) \
  ../include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  ../include/linux/instrumentation.h \
    $(wildcard include/config/debug/entry.h) \
  ../include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
    $(wildcard include/config/debug/preempt.h) \
  ../include/linux/errno.h \
  ../include/uapi/linux/errno.h \
  arch/arm64/include/generated/uapi/asm/errno.h \
  ../include/uapi/asm-generic/errno.h \
  ../include/uapi/asm-generic/errno-base.h \
  ../include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
  ../include/linux/threads.h \
    $(wildcard include/config/base/small.h) \
  ../include/linux/bitmap.h \
  ../include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
  ../include/uapi/linux/string.h \
  ../arch/arm64/include/asm/string.h \
    $(wildcard include/config/arch/has/uaccess/flushcache.h) \
  ../include/linux/smp_types.h \
  ../include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  ../include/linux/preempt.h \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/trace/preempt/toggle.h) \
    $(wildcard include/config/preemption.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  ../include/linux/cleanup.h \
  ../arch/arm64/include/asm/preempt.h \
  ../include/linux/thread_info.h \
    $(wildcard include/config/thread/info/in/task.h) \
    $(wildcard include/config/have/arch/within/stack/frames.h) \
    $(wildcard include/config/hardened/usercopy.h) \
  ../include/linux/restart_block.h \
  ../arch/arm64/include/asm/current.h \
  ../arch/arm64/include/asm/thread_info.h \
    $(wildcard include/config/shadow/call/stack.h) \
  ../arch/arm64/include/asm/memory.h \
    $(wildcard include/config/arm64/va/bits.h) \
    $(wildcard include/config/kasan/shadow/offset.h) \
    $(wildcard include/config/vmap/stack.h) \
    $(wildcard include/config/debug/virtual.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/efi.h) \
    $(wildcard include/config/arm/gic/v3/its.h) \
  ../include/linux/sizes.h \
  ../arch/arm64/include/asm/page-def.h \
    $(wildcard include/config/arm64/page/shift.h) \
  ../include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/vm/pgflags.h) \
  ../include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
  ../include/linux/pfn.h \
  ../arch/arm64/include/asm/stack_pointer.h \
  ../arch/arm64/include/asm/smp.h \
    $(wildcard include/config/arm64/acpi/parking/protocol.h) \
  ../arch/arm64/include/asm/percpu.h \
  ../include/asm-generic/percpu.h \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  ../include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
    $(wildcard include/config/amd/mem/encrypt.h) \
  ../include/clocksource/arm_arch_timer.h \
    $(wildcard include/config/arm/arch/timer.h) \
  ../include/linux/timecounter.h \
  ../include/asm-generic/timex.h \
  ../include/vdso/time32.h \
  ../include/vdso/time.h \
  ../include/linux/jiffies.h \
  ../include/vdso/jiffies.h \
  include/generated/timeconst.h \
  ../include/vdso/ktime.h \
  ../include/linux/timekeeping.h \
  ../include/linux/timekeeping32.h \
  ../include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  ../include/linux/spinlock.h \
  ../include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  ../arch/arm64/include/asm/irqflags.h \
  ../arch/arm64/include/asm/ptrace.h \
  ../arch/arm64/include/uapi/asm/ptrace.h \
  ../arch/arm64/include/uapi/asm/sve_context.h \
  ../include/linux/bottom_half.h \
  ../include/linux/lockdep.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  arch/arm64/include/generated/asm/mmiowb.h \
  ../include/asm-generic/mmiowb.h \
    $(wildcard include/config/mmiowb.h) \
  ../arch/arm64/include/asm/spinlock.h \
  arch/arm64/include/generated/asm/qrwlock.h \
  ../include/asm-generic/qrwlock.h \
  ../arch/arm64/include/asm/processor.h \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/arm64/force/52bit.h) \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm64/tagged/addr/abi.h) \
    $(wildcard include/config/gcc/plugin/stackleak.h) \
  ../include/linux/android_vendor.h \
    $(wildcard include/config/android/vendor/oem/data.h) \
  ../include/vdso/processor.h \
  ../arch/arm64/include/asm/vdso/processor.h \
  ../arch/arm64/include/asm/hw_breakpoint.h \
  ../arch/arm64/include/asm/virt.h \
    $(wildcard include/config/kvm.h) \
  ../arch/arm64/include/asm/sections.h \
  ../include/asm-generic/sections.h \
  ../arch/arm64/include/asm/kasan.h \
  ../arch/arm64/include/asm/mte-kasan.h \
  ../arch/arm64/include/asm/pgtable-types.h \
    $(wildcard include/config/pgtable/levels.h) \
  ../include/asm-generic/pgtable-nopud.h \
  ../include/asm-generic/pgtable-nop4d.h \
  ../arch/arm64/include/asm/pgtable-hwdef.h \
    $(wildcard include/config/arm64/cont/pte/shift.h) \
    $(wildcard include/config/arm64/cont/pmd/shift.h) \
    $(wildcard include/config/arm64/va/bits/52.h) \
  ../arch/arm64/include/asm/pointer_auth.h \
  ../include/uapi/linux/prctl.h \
  ../include/linux/random.h \
    $(wildcard include/config/arch/random.h) \
  ../include/linux/once.h \
  ../include/uapi/linux/random.h \
  ../include/uapi/linux/ioctl.h \
  arch/arm64/include/generated/uapi/asm/ioctl.h \
  ../include/asm-generic/ioctl.h \
  ../include/uapi/asm-generic/ioctl.h \
  ../include/linux/irqnr.h \
  ../include/uapi/linux/irqnr.h \
  ../include/linux/prandom.h \
  ../include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
  ../include/linux/siphash.h \
    $(wildcard include/config/have/efficient/unaligned/access.h) \
  ../arch/arm64/include/asm/archrandom.h \
  ../arch/arm64/include/asm/spectre.h \
  ../arch/arm64/include/asm/fpsimd.h \
  ../arch/arm64/include/uapi/asm/sigcontext.h \
  arch/arm64/include/generated/asm/qspinlock.h \
  ../include/asm-generic/qspinlock.h \
  ../include/linux/rwlock.h \
    $(wildcard include/config/preempt.h) \
  ../include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
    $(wildcard include/config/generic/lockbreak.h) \
  ../include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  ../include/linux/android_kabi.h \
    $(wildcard include/config/android/kabi/reserve.h) \
  ../include/linux/delay.h \
  ../include/linux/sched.h \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/sched/info.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/uclamp/task.h) \
    $(wildcard include/config/uclamp/buckets/count.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/tasks/rcu.h) \
    $(wildcard include/config/tasks/trace/rcu.h) \
    $(wildcard include/config/psi.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/stackprotector.h) \
    $(wildcard include/config/arch/has/scaled/cputime.h) \
    $(wildcard include/config/cpu/freq/times.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/posix/cputimers.h) \
    $(wildcard include/config/posix/cpu/timers/task/work.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/io/uring.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/ubsan.h) \
    $(wildcard include/config/ubsan/trap.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/x86/cpu/resctrl.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/rseq.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/kunit.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/kcov.h) \
    $(wildcard include/config/uprobes.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/livepatch.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/x86/mce.h) \
    $(wildcard include/config/rt/softint/optimization.h) \
    $(wildcard include/config/arch/task/struct/on/stack.h) \
    $(wildcard include/config/debug/rseq.h) \
  ../include/uapi/linux/sched.h \
  ../include/linux/pid.h \
  ../include/linux/rculist.h \
    $(wildcard include/config/prove/rcu/list.h) \
  ../include/linux/rcupdate.h \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/tasks/rcu/generic.h) \
    $(wildcard include/config/rcu/stall/common.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
    $(wildcard include/config/tasks/rude/rcu.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/prove/rcu.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/arch/weak/release/acquire.h) \
  ../include/linux/rcutree.h \
  ../include/linux/wait.h \
  ../include/uapi/linux/wait.h \
  ../include/linux/refcount.h \
  ../include/linux/sem.h \
  ../include/uapi/linux/sem.h \
  ../include/linux/ipc.h \
  ../include/linux/uidgid.h \
    $(wildcard include/config/multiuser.h) \
    $(wildcard include/config/user/ns.h) \
  ../include/linux/highuid.h \
  ../include/linux/rhashtable-types.h \
  ../include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
  ../include/linux/osq_lock.h \
  ../include/linux/debug_locks.h \
  ../include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/wq/watchdog.h) \
  ../include/uapi/linux/ipc.h \
  arch/arm64/include/generated/uapi/asm/ipcbuf.h \
  ../include/uapi/asm-generic/ipcbuf.h \
  arch/arm64/include/generated/uapi/asm/sembuf.h \
  ../include/uapi/asm-generic/sembuf.h \
  ../include/linux/shm.h \
  ../arch/arm64/include/asm/page.h \
  ../include/linux/personality.h \
  ../include/uapi/linux/personality.h \
  ../include/asm-generic/getorder.h \
  ../include/uapi/linux/shm.h \
  ../include/uapi/asm-generic/hugetlb_encode.h \
  arch/arm64/include/generated/uapi/asm/shmbuf.h \
  ../include/uapi/asm-generic/shmbuf.h \
  ../arch/arm64/include/asm/shmparam.h \
  ../include/asm-generic/shmparam.h \
  ../include/linux/plist.h \
    $(wildcard include/config/debug/plist.h) \
  ../include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/time/low/res.h) \
    $(wildcard include/config/timerfd.h) \
  ../include/linux/hrtimer_defs.h \
  ../include/linux/rbtree.h \
  ../include/linux/seqlock.h \
  ../include/linux/ww_mutex.h \
    $(wildcard include/config/debug/ww/mutex/slowpath.h) \
  ../include/linux/timerqueue.h \
  ../include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/have/arch/seccomp/filter.h) \
    $(wildcard include/config/seccomp/filter.h) \
    $(wildcard include/config/checkpoint/restore.h) \
  ../include/uapi/linux/seccomp.h \
  ../arch/arm64/include/asm/seccomp.h \
  ../arch/arm64/include/asm/unistd.h \
  ../arch/arm64/include/uapi/asm/unistd.h \
  ../include/uapi/asm-generic/unistd.h \
  ../include/asm-generic/seccomp.h \
  ../include/uapi/linux/unistd.h \
  ../include/linux/nodemask.h \
    $(wildcard include/config/highmem.h) \
  ../include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
    $(wildcard include/config/numa/keep/meminfo.h) \
  ../include/linux/resource.h \
  ../include/uapi/linux/resource.h \
  arch/arm64/include/generated/uapi/asm/resource.h \
  ../include/asm-generic/resource.h \
  ../include/uapi/asm-generic/resource.h \
  ../include/linux/latencytop.h \
  ../include/linux/sched/prio.h \
  ../include/linux/sched/types.h \
  ../include/linux/signal_types.h \
    $(wildcard include/config/old/sigaction.h) \
  ../include/uapi/linux/signal.h \
  ../arch/arm64/include/asm/signal.h \
  ../arch/arm64/include/uapi/asm/signal.h \
  ../include/asm-generic/signal.h \
  ../include/uapi/asm-generic/signal.h \
  ../include/uapi/asm-generic/signal-defs.h \
  arch/arm64/include/generated/uapi/asm/siginfo.h \
  ../include/uapi/asm-generic/siginfo.h \
  ../include/linux/mm_types_task.h \
    $(wildcard include/config/arch/want/batched/unmap/tlb/flush.h) \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
  ../include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  ../include/linux/posix-timers.h \
  ../include/linux/alarmtimer.h \
    $(wildcard include/config/rtc/class.h) \
  ../include/linux/task_work.h \
  ../include/uapi/linux/rseq.h \
  ../include/linux/kcsan.h \
  arch/arm64/include/generated/asm/delay.h \
  ../include/asm-generic/delay.h \
  ../include/linux/prefetch.h \
  ../include/linux/dynamic_queue_limits.h \
  ../include/linux/ethtool.h \
  ../include/linux/compat.h \
    $(wildcard include/config/arch/has/syscall/wrapper.h) \
    $(wildcard include/config/x86/x32/abi.h) \
    $(wildcard include/config/compat/old/sigaction.h) \
    $(wildcard include/config/odd/rt/sigaction.h) \
  ../include/linux/stat.h \
  ../arch/arm64/include/asm/stat.h \
  arch/arm64/include/generated/uapi/asm/stat.h \
  ../include/uapi/asm-generic/stat.h \
  ../arch/arm64/include/asm/compat.h \
  ../include/asm-generic/compat.h \
    $(wildcard include/config/compat/for/u64/alignment.h) \
  ../include/linux/sched/task_stack.h \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  ../include/uapi/linux/magic.h \
  ../include/uapi/linux/stat.h \
  ../include/linux/socket.h \
  arch/arm64/include/generated/uapi/asm/socket.h \
  ../include/uapi/asm-generic/socket.h \
  arch/arm64/include/generated/uapi/asm/sockios.h \
  ../include/uapi/asm-generic/sockios.h \
  ../include/uapi/linux/sockios.h \
  ../include/linux/uio.h \
    $(wildcard include/config/arch/has/copy/mc.h) \
  ../include/uapi/linux/uio.h \
  ../include/uapi/linux/socket.h \
  ../include/uapi/linux/if.h \
  ../include/uapi/linux/libc-compat.h \
  ../include/uapi/linux/hdlc/ioctl.h \
  ../include/linux/fs.h \
    $(wildcard include/config/read/only/thp/for/fs.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/cgroup/writeback.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/fs/encryption.h) \
    $(wildcard include/config/fs/verity.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/unicode.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/mandatory/file/locking.h) \
    $(wildcard include/config/migration.h) \
  ../include/linux/wait_bit.h \
  ../include/linux/kdev_t.h \
  ../include/uapi/linux/kdev_t.h \
  ../include/linux/dcache.h \
  ../include/linux/rculist_bl.h \
  ../include/linux/list_bl.h \
  ../include/linux/bit_spinlock.h \
  ../include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  include/generated/bounds.h \
  ../include/linux/stringhash.h \
    $(wildcard include/config/dcache/word/access.h) \
  ../include/linux/hash.h \
    $(wildcard include/config/have/arch/hash.h) \
  ../include/linux/path.h \
  ../include/linux/list_lru.h \
    $(wildcard include/config/memcg/kmem.h) \
  ../include/linux/shrinker.h \
  ../include/linux/radix-tree.h \
  ../include/linux/xarray.h \
    $(wildcard include/config/xarray/multi.h) \
  ../include/linux/gfp.h \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/zone/device.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/contig/alloc.h) \
  ../include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/deferred/struct/page/init.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/holes/in/zone.h) \
  ../include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  ../include/linux/page-flags-layout.h \
  ../arch/arm64/include/asm/sparsemem.h \
  ../include/linux/mm_types.h \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/userfaultfd.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/speculative/page/fault.h) \
    $(wildcard include/config/have/arch/compat/mmap/bases.h) \
    $(wildcard include/config/membarrier.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/iommu/support.h) \
  ../include/linux/auxvec.h \
  ../include/uapi/linux/auxvec.h \
  ../arch/arm64/include/uapi/asm/auxvec.h \
  ../include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/debug/rwsems.h) \
  ../include/linux/err.h \
  ../include/linux/completion.h \
  ../include/linux/swait.h \
  ../include/linux/uprobes.h \
  ../arch/arm64/include/asm/uprobes.h \
  ../arch/arm64/include/asm/debug-monitors.h \
  ../arch/arm64/include/asm/esr.h \
  ../arch/arm64/include/asm/probes.h \
    $(wildcard include/config/kprobes.h) \
  ../arch/arm64/include/asm/mmu.h \
  ../include/linux/page-flags.h \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/page/idle/flag.h) \
    $(wildcard include/config/thp/swap.h) \
    $(wildcard include/config/ksm.h) \
  ../include/linux/memory_hotplug.h \
    $(wildcard include/config/arch/has/add/pages.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  ../include/linux/notifier.h \
    $(wildcard include/config/tree/srcu.h) \
  ../include/linux/srcu.h \
    $(wildcard include/config/tiny/srcu.h) \
    $(wildcard include/config/srcu.h) \
  ../include/linux/rcu_segcblist.h \
  ../include/linux/srcutree.h \
  ../include/linux/rcu_node_tree.h \
    $(wildcard include/config/rcu/fanout.h) \
    $(wildcard include/config/rcu/fanout/leaf.h) \
  ../include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/sched/smt.h) \
  ../include/linux/arch_topology.h \
    $(wildcard include/config/generic/arch/topology.h) \
  ../arch/arm64/include/asm/topology.h \
  ../include/asm-generic/topology.h \
  ../include/linux/sched/mm.h \
    $(wildcard include/config/arch/has/membarrier/callbacks.h) \
  ../include/linux/sync_core.h \
    $(wildcard include/config/arch/has/sync/core/before/usermode.h) \
  ../include/linux/local_lock.h \
  ../include/linux/local_lock_internal.h \
  ../include/linux/capability.h \
  ../include/uapi/linux/capability.h \
  ../include/linux/semaphore.h \
  ../include/linux/fcntl.h \
    $(wildcard include/config/arch/32bit/off/t.h) \
  ../include/uapi/linux/fcntl.h \
  ../arch/arm64/include/uapi/asm/fcntl.h \
  ../include/uapi/asm-generic/fcntl.h \
  ../include/uapi/linux/openat2.h \
  ../include/linux/migrate_mode.h \
  ../include/linux/percpu-rwsem.h \
  ../include/linux/rcuwait.h \
  ../include/linux/sched/signal.h \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
  ../include/linux/signal.h \
  ../include/linux/sched/jobctl.h \
  ../include/linux/sched/task.h \
    $(wildcard include/config/have/exit/thread.h) \
    $(wildcard include/config/arch/wants/dynamic/task/struct.h) \
    $(wildcard include/config/have/arch/thread/struct/whitelist.h) \
  ../include/linux/uaccess.h \
    $(wildcard include/config/set/fs.h) \
  ../include/linux/fault-inject-usercopy.h \
    $(wildcard include/config/fault/injection/usercopy.h) \
  ../arch/arm64/include/asm/uaccess.h \
    $(wildcard include/config/arm64/uao.h) \
    $(wildcard include/config/arm64/pan.h) \
  ../arch/arm64/include/asm/kernel-pgtable.h \
    $(wildcard include/config/randomize/base.h) \
  ../arch/arm64/include/asm/mte.h \
  ../include/linux/bitfield.h \
  ../arch/arm64/include/asm/extable.h \
    $(wildcard include/config/bpf/jit.h) \
  ../include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
  ../include/linux/key.h \
    $(wildcard include/config/key/notifications.h) \
    $(wildcard include/config/net.h) \
  ../include/linux/sysctl.h \
  ../include/uapi/linux/sysctl.h \
  ../include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  ../include/linux/sched/user.h \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/bpf/syscall.h) \
    $(wildcard include/config/watch/queue.h) \
  ../include/linux/ratelimit.h \
  ../include/linux/rcu_sync.h \
  ../include/linux/delayed_call.h \
  ../include/linux/uuid.h \
  ../include/uapi/linux/uuid.h \
  ../include/linux/errseq.h \
  ../include/linux/ioprio.h \
  ../include/linux/sched/rt.h \
  ../include/linux/iocontext.h \
  ../include/linux/fs_types.h \
  ../include/uapi/linux/fs.h \
  ../include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  ../include/linux/percpu_counter.h \
  ../include/uapi/linux/dqblk_xfs.h \
  ../include/linux/dqblk_v1.h \
  ../include/linux/dqblk_v2.h \
  ../include/linux/dqblk_qtree.h \
  ../include/linux/projid.h \
  ../include/uapi/linux/quota.h \
  ../include/linux/nfs_fs_i.h \
  ../include/uapi/linux/aio_abi.h \
  ../arch/arm64/include/asm/syscall_wrapper.h \
  ../include/uapi/linux/ethtool.h \
  ../include/linux/if_ether.h \
  ../include/linux/skbuff.h \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/net/tc/skb/ext.h) \
    $(wildcard include/config/skb/extensions.h) \
    $(wildcard include/config/ipv6/ndisc/nodetype.h) \
    $(wildcard include/config/net/switchdev.h) \
    $(wildcard include/config/net/redirect.h) \
    $(wildcard include/config/net/rx/busy/poll.h) \
    $(wildcard include/config/network/secmark.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/debug/net.h) \
    $(wildcard include/config/network/phy/timestamping.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/mptcp.h) \
    $(wildcard include/config/netfilter/xt/target/trace.h) \
    $(wildcard include/config/nf/tables.h) \
    $(wildcard include/config/ip/vs.h) \
  ../include/linux/bvec.h \
  ../include/linux/mm.h \
    $(wildcard include/config/have/arch/mmap/rnd/bits.h) \
    $(wildcard include/config/have/arch/mmap/rnd/compat/bits.h) \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/arch/uses/high/vma/flags.h) \
    $(wildcard include/config/arch/has/pkeys.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/sparc64.h) \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/have/arch/userfaultfd/minor.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/dev/pagemap/ops.h) \
    $(wildcard include/config/device/private.h) \
    $(wildcard include/config/pci/p2pdma.h) \
    $(wildcard include/config/arch/has/pte/special.h) \
    $(wildcard include/config/arch/has/pte/devmap.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/arch/has/set/direct/map.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/hugetlbfs.h) \
    $(wildcard include/config/mapping/dirty/helpers.h) \
  ../include/linux/mmap_lock.h \
  ../include/linux/range.h \
  ../include/linux/percpu-refcount.h \
  ../include/linux/page_ext.h \
    $(wildcard include/config/page/pinner.h) \
  ../include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/arch/stackwalk.h) \
    $(wildcard include/config/have/reliable/stacktrace.h) \
  ../include/linux/stackdepot.h \
    $(wildcard include/config/stackdepot.h) \
  ../include/linux/page_ref.h \
    $(wildcard include/config/debug/page/ref.h) \
  ../include/linux/tracepoint-defs.h \
  ../include/linux/memremap.h \
  ../include/linux/ioport.h \
    $(wildcard include/config/io/strict/devmem.h) \
  ../include/linux/overflow.h \
  ../include/linux/pgtable.h \
    $(wildcard include/config/highpte.h) \
    $(wildcard include/config/have/arch/transparent/hugepage/pud.h) \
    $(wildcard include/config/have/arch/soft/dirty.h) \
    $(wildcard include/config/arch/enable/thp/migration.h) \
    $(wildcard include/config/have/arch/huge/vmap.h) \
    $(wildcard include/config/x86/espfix64.h) \
  ../arch/arm64/include/asm/pgtable.h \
  ../arch/arm64/include/asm/proc-fns.h \
  ../arch/arm64/include/asm/pgtable-prot.h \
  ../arch/arm64/include/asm/tlbflush.h \
    $(wildcard include/config/arm64/workaround/repeat/tlbi.h) \
  ../arch/arm64/include/asm/fixmap.h \
    $(wildcard include/config/acpi/apei/ghes.h) \
    $(wildcard include/config/arm/sde/interface.h) \
    $(wildcard include/config/unmap/kernel/at/el0.h) \
  ../arch/arm64/include/asm/boot.h \
  ../include/asm-generic/fixmap.h \
  ../include/asm-generic/pgtable_uffd.h \
    $(wildcard include/config/have/arch/userfaultfd/wp.h) \
  ../include/linux/kasan.h \
    $(wildcard include/config/kasan/stack.h) \
    $(wildcard include/config/kasan/vmalloc.h) \
    $(wildcard include/config/kasan/inline.h) \
  ../include/linux/page_pinner.h \
  ../include/linux/huge_mm.h \
  ../include/linux/sched/coredump.h \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
  ../include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/debug/tlbflush.h) \
    $(wildcard include/config/debug/vm/vmacache.h) \
  ../include/linux/vm_event_item.h \
    $(wildcard include/config/memory/balloon.h) \
    $(wildcard include/config/balloon/compaction.h) \
  ../include/linux/net.h \
  ../include/linux/sockptr.h \
  ../include/linux/slab.h \
    $(wildcard include/config/debug/slab.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/have/hardened/usercopy/allocator.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slob.h) \
  ../include/uapi/linux/net.h \
  ../include/linux/textsearch.h \
  ../include/net/checksum.h \
  ../arch/arm64/include/asm/checksum.h \
  ../include/linux/in6.h \
  ../include/uapi/linux/in6.h \
  ../include/asm-generic/checksum.h \
  ../include/linux/dma-mapping.h \
    $(wildcard include/config/dma/api/debug.h) \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/need/dma/map/state.h) \
  ../include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/energy/model.h) \
    $(wildcard include/config/generic/msi/irq/domain.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/generic/msi/irq.h) \
    $(wildcard include/config/dma/ops.h) \
    $(wildcard include/config/dma/declare/coherent.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/arch/has/sync/dma/for/device.h) \
    $(wildcard include/config/arch/has/sync/dma/for/cpu.h) \
    $(wildcard include/config/arch/has/sync/dma/for/cpu/all.h) \
    $(wildcard include/config/dma/ops/bypass.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  ../include/linux/dev_printk.h \
  ../include/linux/energy_model.h \
  ../include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  ../include/linux/sysfs.h \
  ../include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  ../include/linux/idr.h \
  ../include/linux/kobject_ns.h \
  ../include/linux/kref.h \
  ../include/linux/sched/cpufreq.h \
    $(wildcard include/config/cpu/freq.h) \
  ../include/linux/sched/topology.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/sched/mc.h) \
  ../include/linux/sched/idle.h \
  ../include/linux/sched/sd_flags.h \
  ../include/linux/klist.h \
  ../include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  ../include/linux/device/bus.h \
    $(wildcard include/config/acpi.h) \
  ../include/linux/device/class.h \
  ../include/linux/device/driver.h \
  ../arch/arm64/include/asm/device.h \
  ../include/linux/pm_wakeup.h \
  ../include/linux/dma-direction.h \
  ../include/linux/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
    $(wildcard include/config/debug/sg.h) \
    $(wildcard include/config/sgl/alloc.h) \
    $(wildcard include/config/arch/no/sg/chain.h) \
    $(wildcard include/config/sg/pool.h) \
  ../arch/arm64/include/asm/io.h \
  ../include/linux/log_mmiorw.h \
    $(wildcard include/config/trace/mmio/access.h) \
  arch/arm64/include/generated/asm/early_ioremap.h \
  ../include/asm-generic/early_ioremap.h \
    $(wildcard include/config/generic/early/ioremap.h) \
  ../include/asm-generic/io.h \
    $(wildcard include/config/generic/iomap.h) \
    $(wildcard include/config/generic/ioremap.h) \
    $(wildcard include/config/has/ioport/map.h) \
    $(wildcard include/config/virt/to/bus.h) \
  ../include/asm-generic/pci_iomap.h \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  ../include/linux/logic_pio.h \
    $(wildcard include/config/indirect/pio.h) \
  ../include/linux/fwnode.h \
  ../include/linux/vmalloc.h \
  ../arch/arm64/include/asm/vmalloc.h \
  ../include/linux/mem_encrypt.h \
    $(wildcard include/config/arch/has/mem/encrypt.h) \
  ../include/linux/qcom-dma-mapping.h \
  ../include/linux/netdev_features.h \
  ../include/linux/sched/clock.h \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/irq/time/accounting.h) \
  ../include/net/flow_dissector.h \
  ../include/uapi/linux/if_ether.h \
  ../include/linux/splice.h \
  ../include/linux/pipe_fs_i.h \
  ../include/uapi/linux/if_packet.h \
  ../include/net/flow.h \
  ../include/linux/netfilter/nf_conntrack_common.h \
  ../include/uapi/linux/netfilter/nf_conntrack_common.h \
  ../include/net/net_namespace.h \
    $(wildcard include/config/ieee802154/6lowpan.h) \
    $(wildcard include/config/ip/sctp.h) \
    $(wildcard include/config/ip/dccp.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/nf/defrag/ipv6.h) \
    $(wildcard include/config/netfilter/netlink/acct.h) \
    $(wildcard include/config/nf/ct/netlink/timeout.h) \
    $(wildcard include/config/wext/core.h) \
    $(wildcard include/config/mpls.h) \
    $(wildcard include/config/can.h) \
    $(wildcard include/config/crypto/user.h) \
    $(wildcard include/config/net/ns.h) \
  ../include/net/netns/core.h \
  ../include/net/netns/mib.h \
    $(wildcard include/config/xfrm/statistics.h) \
    $(wildcard include/config/tls.h) \
  ../include/net/snmp.h \
  ../include/uapi/linux/snmp.h \
  ../include/linux/u64_stats_sync.h \
  arch/arm64/include/generated/asm/local64.h \
  ../include/asm-generic/local64.h \
  arch/arm64/include/generated/asm/local.h \
  ../include/asm-generic/local.h \
  ../include/net/netns/unix.h \
  ../include/net/netns/packet.h \
  ../include/net/netns/ipv4.h \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/ip/route/classid.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
    $(wildcard include/config/ip/route/multipath.h) \
  ../include/net/inet_frag.h \
  ../include/net/netns/ipv6.h \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ipv6/subtrees.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/ipv6/mroute/multiple/tables.h) \
  ../include/net/dst_ops.h \
  ../include/uapi/linux/icmpv6.h \
  ../include/net/netns/nexthop.h \
  ../include/net/netns/ieee802154_6lowpan.h \
  ../include/net/netns/sctp.h \
  ../include/net/netns/dccp.h \
  ../include/net/netns/netfilter.h \
    $(wildcard include/config/netfilter/family/arp.h) \
    $(wildcard include/config/netfilter/family/bridge.h) \
    $(wildcard include/config/nf/defrag/ipv4.h) \
  ../include/linux/netfilter_defs.h \
  ../include/uapi/linux/netfilter.h \
  ../include/linux/in.h \
  ../include/uapi/linux/in.h \
  ../include/net/netns/x_tables.h \
    $(wildcard include/config/bridge/nf/ebtables.h) \
  ../include/net/netns/conntrack.h \
    $(wildcard include/config/nf/ct/proto/dccp.h) \
    $(wildcard include/config/nf/ct/proto/sctp.h) \
    $(wildcard include/config/nf/ct/proto/gre.h) \
    $(wildcard include/config/nf/conntrack/events.h) \
    $(wildcard include/config/nf/conntrack/labels.h) \
  ../include/linux/list_nulls.h \
  ../include/linux/netfilter/nf_conntrack_tcp.h \
  ../include/uapi/linux/netfilter/nf_conntrack_tcp.h \
  ../include/linux/netfilter/nf_conntrack_dccp.h \
  ../include/uapi/linux/netfilter/nf_conntrack_tuple_common.h \
  ../include/linux/netfilter/nf_conntrack_sctp.h \
  ../include/uapi/linux/netfilter/nf_conntrack_sctp.h \
  ../include/net/netns/nftables.h \
  ../include/net/netns/xfrm.h \
  ../include/uapi/linux/xfrm.h \
  ../include/net/netns/mpls.h \
  ../include/net/netns/can.h \
  ../include/net/netns/xdp.h \
  ../include/net/netns/bpf.h \
  ../include/linux/bpf-netns.h \
  ../include/uapi/linux/bpf.h \
    $(wildcard include/config/efficient/unaligned/access.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/bpf/kprobe/override.h) \
    $(wildcard include/config/function/error/injection.h) \
    $(wildcard include/config/bpf/lirc/mode2.h) \
    $(wildcard include/config/sock/cgroup/data.h) \
  ../include/uapi/linux/bpf_common.h \
  ../include/linux/ns_common.h \
  ../include/linux/seq_file_net.h \
  ../include/linux/seq_file.h \
  ../include/net/netprio_cgroup.h \
  ../include/linux/cgroup.h \
    $(wildcard include/config/cgroup/cpuacct.h) \
    $(wildcard include/config/cgroup/data.h) \
    $(wildcard include/config/cgroup/bpf.h) \
  ../include/uapi/linux/cgroupstats.h \
  ../include/uapi/linux/taskstats.h \
  ../include/linux/nsproxy.h \
  ../include/linux/user_namespace.h \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/persistent/keyrings.h) \
  ../include/linux/kernel_stat.h \
  ../include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
    $(wildcard include/config/irq/timings.h) \
  ../include/linux/irqreturn.h \
  ../include/linux/hardirq.h \
  ../include/linux/context_tracking_state.h \
    $(wildcard include/config/context/tracking.h) \
  ../include/linux/ftrace_irq.h \
    $(wildcard include/config/hwlat/tracer.h) \
  ../include/linux/vtime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
  ../arch/arm64/include/asm/hardirq.h \
  ../arch/arm64/include/asm/irq.h \
  ../include/asm-generic/irq.h \
  ../arch/arm64/include/asm/kvm_arm.h \
  ../include/linux/irq_cpustat.h \
  ../include/linux/cgroup-defs.h \
  ../include/linux/bpf-cgroup.h \
  ../include/linux/bpf.h \
    $(wildcard include/config/bpf/jit/always/on.h) \
    $(wildcard include/config/inet.h) \
  ../include/linux/file.h \
  ../include/linux/rbtree_latch.h \
  ../include/linux/module.h \
    $(wildcard include/config/modules/tree/lookup.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/bpf/events.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/have/static/call/inline.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/mitigation/its.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/module/sig.h) \
  ../include/linux/kmod.h \
  ../include/linux/umh.h \
  ../include/linux/elf.h \
    $(wildcard include/config/arch/use/gnu/property.h) \
    $(wildcard include/config/arch/have/elf/prot.h) \
  ../arch/arm64/include/asm/elf.h \
    $(wildcard include/config/compat/vdso.h) \
  arch/arm64/include/generated/asm/user.h \
  ../include/asm-generic/user.h \
  ../include/uapi/linux/elf.h \
  ../include/uapi/linux/elf-em.h \
  ../include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ppc64.h) \
  ../include/linux/error-injection.h \
  ../include/asm-generic/error-injection.h \
  ../include/linux/static_call_types.h \
    $(wildcard include/config/have/static/call.h) \
  ../include/linux/cfi.h \
    $(wildcard include/config/cfi/clang/shadow.h) \
  ../arch/arm64/include/asm/module.h \
    $(wildcard include/config/arm64/module/plts.h) \
    $(wildcard include/config/dynamic/ftrace.h) \
    $(wildcard include/config/arm64/erratum/843419.h) \
  ../include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  ../include/linux/kallsyms.h \
    $(wildcard include/config/kallsyms/all.h) \
  ../include/linux/bpf_types.h \
    $(wildcard include/config/bpf/lsm.h) \
  ../include/linux/psi_types.h \
  ../include/linux/kthread.h \
  ../include/linux/cgroup_subsys.h \
    $(wildcard include/config/cgroup/device.h) \
    $(wildcard include/config/cgroup/freezer.h) \
    $(wildcard include/config/cgroup/perf.h) \
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/cgroup/pids.h) \
    $(wildcard include/config/cgroup/rdma.h) \
    $(wildcard include/config/cgroup/debug.h) \
  ../include/net/xdp.h \
  ../include/uapi/linux/neighbour.h \
  ../include/linux/netlink.h \
  ../include/net/scm.h \
    $(wildcard include/config/security/network.h) \
  ../include/linux/security.h \
    $(wildcard include/config/security/infiniband.h) \
    $(wildcard include/config/security/network/xfrm.h) \
    $(wildcard include/config/security/path.h) \
    $(wildcard include/config/securityfs.h) \
  ../include/linux/kernel_read_file.h \
  ../include/uapi/linux/netlink.h \
  ../include/uapi/linux/netdevice.h \
  ../include/linux/if_link.h \
  ../include/uapi/linux/if_link.h \
  ../include/uapi/linux/if_bonding.h \
  ../include/uapi/linux/pkt_cls.h \
  ../include/uapi/linux/pkt_sched.h \
  ../include/linux/hashtable.h \
  ../include/net/cfg80211.h \
    $(wildcard include/config/cfg80211.h) \
    $(wildcard include/config/nl80211/testmode.h) \
    $(wildcard include/config/cfg80211/wext.h) \
  ../include/linux/debugfs.h \
    $(wildcard include/config/debug/fs.h) \
  ../include/uapi/linux/nl80211.h \
  ../include/linux/ieee80211.h \
  ../include/linux/etherdevice.h \
  ../include/linux/crc32.h \
  ../include/linux/bitrev.h \
    $(wildcard include/config/have/arch/bitreverse.h) \
  ../arch/arm64/include/asm/bitrev.h \
  arch/arm64/include/generated/asm/unaligned.h \
  ../include/asm-generic/unaligned.h \
  ../include/linux/unaligned/access_ok.h \
  ../include/linux/unaligned/generic.h \
  ../include/net/regulatory.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_delayed_work.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_delayed_work.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_status.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_types.h \
    $(wildcard include/config/16/bit/freq/type.h) \
    $(wildcard include/config/wlan/trace/hide/mac/address.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_types.h \
  include/generated/uapi/linux/version.h \
  ../include/linux/ctype.h \
  ../include/linux/wireless.h \
  ../include/uapi/linux/wireless.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_list.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_list.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_trace.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_nbuf.h \
    $(wildcard include/config/wlan/sysfs/mem/stats.h) \
    $(wildcard include/config/nbuf/ap/platform.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_util.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_util.h \
  ../include/linux/average.h \
  ../include/linux/io.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_lock.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_mem.h \
    $(wildcard include/config/arm/smmu.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_mem.h \
    $(wildcard include/config/qcom/iommu/util.h) \
  ../include/linux/pci.h \
    $(wildcard include/config/pci/iov.h) \
    $(wildcard include/config/pcieaer.h) \
    $(wildcard include/config/pcieaspm.h) \
    $(wildcard include/config/hotplug/pci/pcie.h) \
    $(wildcard include/config/pcie/ptm.h) \
    $(wildcard include/config/pci/msi.h) \
    $(wildcard include/config/pcie/dpc.h) \
    $(wildcard include/config/pci/ats.h) \
    $(wildcard include/config/pci/pri.h) \
    $(wildcard include/config/pci/pasid.h) \
    $(wildcard include/config/pci/domains/generic.h) \
    $(wildcard include/config/pcieportbus.h) \
    $(wildcard include/config/pci/domains.h) \
    $(wildcard include/config/pci/quirks.h) \
    $(wildcard include/config/pci/mmconfig.h) \
    $(wildcard include/config/acpi/mcfg.h) \
    $(wildcard include/config/hotplug/pci.h) \
    $(wildcard include/config/eeh.h) \
  ../include/linux/mod_devicetable.h \
  ../include/linux/resource_ext.h \
  ../include/uapi/linux/pci.h \
  ../include/uapi/linux/pci_regs.h \
  ../include/linux/pci_ids.h \
  ../include/linux/dmapool.h \
  ../arch/arm64/include/asm/pci.h \
  ../include/linux/pci-dma-compat.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/sys/queue.h \
  ../include/linux/qcom-iommu-util.h \
    $(wildcard include/config/iommu/io/pgtable/lpae.h) \
  ../include/linux/iommu.h \
    $(wildcard include/config/iommu/api.h) \
    $(wildcard include/config/iommu/debugfs.h) \
  ../include/linux/of.h \
    $(wildcard include/config/of/dynamic.h) \
    $(wildcard include/config/sparc.h) \
    $(wildcard include/config/of/promtree.h) \
    $(wildcard include/config/of/kobj.h) \
    $(wildcard include/config/of/numa.h) \
    $(wildcard include/config/of/overlay.h) \
  ../include/linux/property.h \
  ../include/soc/qcom/of_common.h \
  ../include/linux/ioasid.h \
    $(wildcard include/config/ioasid.h) \
  ../include/uapi/linux/iommu.h \
  ../include/linux/iova.h \
    $(wildcard include/config/iommu/iova.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/pld/inc/pld_common.h \
    $(wildcard include/config/cnss/out/of/tree.h) \
    $(wildcard include/config/smmu/s1/unmap.h) \
    $(wildcard include/config/enable/low/power/mode.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/uapi/linux/osapi_linux.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/uapi/linux/a_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/athdefs.h \
  ../include/net/cnss_utils.h \
  ../include/net/cnss_prealloc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_trace.h \
    $(wildcard include/config/qcom/minidump.h) \
    $(wildcard include/config/qca/minidump.h) \
    $(wildcard include/config/slub/debug.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_atomic.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_atomic.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_time.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_time.h \
    $(wildcard include/config/arm.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_lock.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_nbuf.h \
  ../arch/arm64/include/asm/cacheflush.h \
  ../include/linux/kgdb.h \
    $(wildcard include/config/have/arch/kgdb.h) \
    $(wildcard include/config/kgdb.h) \
    $(wildcard include/config/serial/kgdb/nmi.h) \
    $(wildcard include/config/kgdb/honour/blocklist.h) \
  ../include/linux/kprobes.h \
    $(wildcard include/config/kretprobes.h) \
    $(wildcard include/config/kprobes/sanity/test.h) \
    $(wildcard include/config/optprobes.h) \
    $(wildcard include/config/kprobes/on/ftrace.h) \
  ../include/linux/ftrace.h \
    $(wildcard include/config/function/tracer.h) \
    $(wildcard include/config/dynamic/ftrace/with/regs.h) \
    $(wildcard include/config/dynamic/ftrace/with/direct/calls.h) \
    $(wildcard include/config/have/dynamic/ftrace/with/direct/calls.h) \
    $(wildcard include/config/stack/tracer.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/function/profiler.h) \
    $(wildcard include/config/ftrace/syscalls.h) \
  ../include/linux/trace_clock.h \
  arch/arm64/include/generated/asm/trace_clock.h \
  ../include/asm-generic/trace_clock.h \
  ../include/linux/ptrace.h \
  ../include/linux/pid_namespace.h \
    $(wildcard include/config/pid/ns.h) \
  ../include/uapi/linux/ptrace.h \
  ../arch/arm64/include/asm/ftrace.h \
  ../arch/arm64/include/asm/kprobes.h \
  ../include/asm-generic/kprobes.h \
  ../arch/arm64/include/asm/kgdb.h \
  ../include/asm-generic/cacheflush.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_net_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_net_types.h \
  ../include/net/ip6_checksum.h \
  ../include/net/ip.h \
  ../include/linux/ip.h \
  ../include/uapi/linux/ip.h \
  ../include/linux/jhash.h \
  ../include/linux/unaligned/packed_struct.h \
  ../include/net/inet_sock.h \
  ../include/net/sock.h \
    $(wildcard include/config/sock/validate/xmit.h) \
  ../include/linux/page_counter.h \
  ../include/linux/memcontrol.h \
    $(wildcard include/config/memcg/swap.h) \
  ../include/linux/vmpressure.h \
  ../include/linux/eventfd.h \
    $(wildcard include/config/eventfd.h) \
  ../include/linux/writeback.h \
  ../include/linux/flex_proportions.h \
  ../include/linux/backing-dev-defs.h \
  ../include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup/iocost.h) \
    $(wildcard include/config/blk/inline/encryption.h) \
    $(wildcard include/config/dm/default/key.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  ../include/linux/blk-cgroup.h \
  ../include/linux/blkdev.h \
    $(wildcard include/config/blk/rq/alloc/time.h) \
    $(wildcard include/config/blk/wbt.h) \
    $(wildcard include/config/blk/dev/zoned.h) \
    $(wildcard include/config/blk/dev/bsg.h) \
    $(wildcard include/config/blk/dev/throttling.h) \
    $(wildcard include/config/blk/debug/fs.h) \
  ../include/uapi/linux/major.h \
  ../include/linux/genhd.h \
    $(wildcard include/config/fail/make/request.h) \
    $(wildcard include/config/cdrom.h) \
  ../include/linux/pagemap.h \
  ../include/linux/highmem.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/debug/highmem.h) \
  arch/arm64/include/generated/asm/kmap_types.h \
  ../include/asm-generic/kmap_types.h \
  ../include/linux/hugetlb_inline.h \
  ../include/linux/sched/debug.h \
  ../include/linux/mempool.h \
  ../include/linux/bio.h \
  ../include/linux/bsg.h \
  ../include/uapi/linux/bsg.h \
  ../include/uapi/linux/blkzoned.h \
  ../include/linux/elevator.h \
  ../include/linux/blk-mq.h \
    $(wildcard include/config/fail/io/timeout.h) \
  ../include/linux/sbitmap.h \
  ../include/linux/filter.h \
    $(wildcard include/config/have/ebpf/jit.h) \
  ../include/linux/set_memory.h \
    $(wildcard include/config/arch/has/set/memory.h) \
  arch/arm64/include/generated/asm/set_memory.h \
  ../include/asm-generic/set_memory.h \
  ../include/linux/if_vlan.h \
  ../include/linux/rtnetlink.h \
    $(wildcard include/config/net/ingress.h) \
    $(wildcard include/config/net/egress.h) \
  ../include/uapi/linux/rtnetlink.h \
  ../include/uapi/linux/if_addr.h \
  ../include/uapi/linux/if_vlan.h \
  ../include/crypto/sha.h \
  ../include/net/sch_generic.h \
  ../include/net/gen_stats.h \
  ../include/uapi/linux/gen_stats.h \
  ../include/net/rtnetlink.h \
  ../include/net/netlink.h \
  ../include/net/flow_offload.h \
  ../include/uapi/linux/filter.h \
  ../include/linux/rculist_nulls.h \
  ../include/linux/poll.h \
  ../include/uapi/linux/poll.h \
  arch/arm64/include/generated/uapi/asm/poll.h \
  ../include/uapi/asm-generic/poll.h \
  ../include/uapi/linux/eventpoll.h \
  ../include/net/dst.h \
  ../include/net/neighbour.h \
  ../include/linux/indirect_call_wrapper.h \
  ../include/net/tcp_states.h \
  ../include/uapi/linux/net_tstamp.h \
  ../include/net/l3mdev.h \
  ../include/net/fib_rules.h \
  ../include/uapi/linux/fib_rules.h \
  ../include/net/fib_notifier.h \
  ../include/net/request_sock.h \
  ../include/net/netns/hash.h \
  ../include/net/route.h \
  ../include/net/inetpeer.h \
  ../include/net/ipv6.h \
  ../include/linux/ipv6.h \
    $(wildcard include/config/ipv6/router/pref.h) \
    $(wildcard include/config/ipv6/route/info.h) \
    $(wildcard include/config/ipv6/optimistic/dad.h) \
    $(wildcard include/config/ipv6/seg6/hmac.h) \
    $(wildcard include/config/ipv6/mip6.h) \
  ../include/uapi/linux/ipv6.h \
  ../include/linux/tcp.h \
    $(wildcard include/config/smc.h) \
    $(wildcard include/config/bpf.h) \
    $(wildcard include/config/tcp/md5sig.h) \
  ../include/linux/win_minmax.h \
  ../include/net/inet_connection_sock.h \
  ../include/net/inet_timewait_sock.h \
  ../include/net/timewait_sock.h \
  ../include/uapi/linux/tcp.h \
  ../include/linux/udp.h \
  ../include/uapi/linux/udp.h \
  ../include/linux/jump_label_ratelimit.h \
  ../include/net/if_inet6.h \
  ../include/net/ndisc.h \
  ../include/net/ipv6_stubs.h \
  ../include/linux/icmpv6.h \
    $(wildcard include/config/nf/nat.h) \
  ../include/linux/if_arp.h \
    $(wildcard include/config/firewire/net.h) \
  ../include/uapi/linux/if_arp.h \
  ../include/net/ip_fib.h \
  ../include/net/arp.h \
  ../include/uapi/linux/in_route.h \
  ../include/uapi/linux/route.h \
  ../include/net/lwtunnel.h \
    $(wildcard include/config/lwtunnel.h) \
  ../include/uapi/linux/lwtunnel.h \
  ../include/net/tcp.h \
    $(wildcard include/config/syn/cookies.h) \
    $(wildcard include/config/net/sock/msg.h) \
  ../include/net/inet_hashtables.h \
  ../include/net/sock_reuseport.h \
  ../include/net/inet_ecn.h \
  ../include/net/dsfield.h \
  ../include/net/mptcp.h \
    $(wildcard include/config/mptcp/ipv6.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_nbuf_frag.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_nbuf_frag.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_nbuf_m.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/i_qdf_nbuf_api_m.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_debugfs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_debugfs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/sir_mac_prot_def.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_event.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_event.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_platform.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_cpuhp.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/inc/wlan_cmn.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/regulatory/dispatcher/inc/reg_services_public_struct.h \
    $(wildcard include/config/afc/support.h) \
    $(wildcard include/config/49ghz/chan.h) \
    $(wildcard include/config/host/find/chan.h) \
    $(wildcard include/config/reg/client.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_reg_service.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_psoc_obj.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_cmn.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_debug.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_timer.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_timer.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_mc_timer.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_mc_timer.h \
  ../include/linux/rtc.h \
    $(wildcard include/config/rtc/intf/dev/uie/emul.h) \
    $(wildcard include/config/rtc/hctosys/device.h) \
    $(wildcard include/config/rtc/nvmem.h) \
    $(wildcard include/config/rtc/intf/sysfs.h) \
  ../include/linux/nvmem-provider.h \
    $(wildcard include/config/nvmem.h) \
  ../include/linux/gpio/consumer.h \
    $(wildcard include/config/gpiolib.h) \
    $(wildcard include/config/of/gpio.h) \
    $(wildcard include/config/gpio/sysfs.h) \
  ../include/uapi/linux/rtc.h \
  ../include/linux/cdev.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_pdev_obj.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/dispatcher/inc/target_if_pub.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_packet.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_sched.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_config.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/osdep.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_defer.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_defer.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_osdep.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_mob_def.h \
    $(wildcard include/config/beryllium.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/sir_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/htt.h \
    $(wildcard include/config/val.h) \
    $(wildcard include/config/param.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/htt_deps.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/a_osapi.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wlan_defs.h \
    $(wildcard include/config/160mhz/support.h) \
    $(wildcard include/config/160mhz/support/undef/war.h) \
    $(wildcard include/config/move/rc/struct/to/maccore.h) \
    $(wildcard include/config/ar900b/support.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/htt_common.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/cmn_defs/inc/wlan_cmn_ieee80211.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_common_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_global_obj.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_unified.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_services.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_unified_vendor.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_hw_filter_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/qca_vendor.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_threads.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_threads.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_handle.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/wni_cfg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_fils_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/crypto/inc/wlan_crypto_global_def.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/csr_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/sir_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_regdomain.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/ani_system_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/sir_params.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/wlan_scan_public_structs.h \
    $(wildcard include/config/slub/debug/on.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/mgmt_txrx/dispatcher/inc/wlan_mgmt_txrx_utils_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/mgmt_txrx/dispatcher/inc/wlan_mgmt_txrx_rx_reo_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/tdls/dispatcher/inc/wlan_tdls_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/spectral/dispatcher/inc/wlan_spectral_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dfs/dispatcher/inc/wlan_dfs_ioctl.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/spectral/dispatcher/inc/spectral_ioctl.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/vdev_mgr/dispatcher/inc/wlan_vdev_mgr_tgt_if_tx_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/vdev_mgr/dispatcher/inc/wlan_vdev_mgr_tgt_if_rx_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/ol/inc/ol_txrx_htt_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_cmn.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_ops.h \
    $(wildcard include/config/ipa/wdi/unified/api.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_cmn_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/htc/htc_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/htc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/uapi/linux/athstartpack.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/athendpack.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/htc_services.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/htc/htc_packet.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/htc/dl_list.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_stats_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_hist_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_mon_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/init_deinit/inc/service_ready_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dfs/dispatcher/inc/wlan_dfs_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/thermal/dispatcher/inc/wlan_thermal_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_pmo_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_tgt_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_arp_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_ns_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_gtk_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_wow_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_lphb_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_mc_addr_filtering_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_pkt_filter_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cp_stats/dispatcher/inc/wlan_cp_stats_mc_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cp_stats/dispatcher/inc/wlan_cp_stats_public_structs.h \
    $(wildcard include/config/wlan/bmiss.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_twt_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/action_oui/dispatcher/inc/wlan_action_oui_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/green_ap/dispatcher/inc/wlan_green_ap_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_twt_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/twt/dispatcher/inc/wlan_twt_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_dbr_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_dbr_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_nan_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/nan/core/inc/nan_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/scheduler/inc/scheduler_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/wlan_tgt_def_config.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_p2p_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/p2p/dispatcher/inc/wlan_p2p_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/wmi/inc/wmi_unified_roam_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/wmi/inc/wmi_unified_roam_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/blacklist_mgr/dispatcher/inc/wlan_blm_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_bss_score_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/wlan_scan_utils_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_vdev_obj.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/mlme_objmgr/dispatcher/inc/wlan_vdev_mlme_main.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/global_umac_dispatcher/lmac_if/inc/wlan_lmac_if_def.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cfr/dispatcher/inc/wlan_cfr_utils_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_streamfs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_streamfs.h \
  ../include/linux/relay.h \
    $(wildcard include/config/relay.h) \
  ../include/linux/irq_work.h \
    $(wildcard include/config/irq/work.h) \
  ../arch/arm64/include/asm/irq_work.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/dfs/dispatcher/inc/wlan_dfs_tgt_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/coap/dispatcher/inc/wlan_coap_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/include/wlan_vdev_mlme.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/vdev_mgr/dispatcher/inc/wlan_vdev_mlme_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/wlan_ext_mlme_obj_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/mlme_objmgr/dispatcher/inc/wlan_mlme_dbg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/regulatory/dispatcher/inc/wlan_reg_services_api.h \
    $(wildcard include/config/6g/freq/overlap.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_roam_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_sta_param.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_concurrency_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_sta_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/disa/dispatcher/inc/wlan_disa_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/policy_mgr/inc/wlan_policy_mgr_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_fwol_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/fw_offload/dispatcher/inc/wlan_fwol_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wmi/inc/wmi_unified_cp_stats_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/wmi/inc/wmi_unified_mc_cp_stats_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx/wdi_event_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx/wdi_event.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/ol/inc/ol_defines.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/dot11f.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/policy_mgr/inc/wlan_policy_mgr_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/utils/inc/wlan_utility.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/csr_link_list.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/wlan_mlme_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/wlan_mlme_twt_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/cfg_mlme_generic.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/host_diag_log/inc/host_diag_core_event.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/host_diag_log/src/i_host_diag_core_event.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/host_diag_log/inc/host_diag_event_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/core/inc/wlan_mlme_main.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_periodic_work.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_periodic_work.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/obj_mgr/inc/wlan_objmgr_peer_obj.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/wfa_config/dispatcher/inc/wlan_wfa_config_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/cmn_services/logging/inc/wlan_connectivity_logging.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/logging/inc/wlan_logging_sock_svc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/nlink/inc/wlan_nlink_srv.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/nlink/inc/wlan_nlink_common.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/inc/wlan_dsc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/inc/wlan_dsc_driver.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/inc/wlan_dsc_psoc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/inc/wlan_dsc_vdev.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_assoc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/sme_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/sme_internal.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/sme_power_save.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc/wma_tgt_cfg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/src/wma_sar_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/src/wma_fips_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc/wma_if.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/sme_rrm_internal.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/rrm_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/serialization/inc/wlan_serialization_legacy_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/serialization/inc/wlan_serialization_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_peer_ops.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_wmm.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_wext.h \
  ../include/net/iw_handler.h \
    $(wildcard include/config/wext/priv.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/sme_qos_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/ani_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/sir_common.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/legacy/src/platform/inc/sys_wrapper.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/sys/legacy/src/system/inc/sys_def.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/dph_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/wni_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/sir_mac_prop_exts.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/sir_debug.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sap/inc/sap_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/dph/dph_hash_table.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/sch_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/parser_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_ft_defs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_session.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlo_mgr/inc/wlan_mlo_mgr_public_structs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/sys_global.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/csr_support.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/sme/inc/csr_internal.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_roam_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/../../core/src/wlan_cm_roam_offload.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_str.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_str.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/wlan_mlme_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/regulatory/dispatcher/inc/wlan_reg_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_tgt_if_tx_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_cfg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_includes.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_tx_rx.h \
    $(wildcard include/config/dp/pkt/add/timestamp.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_flow_ctrl_legacy.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_tracepoint.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_tracepoint.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/qdf_tracepoint_defs.h \
  ../include/linux/tracepoint.h \
    $(wildcard include/config/have/syscall/tracepoints.h) \
    $(wildcard include/config/tracepoint.h) \
  ../include/linux/static_call.h \
  ../include/linux/cpu.h \
    $(wildcard include/config/pm/sleep/smp.h) \
    $(wildcard include/config/pm/sleep/smp/nonzero/cpu.h) \
    $(wildcard include/config/arch/has/cpu/finalize/init.h) \
    $(wildcard include/config/hotplug/smt.h) \
  ../include/linux/node.h \
    $(wildcard include/config/hmem/reporting.h) \
    $(wildcard include/config/memory/hotplug/sparse.h) \
  ../include/linux/cpuhotplug.h \
  ../include/trace/define_trace.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_pkt_add_timestamp.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/hdd_config.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/hdd_sar_safety_config.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_ftm.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/utils/ptt/inc/wlan_ptt_sock_svc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_tdls.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_tsf.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_cfg80211.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/scan/inc/wlan_cfg80211_scan.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/wlan_scan_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/wlan_scan_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/../../core/src/wlan_scan_main.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/../../core/src/wlan_scan_cache_db.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/../../core/src/wlan_scan_11d.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/scan/dispatcher/inc/cfg_scan.h \
    $(wildcard include/config/wifi/emulation/wifi/3/0.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/cfg/inc/cfg_define.h \
    $(wildcard include/config/ap/platform.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/wlan_cfg80211.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qal/inc/qal_devcfg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qal/linux/src/i_qal_devcfg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/wlan_osif_features.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/tdls/inc/wlan_cfg80211_tdls.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/tdls/dispatcher/inc/wlan_tdls_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/spectral/inc/wlan_cfg80211_spectral.h \
    $(wildcard include/config/requested.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_debugfs.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_lro.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/dp/inc/cdp_txrx_misc.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_nan_datapath.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/core/inc/wlan_pmo_mc_addr_filtering.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_obj_mgmt_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/pmo/dispatcher/inc/wlan_pmo_obj_mgmt_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/wifi_pos/inc/os_if_wifi_pos.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/wifi_pos/inc/wifi_pos_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/wifi_pos/inc/wifi_pos_utils_pub.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/wifi_pos/inc/../src/wifi_pos_utils_i.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_module.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/linux/src/i_qdf_module.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_he.h \
  ../include/net/netevent.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_nud_tracking.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_twt.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/dispatcher/inc/wlan_mlme_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx3.0/dp_txrx.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/dp/txrx3.0/dp_rx_thread.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wlan_cfg/cfg_dp.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/wlan_cfg/wlan_init_cfg.h \
  ../include/linux/pm_qos.h \
    $(wildcard include/config/cpu/idle.h) \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_sta_info.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_bus_bandwidth.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_cm_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/os_if/linux/mlme/inc/osif_cm_util.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/wlan_cm_roam_ucfg_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_mlo.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/sync/inc/osif_psoc_sync.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/os_if/sync/inc/osif_vdev_sync.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/dsc/test/wlan_dsc_test.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_unit_test.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/inc/wlan_hdd_debugfs_unit_test.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc/wma.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_version.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc/wma_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/wma/inc/wma_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_utils.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/mlme/core/inc/wlan_mlme_vdev_mgr_interface.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/src/i_cds_packet.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/include/utils_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/lim/lim_types.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/include/lim_trace.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/inc/mac_trace.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/mac/src/pe/lim/lim_send_sme_rsp_messages.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/components/umac/mlme/connection_mgr/dispatcher/inc/../../core/src/wlan_cm_vdev_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/core/src/wlan_cm_main.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/core/src/wlan_cm_main_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/connection_mgr/core/src/wlan_cm_sm.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/sm_engine/inc/wlan_sm_engine.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/sm_engine/inc/wlan_sm_engine_dbg.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/include/wlan_mlme_cmn.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/include/wlan_psoc_mlme.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/target_if/mlme/psoc/inc/target_if_psoc_wake_lock.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/mlme/include/wlan_pdev_mlme.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/crypto/inc/wlan_crypto_global_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/qdf/inc/qdf_crypto.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/interface_mgr/inc/wlan_if_mgr_api.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/cmn/umac/cmn_services/interface_mgr/inc/wlan_if_mgr_public_struct.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/dbglog.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wlan_module_ids.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/inc/cds_ieee80211_common.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/cds/src/cds_ieee80211_common_i.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmix.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_tlv_helper.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/../fw-api//fw/wmi_tlv_defs.h \

/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o: $(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o)

$(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/wlan/qcacld-3.0/core/hdd/src/wlan_hdd_debugfs_unit_test.o):
