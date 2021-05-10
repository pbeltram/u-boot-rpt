
#ifndef __CONFIG_ULTRA96V1_H
#define __CONFIG_ULTRA96V1_H

#include <configs/xilinx_zynqmp.h>

#ifdef CONFIG_PREBOOT
#undef CONFIG_PREBOOT
#endif
#define CONFIG_PREBOOT	"echo U-BOOT for Ultra96v1; ultra96v1_init;" \
	"echo Try to import env from FSBL shared area at 0xFFFFFC00; " \
	"if itest *0xFFFFFC00 == 0xCAFEBABE; then echo Found valid magic in FSBL; " \
	"env import -t 0xFFFFFC04; fi;setenv preboot; echo"

/* BOOTCOMMAND */
#ifdef CONFIG_BOOTCOMMAND
#undef CONFIG_BOOTCOMMAND
#endif
#define CONFIG_BOOTCOMMAND	"run bootcmd_mmc0"

#endif /* __CONFIG_ULTRA96V1_H */
