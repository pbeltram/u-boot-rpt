
#ifndef __CONFIG_ZYNQ_PLUTO_SDR_H
#define __CONFIG_ZYNQ_PLUTO_SDR_H

#include <configs/zynq-common.h>

/*platform-auto.h include start*/

/*platform-auto.h include stop*/

#ifdef CONFIG_PREBOOT
#undef CONFIG_PREBOOT
#endif
#define CONFIG_PREBOOT "echo U-BOOT for Pluto SDR; pluto_sdr_init;" \
  "echo Look for ENV from FSBL shared area at 0xFFFFFC00; " \
  "if itest *0xFFFFFC00 == 0xCAFEBABE; then echo Found valid ENV FSBL magic; " \
  "env import -t 0xFFFFFC04; fi;setenv preboot; echo; dhcp"

#endif /* __CONFIG_ZYNQ_PLUTO_SDR_H */

