#include <common.h>
#include <command.h>
#include <asm/io.h>

static int do_ultra96v1_init(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
  printf("Ultra96v1 HW init ...\n");
  printf("\nUltra96v1 HW init done. --------------\n");

  return 0; // success
}

/* -------------------------------------------------------------------- */

U_BOOT_CMD(
    ultra96v1_init, 1, 0, do_ultra96v1_init,
    "initialize Ultra96v1 hardware",
    "Implements Ultra96v1 hardware init"
    );

