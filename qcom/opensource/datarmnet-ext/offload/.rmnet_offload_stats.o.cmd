cmd_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o := scripts/basic/cc-wrapper clang -Wp,-MMD,/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/.rmnet_offload_stats.o.d -nostdinc -isystem /home/aju/Android/evox/prebuilts/clang/host/linux-x86/clang-r574158/lib/clang/21/include -I../arch/arm64/include -I./arch/arm64/include/generated -I../include -I./include -I../arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I../include/uapi -I./include/generated/uapi -include ../include/linux/kconfig.h -include ../include/linux/compiler_types.h -D__KERNEL__ --target=aarch64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=../= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret+leaf+bti -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-format-invalid-specifier -Wno-gnu -mno-global-merge -Wno-default-const-init-unsafe -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fsanitize=shadow-call-stack -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -fno-builtin-wcslen -Wno-initializer-overrides -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -Wno-cast-function-type-strict -Wno-enum-compare-conditional -Wno-error -Wno-error=strict-prototypes -Wno-strict-prototypes -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/motorola/include -DPOWER_SUPPLY_TYPE_USB_HVDCP_3=21 -DPOWER_SUPPLY_TYPE_USB_HVDCP_3P5=22 -DPOWER_SUPPLY_TYPE_USB_FLOAT=23 -DPOWER_SUPPLY_TYPE_USB_HVDCP=20 -DPSY_IIO_MMI_OTG_ENABLE=116 -DPSY_IIO_USB_CHARGING_ENABLED=117 -DPSY_IIO_INPUT_CURRENT_SETTLED=118 -DPSY_IIO_USB_TERMINATION_ENABLED=119 -DPSY_IIO_MMI_QC3P_POWER=120 -DPSY_IIO_MMI_PD_VDM_VERIFY=121 -DPSY_IIO_MMI_CP_INPUT_CURRENT_NOW=122 -DPSY_IIO_MMI_CP_INPUT_VOLTAGE_NOW=123 -DPSY_IIO_CP_CLEAR_ERROR=124 -DPSY_IIO_MMI_CP_CHIP_ID=125 -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1488 -I/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet/core -Wno-misleading-indentation  -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-undefined-trap-on-error  -DMODULE  -DKBUILD_BASENAME='"rmnet_offload_stats"' -DKBUILD_MODNAME='"rmnet_offload"' -D__KBUILD_MODNAME=kmod_rmnet_offload -c -o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.c

source_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o := /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.c

deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o := \
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
  ../include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ppc64.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/modules.h) \
  ../include/linux/init.h \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/strict/kernel/rwx.h) \
    $(wildcard include/config/strict/module/rwx.h) \
    $(wildcard include/config/lto/clang.h) \
  ../include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/64bit.h) \
  ../arch/arm64/include/asm/rwonce.h \
    $(wildcard include/config/lto.h) \
    $(wildcard include/config/as/has/ldapr.h) \
  ../include/asm-generic/rwonce.h \
  ../include/linux/kasan-checks.h \
    $(wildcard include/config/kasan/generic.h) \
    $(wildcard include/config/kasan/sw/tags.h) \
  ../include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
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
  ../include/linux/kcsan-checks.h \
    $(wildcard include/config/kcsan.h) \
    $(wildcard include/config/kcsan/ignore/atomics.h) \
  ../include/linux/stringify.h \
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
  ../include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/cfi/clang.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  ../arch/arm64/include/asm/linkage.h \
    $(wildcard include/config/arm64/bti/kernel.h) \
  ../include/linux/bitops.h \
  ../include/linux/bits.h \
  ../include/linux/const.h \
  ../include/vdso/const.h \
  ../include/uapi/linux/const.h \
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
    $(wildcard include/config/smp.h) \
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
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/dynamic/debug/core.h) \
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
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
  ../include/linux/rwlock_types.h \
  arch/arm64/include/generated/asm/div64.h \
  ../include/asm-generic/div64.h \
  ../include/uapi/linux/kernel.h \
  ../include/uapi/linux/sysinfo.h \
  /home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.h \

/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o: $(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o)

$(deps_/home/aju/Android/evox/kernel/motorola/sm7450-modules/qcom/opensource/datarmnet-ext/offload/rmnet_offload_stats.o):
