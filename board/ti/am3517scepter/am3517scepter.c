/*
 * am3517scepter.c - board file for AM3517 Scepter
 *
 * Author: Robert B. Calhoun <rcalhoun@shotspotter.com>
 *
 * Based on ti/am3517crane/am3517crane.c
 *
 * Copyright (C) 2017 SST
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/mmc_host_def.h>
#include <asm/arch/mem.h>
#include <asm/arch/mux.h>
#include <asm/arch/sys_proto.h>
#include <asm/mach-types.h>
#include <linux/mtd/nand.h>
#include <i2c.h>
#include "am3517scepter.h"

DECLARE_GLOBAL_DATA_PTR;

/*
 * Routine: board_init
 * Description: Early hardware init.
 */
int board_init(void)
{
  printf("board_init\n");
	gpmc_init(); /* in SRAM or SDRAM, finish GPMC */
	/* board id for Linux */
	gd->bd->bi_arch_number = MACH_TYPE_SCEPTER;
	/* boot param addr */
	gd->bd->bi_boot_params = (OMAP34XX_SDRC_CS0 + 0x100);

	return 0;
}

/*
 * Routine: misc_init_r
 * Description: Init i2c, ethernet, etc... (done here so udelay works)
 */
int misc_init_r(void)
{
#ifdef CONFIG_SYS_I2C_OMAP34XX
	i2c_init(CONFIG_SYS_OMAP24_I2C_SPEED, CONFIG_SYS_OMAP24_I2C_SLAVE);
#endif

	omap_die_id_display();

	return 0;
}

/*
 * Routine: set_muxconf_regs
 * Description: Setting up the configuration Mux registers specific to the
 *		hardware. Many pins need to be moved from protect to primary
 *		mode.
 */
void set_muxconf_regs(void)
{
	MUX_AM3517SCEPTER();
}

#ifdef CONFIG_SPL_BUILD
/*
 * Routine: get_board_mem_timings
 * Description: If we use SPL then there is no x-loader nor config header
 * so we have to setup the DDR timings ourself on the first bank.  This
 * provides the timing values back to the function that configures
 * the memory.
 */
void get_board_mem_timings(struct board_sdrc_timings *timings)
{

	/*
	 * We need to identify what PoP memory is on the board so that
	 * we know what timings to use.  To map the ID values please see
	 * nand_ids.c
	 */

	/* 64MB DDR */
	timings->mcfg = MICRON_V_MCFG_165(64 << 20);
	timings->ctrla = MICRON_V_ACTIMA_165;
	timings->ctrlb = MICRON_V_ACTIMB_165;

	timings->rfr_ctrl = SDP_3430_SDRC_RFR_CTRL_165MHz;
	timings->mr = MICRON_V_MR_165;
}
#endif


#if defined(CONFIG_GENERIC_MMC) && !defined(CONFIG_SPL_BUILD)
int board_mmc_init(bd_t *bis)
{
	return omap_mmc_init(0, 0, 0, -1, -1);
	return omap_mmc_init(1, 0, 0, -1, -1);
	return 0;
}
#endif
