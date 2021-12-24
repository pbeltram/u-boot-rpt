#include <common.h>
#include <command.h>
#include <asm/io.h>

/* -------------------------------------------------------------------- */
//TODO: Add Init functions code here.
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
static int do_pzsdr1_init(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{

  udelay(1000);
  printf("\nPicozed SDR Extension Init done. --------------\n");

  return 0; // success
}
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
U_BOOT_CMD(
    pzsdr1_init, 1, 0, do_pzsdr1_init,
    "initialize Picozed SDR hardware",
    "Implements Picozed SDR hardware init"
    );
/* -------------------------------------------------------------------- */


