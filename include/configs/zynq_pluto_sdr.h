
#ifndef __CONFIG_ZYNQ_PLUTO_SDR_H
#define __CONFIG_ZYNQ_PLUTO_SDR_H

//#define CONFIG_ZYNQ_I2C0
//#define CONFIG_ZYNQ_EEPROM

/*platform-auto.h include start*/

/*platform-auto.h include stop*/

#include <configs/zynq-common.h>

#ifdef CONFIG_PREBOOT
#undef CONFIG_PREBOOT
#endif
#define CONFIG_PREBOOT	"echo U-BOOT for Pluto SDR; pluto_sdr_init;" \
	"echo importing env from FSBL shared area at 0xFFFFFC00; " \
	"if itest *0xFFFFFC00 == 0xCAFEBABE; then echo Found valid magic; " \
	"env import -t 0xFFFFFC04; fi;setenv preboot; echo; dhcp"

/* BOOTCOMMAND */
#ifdef CONFIG_BOOTCOMMAND
#undef CONFIG_BOOTCOMMAND
#endif
#define CONFIG_BOOTCOMMAND	"run default_bootcmd"

#endif /* __CONFIG_ZYNQ_PLUTO_SDR_H */

