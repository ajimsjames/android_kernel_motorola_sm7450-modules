cmd_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o := scripts/basic/cc-wrapper clang -Wp,-MMD,/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/.wcd937x-tables.o.d -nostdinc -isystem /home/aju/Android/evox/prebuilts/clang/host/linux-x86/clang-r574158/lib/clang/21/include -I../arch/arm64/include -I./arch/arm64/include/generated -I../include -I./include -I../arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I../include/uapi -I./include/generated/uapi -include ../include/linux/kconfig.h -include ../include/linux/compiler_types.h -D__KERNEL__ --target=aarch64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=../= -DANI_LITTLE_BYTE_ENDIAN -DANI_LITTLE_BIT_ENDIAN -DDOT11F_LITTLE_ENDIAN_HOST -DANI_COMPILER_TYPE_GCC -DANI_OS_TYPE_ANDROID=6 -DPTT_SOCK_SVC_ENABLE -Wall -Werror -D__linux__ -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret+leaf+bti -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-format-invalid-specifier -Wno-gnu -mno-global-merge -Wno-default-const-init-unsafe -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fsanitize=shadow-call-stack -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -fno-builtin-wcslen -Wno-initializer-overrides -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -Wno-cast-function-type-strict -Wno-enum-compare-conditional -Wno-error -Wno-error=strict-prototypes -Wno-strict-prototypes -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/motorola/include -DPOWER_SUPPLY_TYPE_USB_HVDCP_3=21 -DPOWER_SUPPLY_TYPE_USB_HVDCP_3P5=22 -DPOWER_SUPPLY_TYPE_USB_FLOAT=23 -DPOWER_SUPPLY_TYPE_USB_HVDCP=20 -DPSY_IIO_MMI_OTG_ENABLE=116 -DPSY_IIO_USB_CHARGING_ENABLED=117 -DPSY_IIO_INPUT_CURRENT_SETTLED=118 -DPSY_IIO_USB_TERMINATION_ENABLED=119 -DPSY_IIO_MMI_QC3P_POWER=120 -DPSY_IIO_MMI_PD_VDM_VERIFY=121 -DPSY_IIO_MMI_CP_INPUT_CURRENT_NOW=122 -DPSY_IIO_MMI_CP_INPUT_VOLTAGE_NOW=123 -DPSY_IIO_CP_CLEAR_ERROR=124 -DPSY_IIO_MMI_CP_CHIP_ID=125 -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1488 -include /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/config/waipioautoconf.h -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/include -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/include/uapi/audio -Wheader-guard  -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-undefined-trap-on-error  -DMODULE  -DKBUILD_BASENAME='"wcd937x_tables"' -DKBUILD_MODNAME='"wcd937x_dlkm"' -D__KBUILD_MODNAME=kmod_wcd937x_dlkm -c -o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.c

source_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o := /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.c

deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o := \
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
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/config/waipioautoconf.h \
    $(wildcard include/config/snd/soc/msm/qdsp6v2/intf.h) \
    $(wildcard include/config/snd/soc/waipio.h) \
    $(wildcard include/config/snd/event.h) \
    $(wildcard include/config/audio/pkt/ion.h) \
    $(wildcard include/config/msm/qdsp6/notifier.h) \
    $(wildcard include/config/msm/qdsp6/ssr.h) \
    $(wildcard include/config/msm/qdsp6/pdr.h) \
    $(wildcard include/config/msm/adsp/loader.h) \
    $(wildcard include/config/spf/core.h) \
    $(wildcard include/config/msm/qdsp6/gpr/rpmsg.h) \
    $(wildcard include/config/audio/prm.h) \
    $(wildcard include/config/audio/pkt.h) \
    $(wildcard include/config/digital/cdc/rsc/mgr.h) \
    $(wildcard include/config/pinctrl/lpi.h) \
    $(wildcard include/config/soundwire.h) \
    $(wildcard include/config/soundwire/mstr/ctrl.h) \
    $(wildcard include/config/swrm/ver/1p7.h) \
    $(wildcard include/config/wcd9xxx/codec/core/v2.h) \
    $(wildcard include/config/snd/soc/wsa881x.h) \
    $(wildcard include/config/msm/cdc/pinctrl.h) \
    $(wildcard include/config/snd/soc/wsa883x.h) \
    $(wildcard include/config/snd/soc/lpass/cdc.h) \
    $(wildcard include/config/snd/soc/wcd/irq.h) \
    $(wildcard include/config/lpass/cdc/wsa2/macro.h) \
    $(wildcard include/config/lpass/cdc/wsa/macro.h) \
    $(wildcard include/config/lpass/cdc/va/macro.h) \
    $(wildcard include/config/lpass/cdc/tx/macro.h) \
    $(wildcard include/config/lpass/cdc/rx/macro.h) \
    $(wildcard include/config/snd/soc/wcd9xxx/v2.h) \
    $(wildcard include/config/snd/soc/wcd938x.h) \
    $(wildcard include/config/snd/soc/wcd938x/slave.h) \
    $(wildcard include/config/snd/soc/wcd937x.h) \
    $(wildcard include/config/snd/soc/wcd937x/slave.h) \
    $(wildcard include/config/snd/soc/wcd/mbhc.h) \
    $(wildcard include/config/snd/soc/wcd/mbhc/adc.h) \
    $(wildcard include/config/snd/soc/swr/dmic.h) \
    $(wildcard include/config/snd/swr/haptics.h) \
    $(wildcard include/config/snd/soc/msm/stub.h) \
    $(wildcard include/config/snd/soc/msm/hdmi/codec/rx.h) \
    $(wildcard include/config/snd/soc/aw882xx.h) \
    $(wildcard include/config/snd/soc/aw87xxx.h) \
    $(wildcard include/config/snd/soc/fs19xx.h) \
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
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-registers.h \

/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o: $(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o)

$(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/audio-kernel/asoc/codecs/wcd937x/wcd937x-tables.o):
