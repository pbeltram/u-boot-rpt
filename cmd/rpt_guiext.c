#include <common.h>
#include <command.h>
#include <asm/io.h>

/* -------------------------------------------------------------------- */
//TODO: Add Init functions code here.
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
static int do_rpt_guiext_init(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

  udelay(1000);
  printf("\nRPT GUI Extension Init done. --------------\n");

  return 0; // success
}
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
U_BOOT_CMD(
    rpt_guiext_init, 1, 0, do_rpt_guiext_init,
    "initialize RPT hardware",
    "Implements a reset of hardware"
    );
/* -------------------------------------------------------------------- */

