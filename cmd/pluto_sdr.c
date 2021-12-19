#include <common.h>
#include <command.h>
#include <asm/io.h>

/* -------------------------------------------------------------------- */
//TODO: Add Init functions code here.
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
static int do_pluto_sdr_init(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

  udelay(1000);
  printf("\nPluto SDR Extension Init done. --------------\n");

  return 0; // success
}
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
U_BOOT_CMD(
    pluto_sdr_init, 1, 0, do_pluto_sdr_init,
    "initialize Pluto SDR hardware",
    "Implements Pluto SDR hardware init"
    );
/* -------------------------------------------------------------------- */


