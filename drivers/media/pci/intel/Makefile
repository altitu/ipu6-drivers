##include <linux/spi/spi.h>
 SPDX-License-Identifier: GPL-2.0
# Copyright (c) 2010 - 2020 Intel Corporation.

# force check the compile warning to make sure zero warnings
# note we may have build issue when gcc upgraded.
subdir-ccflags-y := -Wall -Wextra
subdir-ccflags-y += $(call cc-disable-warning, unused-parameter)
subdir-ccflags-y += $(call cc-disable-warning, implicit-fallthrough)
subdir-ccflags-y += $(call cc-disable-warning, missing-field-initializers)
subdir-ccflags-y += $(call cc-disable-warning, type-limits)
subdir-ccflags-$(CONFIG_VIDEO_INTEL_IPU_WERROR) += -Werror

obj-$(CONFIG_VIDEO_INTEL_IPU6)	+= ipu6/
obj-m += drivers/pci/intel/spi_driver.o
