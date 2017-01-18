/*
 * am3517scepter.h - Header file for the AM3517 scepter.
 *
 * Author: Robert B. Calhoun
 *
 * Based on ti/am3517crane/am3517crane.h and old mux defs
 *
 * Copyright (C) 2017 SST
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _AM3517SCEPTER_H_
#define _AM3517SCEPTER_H_

const omap3_sysinfo sysinfo = {
	DDR_DISCRETE,
	"Scepter",
	"NAND",
};

/*
 * IEN  - Input Enable
 * IDIS - Input Disable
 * PTD  - Pull type Down
 * PTU  - Pull type Up
 * DIS  - Pull type selection is inactive
 * EN   - Pull type selection is active
 * M0   - Mode 0
 * The commented string gives the final mux configuration for that pin
 */


#define MUX_AM3517SCEPTER() \
MUX_VAL(CP(CCDC_DATA0), (IEN | PTU | EN | M4 )) /* gpio_99, SD_CARD1_DET*/\
MUX_VAL(CP(CCDC_DATA1), (IEN | PTU | DIS | M4 )) /* gpio_100, 4356_GOOD*/\
MUX_VAL(CP(CCDC_DATA2), (IDIS | PTD | DIS | M4 )) /* gpio_101, CPU_AMUX_INHB*/\
MUX_VAL(CP(CCDC_DATA3), (IDIS | PTD | DIS | M4 )) /* gpio_102, CPU_AMUX_A0*/\
MUX_VAL(CP(CCDC_DATA4), (IDIS | PTD | DIS | M4 )) /* gpio_103, CPU_AMUX_A1*/\
MUX_VAL(CP(CCDC_DATA5), (IDIS | PTD | DIS | M4 )) /* gpio_104, CPU_AMUX_A2*/\
MUX_VAL(CP(CCDC_DATA6), (IDIS | PTD | DIS | M4 )) /* gpio_105, CPU_AMUX_A3*/\
MUX_VAL(CP(CCDC_DATA7), (IDIS | PTD | DIS | M4 )) /* gpio_106, CPU_ENABLE_ADC_CLK*/\
MUX_VAL(CP(CCDC_FIELD), (IDIS | PTD | DIS | M2 )) /* uart4_tx, GPS_RXD*/\
MUX_VAL(CP(CCDC_HD), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(CCDC_PCLK), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(CCDC_VD), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(CCDC_WEN), (IEN | PTD | DIS | M2 )) /* uart4_rx, GPS_TXD*/\
MUX_VAL(CP(DSS_ACBIAS), (IEN | PTU | EN | M4 )) /* gpio_69, CPLD_REV2*/\
MUX_VAL(CP(DSS_DATA0), (IEN | PTD | EN | M4 )) /* gpio_70, CPU_ADC_HEAT_LFT*/\
MUX_VAL(CP(DSS_DATA1), (IEN | PTD | EN | M4 )) /* gpio_71, CPU_ADC_HEAT_RGT*/\
MUX_VAL(CP(DSS_DATA2), (IDIS | PTD | DIS | M4 )) /* gpio_72, CPU_AMUX_A4*/\
MUX_VAL(CP(DSS_DATA3), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(DSS_DATA4), (IDIS | PTD | DIS | M4 )) /* gpio_74, CPU_USB_SPEED*/\
MUX_VAL(CP(DSS_DATA5), (IDIS | PTD | DIS | M4 )) /* gpio_75, CPU_SOFTCON*/\
MUX_VAL(CP(DSS_DATA6), (IEN | PTU | EN | M4 )) /* gpio_76, CPLD_HEARTBEAT*/\
MUX_VAL(CP(DSS_DATA7), (IEN | PTD | EN | M7 )) /* gpio_77, WP_EEPROM*/\
MUX_VAL(CP(DSS_DATA8), (IDIS | PTD | DIS | M4 )) /* gpio_78, CPU_TP3*/\
MUX_VAL(CP(DSS_DATA9), (IEN | PTU | EN | M4 )) /* gpio_79, SHTDWN_FLAG*/\
MUX_VAL(CP(DSS_DATA10), (IEN | PTU | EN | M4 )) /* gpio_80, SW0*/\
MUX_VAL(CP(DSS_DATA11), (IEN | PTU | EN | M4 )) /* gpio_81, SW1*/\
MUX_VAL(CP(DSS_DATA12), (IEN | PTU | EN | M7 )) /* gpio_82, NC*/\
MUX_VAL(CP(DSS_DATA13), (IEN | PTU | EN | M7 )) /* gpio_83, NC*/\
MUX_VAL(CP(DSS_DATA14), (IDIS | PTD | DIS | M4 )) /* gpio_84, CPU_CNTR_RST*/\
MUX_VAL(CP(DSS_DATA15), (IDIS | PTD | DIS | M7 )) /* gpio_85, NC*/\
MUX_VAL(CP(DSS_DATA16), (IDIS | PTD | DIS | M7 )) /* gpio_86, NC*/\
MUX_VAL(CP(DSS_DATA17), (IDIS | PTD | DIS | M7 )) /* gpio_87, NC*/\
MUX_VAL(CP(DSS_DATA18), (IEN | PTD | DIS | M4 )) /* gpio_88, BD_REV2*/\
MUX_VAL(CP(DSS_DATA19), (IEN | PTD | DIS | M4 )) /* gpio_89, BD_REV3*/\
MUX_VAL(CP(DSS_DATA20), (IDIS | PTD | DIS | M7 )) /* gpio_90, NC*/\
MUX_VAL(CP(DSS_DATA21), (IDIS | PTD | DIS | M4 )) /* gpio_91, CPU_TP0*/\
MUX_VAL(CP(DSS_DATA22), (IDIS | PTD | DIS | M4 )) /* gpio_92, CPU_TP1*/\
MUX_VAL(CP(DSS_DATA23), (IDIS | PTD | DIS | M4 )) /* gpio_93, CPU_TP2*/\
MUX_VAL(CP(DSS_HSYNC), (IEN | PTD | EN | M4 )) /* gpio_67, CPLD_REV0*/\
MUX_VAL(CP(DSS_PCLK), (IEN | PTU | EN | M4 )) /* gpio_66, CPU_FORCE_SHTDWN*/\
MUX_VAL(CP(DSS_VSYNC), (IEN | PTD | EN | M4 )) /* gpio_68, CPLD_REV1*/\
MUX_VAL(CP(ETK_CLK_ES2), (IEN | PTD | DIS | M4 )) /* gpio_12, NC*/\
MUX_VAL(CP(ETK_CTL_ES2), (IEN | PTD | DIS | M4 )) /* gpio_13, NC*/\
MUX_VAL(CP(ETK_D0_ES2), (IEN | PTD | EN | M5 )) /* mm_fsusb1_rxrcv, CPU_MM_FSUSB1_RXRCV*/\
MUX_VAL(CP(ETK_D1_ES2), (IEN | PTD | DIS | M5 )) /* mm_fsusb1_txse0, CPU_MM_FSUSB1_TXSE0*/\
MUX_VAL(CP(ETK_D2_ES2), (IEN | PTD | EN | M5 )) /* mm_fsusb1_txdat, CPU_MM_FSUSB1_TXDAT*/\
MUX_VAL(CP(ETK_D3_ES2), (IEN | PTD | DIS | M4 )) /* gpio_17, NC*/\
MUX_VAL(CP(ETK_D4_ES2), (IEN | PTD | DIS | M4 )) /* gpio_18, NC*/\
MUX_VAL(CP(ETK_D5_ES2), (IEN | PTD | DIS | M4 )) /* gpio_19, NC*/\
MUX_VAL(CP(ETK_D6_ES2), (IEN | PTD | DIS | M4 )) /* gpio_20, NC*/\
MUX_VAL(CP(ETK_D7_ES2), (IEN | PTD | DIS | M5 )) /* mm_fsusb1_txen_n, CPU_MM_FSUSB1_TXEN_N*/\
MUX_VAL(CP(ETK_D8_ES2), (IEN | PTD | DIS | M4 )) /* gpio_22, NC*/\
MUX_VAL(CP(ETK_D9_ES2), (IEN | PTD | DIS | M4 )) /* gpio_23, NC*/\
MUX_VAL(CP(ETK_D10_ES2), (IEN | PTD | DIS | M4 )) /* gpio_24, NC*/\
MUX_VAL(CP(ETK_D11_ES2), (IEN | PTD | DIS | M4 )) /* gpio_25, NC*/\
MUX_VAL(CP(ETK_D12_ES2), (IEN | PTD | DIS | M4 )) /* gpio_26, NC*/\
MUX_VAL(CP(ETK_D13_ES2), (IEN | PTD | DIS | M4 )) /* gpio_27, NC*/\
MUX_VAL(CP(ETK_D14_ES2), (IEN | PTD | DIS | M4 )) /* gpio_28, NC*/\
MUX_VAL(CP(ETK_D15_ES2), (IEN | PTD | DIS | M4 )) /* gpio_29, NC*/\
MUX_VAL(CP(GPMC_A1), (IDIS | PTD | DIS | M4 )) /* gpio_34, GPS_PWRON*/\
MUX_VAL(CP(GPMC_A2), (IDIS | PTD | DIS | M4 )) /* gpio_35, GPS_RST*/\
MUX_VAL(CP(GPMC_A3), (IDIS | PTD | DIS | M4 )) /* gpio_36, RELAY*/\
MUX_VAL(CP(GPMC_A4), (IEN | PTD | EN | M4 )) /* gpio_37, HEAT_3304*/\
MUX_VAL(CP(GPMC_A5), (IEN | PTU | EN | M4 )) /* gpio_38, 3810_POWER_GOOD*/\
MUX_VAL(CP(GPMC_A6), (IEN | PTD | EN | M4 )) /* gpio_39, 4356_LOW_VOLTAGE*/\
MUX_VAL(CP(GPMC_A7), (IEN | PTD | EN | M4 )) /* gpio_40, 4356_FAULT*/\
MUX_VAL(CP(GPMC_A8), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(GPMC_A9), (IDIS | PTD | DIS | M4 )) /* gpio_42, CPU_LED_1*/\
MUX_VAL(CP(GPMC_A10), (IDIS | PTD | DIS | M4 )) /* gpio_43, CPU_LED_2*/\
MUX_VAL(CP(GPMC_CLK), (IDIS | PTD | DIS | M0 )) /* gpmc_clk, NC*/\
MUX_VAL(CP(GPMC_D0), (IEN | PTU | EN | M0 )) /* gpmc_d0, CPU_GPMC_D0*/\
MUX_VAL(CP(GPMC_D1), (IEN | PTU | EN | M0 )) /* gpmc_d1, CPU_GPMC_D1*/\
MUX_VAL(CP(GPMC_D2), (IEN | PTU | EN | M0 )) /* gpmc_d2, CPU_GPMC_D2*/\
MUX_VAL(CP(GPMC_D3), (IEN | PTU | EN | M0 )) /* gpmc_d3, CPU_GPMC_D3*/\
MUX_VAL(CP(GPMC_D4), (IEN | PTU | EN | M0 )) /* gpmc_d4, CPU_GPMC_D4*/\
MUX_VAL(CP(GPMC_D5), (IEN | PTU | EN | M0 )) /* gpmc_d5, CPU_GPMC_D5*/\
MUX_VAL(CP(GPMC_D6), (IEN | PTU | EN | M0 )) /* gpmc_d6, CPU_GPMC_D6*/\
MUX_VAL(CP(GPMC_D7), (IEN | PTU | EN | M0 )) /* gpmc_d7, CPU_GPMC_D7*/\
MUX_VAL(CP(GPMC_D8), (IEN | PTU | EN | M0 )) /* gpmc_d8, CPU_GPMC_D8*/\
MUX_VAL(CP(GPMC_D9), (IEN | PTU | EN | M0 )) /* gpmc_d9, CPU_GPMC_D9*/\
MUX_VAL(CP(GPMC_D10), (IEN | PTU | EN | M0 )) /* gpmc_d10, CPU_GPMC_D10*/\
MUX_VAL(CP(GPMC_D11), (IEN | PTU | EN | M0 )) /* gpmc_d11, CPU_GPMC_D11*/\
MUX_VAL(CP(GPMC_D12), (IEN | PTU | EN | M0 )) /* gpmc_d12, CPU_GPMC_D12*/\
MUX_VAL(CP(GPMC_D13), (IEN | PTU | EN | M0 )) /* gpmc_d13, CPU_GPMC_D13*/\
MUX_VAL(CP(GPMC_D14), (IEN | PTU | EN | M0 )) /* gpmc_d14, CPU_GPMC_D14*/\
MUX_VAL(CP(GPMC_D15), (IEN | PTU | EN | M0 )) /* gpmc_d15, CPU_GPMC_D15*/\
MUX_VAL(CP(GPMC_NADV_ALE), (IDIS | PTD | DIS | M0 )) /* gpmc_nadv_ale, CPU_GPMC_NAVD_ALE*/\
MUX_VAL(CP(GPMC_NBE0_CLE), (IDIS | PTU | EN | M0 )) /* gpmc_nbe0_cle, CPU_GPMC_NBE0_CLE*/\
MUX_VAL(CP(GPMC_NBE1), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(GPMC_NCS0), (IDIS | PTU | EN | M0 )) /* gpmc_ncs0, CPU_GPMC_NCS0*/\
MUX_VAL(CP(GPMC_NCS1), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(GPMC_NCS2), (IDIS | PTD | DIS | M4 )) /* gpio_53, GSM_WDIS*/\
MUX_VAL(CP(GPMC_NCS3), (IDIS | PTD | DIS | M4 )) /* gpio_54, GSM_3304_ON*/\
MUX_VAL(CP(GPMC_NCS4), (IDIS | PTD | DIS | M4 )) /* gpio_55, GSM_PWRON*/\
MUX_VAL(CP(GPMC_NCS5), (IDIS | PTD | DIS | M4 )) /* gpio_56, 1V8AR_PWRON*/\
MUX_VAL(CP(GPMC_NCS6), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(GPMC_NCS7), (IEN | PTD | EN | M4 )) /* gpio_58, ETHERNET_IRQ_N*/\
MUX_VAL(CP(GPMC_NOE), (IDIS | PTD | DIS | M0 )) /* gpmc_noe, CPU_GPMC_NOE*/\
MUX_VAL(CP(GPMC_NWE), (IDIS | PTD | DIS | M0 )) /* gpmc_nwe, CPU_GPMC_NWE*/\
MUX_VAL(CP(GPMC_NWP), (IDIS | PTD | DIS | M0 )) /* gpmc_nwp, CPU_GPMC_NWP*/\
MUX_VAL(CP(GPMC_WAIT0), (IEN | PTU | EN | M0 )) /* gpmc_wait0, CPU_GPMC_WAIT0*/\
MUX_VAL(CP(GPMC_WAIT1), (IEN | PTD | EN | M4 )) /* gpio_63, GSM_TXON*/\
MUX_VAL(CP(GPMC_WAIT2), (IEN | PTD | EN | M4 )) /* gpio_64, GSM_HWR*/\
MUX_VAL(CP(GPMC_WAIT3), (IDIS | PTD | DIS | M4 )) /* gpio_65, CPU_ETHERNET_RST_N*/\
MUX_VAL(CP(HDQ_SIO), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(HECC1_RXD), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(HECC1_TXD), (IEN | PTU | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(I2C1_SCL), (IEN | PTU | EN | M0 )) /* i2c1_scl, CPU_I2C1_SCL*/\
MUX_VAL(CP(I2C1_SDA), (IEN | PTU | EN | M0 )) /* i2c1_sda, CPU_I2C1_SDA*/\
MUX_VAL(CP(I2C2_SCL), (IEN | PTU | EN | M0 )) /* i2c2_scl, CPU_I2C2_SCL*/\
MUX_VAL(CP(I2C2_SDA), (IEN | PTU | EN | M0 )) /* i2c2_sda, CPU_I2C2_SDA*/\
MUX_VAL(CP(I2C3_SCL), (IEN | PTU | EN | M7 )) /* i2c3_scl, CPU_I2C2_SCL*/\
MUX_VAL(CP(I2C3_SDA), (IEN | PTU | EN | M7 )) /* i2c3_sda, CPU_I2C3_SDA*/\
MUX_VAL(CP(JTAG_EMU0), (IEN | PTD | DIS | M0 )) /* jtag_emu0, CPU_JTAG_EMU0*/\
MUX_VAL(CP(JTAG_EMU1), (IEN | PTD | DIS | M0 )) /* jtag_emu1, CPU_JTAG_EMU1*/\
MUX_VAL(CP(JTAG_TCK), (IEN | PTD | DIS | M0 )) /* jtag_tck, CPU_JTAG_TCK*/\
MUX_VAL(CP(JTAG_TDI), (IEN | PTD | DIS | M0 )) /* jtag_tdi, CPU_JTAG_TDI*/\
MUX_VAL(CP(JTAG_TMS), (IEN | PTD | DIS | M0 )) /* jtag_tms_tmsc, CPU_JTAG_TMS_TMSC*/\
MUX_VAL(CP(MCBSP_CLKS), (IEN | PTD | DIS | M0 )) /* mcbsp_clks, ADC_MCLK*/\
MUX_VAL(CP(MCBSP1_CLKR), (IEN | PTD | DIS | M0 )) /* mcbsp1_clkr, ADC_BCLK_1*/\
MUX_VAL(CP(MCBSP1_CLKX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP1_DR), (IEN | PTD | DIS | M0 )) /* mcbsp1_dr, ADCDAT_L*/\
MUX_VAL(CP(MCBSP1_DX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP1_FSR), (IEN | PTU | EN | M0 )) /* mcbsp1_fsr, FRAME_SYNC*/\
MUX_VAL(CP(MCBSP1_FSX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP2_CLKX), (IEN | PTD | DIS | M0 )) /* mcbsp2_clkx, ADC_BCLK_1*/\
MUX_VAL(CP(MCBSP2_DR), (IEN | PTD | DIS | M0 )) /* mcbsp2_dr, ADCDAT_R*/\
MUX_VAL(CP(MCBSP2_DX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP2_FSX), (IEN | PTD | DIS | M0 )) /* mcbsp2_fsx, FRAME_SYNC*/\
MUX_VAL(CP(MCBSP3_CLKX), (IEN | PTD | DIS | M0 )) /* mcbsp3_clkx, ADC_BCLK1*/\
MUX_VAL(CP(MCBSP3_DR), (IEN | PTD | DIS | M0 )) /* mcbsp3_dr, GPS_1PPS*/\
MUX_VAL(CP(MCBSP3_DX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP3_FSX), (IEN | PTD | DIS | M0 )) /* mcbsp3_fsx, FRAME_SYNC*/\
MUX_VAL(CP(MCBSP4_CLKX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP4_DR), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP4_DX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCBSP4_FSX), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI1_CLK), (IEN | PTD | DIS | M0 )) /* mcspi1_clk, CPU_MCSPI1_CLK*/\
MUX_VAL(CP(MCSPI1_CS0), (IEN | PTD | EN | M0 )) /* mcspi1_cs0, CPU_MCSPI_CS0*/\
MUX_VAL(CP(MCSPI1_CS1), (IEN | PTD | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI1_CS2), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI1_CS3), (IEN | PTD | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI1_SIMO), (IEN | PTD | DIS | M0 )) /* mcspi1_simo, TP28_SPI1_SIMO*/\
MUX_VAL(CP(MCSPI1_SOMI), (IEN | PTD | DIS | M0 )) /* mcspi1_somi, CPU_MCSPI1_SOMI*/\
MUX_VAL(CP(MCSPI2_CLK), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI2_CS0), (IEN | PTD | EN | M7 )) /* gpt11_pwm_evt, FRAME_SYNC_8192*/\
MUX_VAL(CP(MCSPI2_CS1), (IEN | PTD | EN | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI2_SIMO), (IEN | PTD | DIS | M7 )) /* safe_mode, NC*/\
MUX_VAL(CP(MCSPI2_SOMI), (IEN | PTD | DIS | M7 )) /* gpt10_pwm_evt, GPS_1PPS*/\
MUX_VAL(CP(MMC1_CLK),  (IEN | PTU | EN | M0 )) /* mmc1_clk, CPU_MMC1_CLK*/\
MUX_VAL(CP(MMC1_CMD),  (IEN | PTU | DIS | M0 )) /* mmc1_cmd, CPU_MMC1_CMD*/\
MUX_VAL(CP(MMC1_DAT0), (IEN | PTU | DIS | M0 )) /* mmc1_dat0, CPU_MMC1_DAT0*/\
MUX_VAL(CP(MMC1_DAT1), (IEN | PTU | DIS | M0 )) /* mmc1_dat1, CPU_MMC1_DAT1*/\
MUX_VAL(CP(MMC1_DAT2), (IEN | PTU | DIS | M0 )) /* mmc1_dat2, CPU_MMC1_DAT2*/\
MUX_VAL(CP(MMC1_DAT3), (IEN | PTU | DIS | M0 )) /* mmc1_dat3, CPU_MMC1_DAT3*/\
MUX_VAL(CP(MMC1_DAT4), (IEN | PTD | EN | M4 )) /* gpio_126, BD_REV0*/\
MUX_VAL(CP(MMC1_DAT5), (IEN | PTD | EN | M4 )) /* gpio_127, BD_REV1*/\
MUX_VAL(CP(MMC1_DAT6), (IDIS | PTD | DIS | M4 )) /* gpio_128, CPU_PWRON_ADC*/\
MUX_VAL(CP(MMC1_DAT7), (IEN | PTD | EN | M4 )) /* gpio_129, INTR_CARD_DET*/\
MUX_VAL(CP(MMC2_CLK),  (IEN | PTU | EN | M0 )) /* mmc2_clk, CPU_MMC2_CLK*/\
MUX_VAL(CP(MMC2_CMD),  (IEN | PTU | DIS | M0 )) /* mmc2_cmd, CPU_MMC2_CMD*/\
MUX_VAL(CP(MMC2_DAT0), (IEN | PTU | DIS | M0 )) /* mmc2_dat0, CPU_MMC2_DAT0*/\
MUX_VAL(CP(MMC2_DAT1), (IEN | PTU | DIS | M0 )) /* mmc2_dat1, CPU_MMC2_DAT1*/\
MUX_VAL(CP(MMC2_DAT2), (IEN | PTU | DIS | M0 )) /* mmc2_dat2, CPU_MMC2_DAT2*/\
MUX_VAL(CP(MMC2_DAT3), (IEN | PTU | DIS | M0 )) /* mmc2_dat3, CPU_MMC2_DAT3*/\
MUX_VAL(CP(MMC2_DAT4), (IDIS | PTD | EN | M1 )) /* HY-DBG: MMC2_DIR_DAT0 gpio_136, BD_REV2*/\
MUX_VAL(CP(MMC2_DAT5), (IDIS | PTD | EN | M1 )) /* HY-DBG: MMC2_DIR_DAT1 gpio_137, BD_REV3*/\
MUX_VAL(CP(MMC2_DAT6), (IDIS | PTU | EN | M1 )) /* HY-DBG: MMC2_DIR_CMD gpio_138, SD_CARD2_DET*/ \
MUX_VAL(CP(MMC2_DAT7), (IEN | PTU | EN | M1 )) /* mmc2_clkin, MMC2_CLKIN*/\
MUX_VAL(CP(RMII_50MHZ_CLK), (IEN | PTD | EN | M0 )) /* rmii_50mhz_clk, RMII_50MHZ_CLK*/\
MUX_VAL(CP(RMII_CRS_DV), (IEN | PTD | DIS | M0 )) /* rmii_crs_dv, CPU_RMII_CRS_DV*/\
MUX_VAL(CP(RMII_MDIO_CLK), (IDIS | PTD | DIS | M0 )) /* rmii_mdio_clk, CPU_RMII_MDIO_CLK*/\
MUX_VAL(CP(RMII_MDIO_DATA), (IEN | PTD | DIS | M0 )) /* rmii_mdio_data, CPU_RMII_MDIO_DATA*/\
MUX_VAL(CP(RMII_RXD0), (IEN | PTD | DIS | M0 )) /* rmii_rxd0, CPU_RMII_RXD0*/\
MUX_VAL(CP(RMII_RXD1), (IEN | PTD | DIS | M0 )) /* rmii_rxd1, CPU_RMII_RXD1*/\
MUX_VAL(CP(RMII_RXER), (IDIS | PTD | DIS | M0 )) /* rmii_rxer, CPU_RMII_RXER*/\
MUX_VAL(CP(RMII_TXD0), (IDIS | PTD | DIS | M0 )) /* rmii_txd0, CPU_RMII_TXD0*/\
MUX_VAL(CP(RMII_TXD1), (IDIS | PTD | DIS | M0 )) /* rmii_txd1, CPU_RMII_TXD1*/\
MUX_VAL(CP(RMII_TXEN), (IDIS | PTD | DIS | M0 )) /* rmii_txen, CPU_RMII_TXEN*/\
MUX_VAL(CP(SDRC_CKE0), (IDIS | PTD | DIS | M0 )) /* sdrc_cke0, CPU_DSRC_SKE0*/\
MUX_VAL(CP(SDRC_CLK), (IEN | PTD | DIS | M0 )) /* sdrc_clk, CPU_SDRC_CLK*/\
MUX_VAL(CP(SDRC_D0), (IEN | PTD | DIS | M0 )) /* sdrc_d0, CPU_SDRC_D0*/\
MUX_VAL(CP(SDRC_D1), (IEN | PTD | DIS | M0 )) /* sdrc_d1, CPU_SDRC_D1*/\
MUX_VAL(CP(SDRC_D2), (IEN | PTD | DIS | M0 )) /* sdrc_d2, CPU_SDRC_D2*/\
MUX_VAL(CP(SDRC_D3), (IEN | PTD | DIS | M0 )) /* sdrc_d3, CPU_SDRC_D3*/\
MUX_VAL(CP(SDRC_D4), (IEN | PTD | DIS | M0 )) /* sdrc_d4, CPU_SDRC_D4*/\
MUX_VAL(CP(SDRC_D5), (IEN | PTD | DIS | M0 )) /* sdrc_d5, CPU_SDRC_D5*/\
MUX_VAL(CP(SDRC_D6), (IEN | PTD | DIS | M0 )) /* sdrc_d6, CPU_SDRC_D6*/\
MUX_VAL(CP(SDRC_D7), (IEN | PTD | DIS | M0 )) /* sdrc_d7, CPU_SDRC_D7*/\
MUX_VAL(CP(SDRC_D8), (IEN | PTD | DIS | M0 )) /* sdrc_d8, CPU_SDRC_D8*/\
MUX_VAL(CP(SDRC_D9), (IEN | PTD | DIS | M0 )) /* sdrc_d9, CPU_SDRC_D9*/\
MUX_VAL(CP(SDRC_D10), (IEN | PTD | DIS | M0 )) /* sdrc_d10, CPU_SDRC_D10*/\
MUX_VAL(CP(SDRC_D11), (IEN | PTD | DIS | M0 )) /* sdrc_d11, CPU_SDRC_D11*/\
MUX_VAL(CP(SDRC_D12), (IEN | PTD | DIS | M0 )) /* sdrc_d12, CPU_SDRC_D12*/\
MUX_VAL(CP(SDRC_D13), (IEN | PTD | DIS | M0 )) /* sdrc_d13, CPU_SDRC_D13*/\
MUX_VAL(CP(SDRC_D14), (IEN | PTD | DIS | M0 )) /* sdrc_d14, CPU_SDRC_D14*/\
MUX_VAL(CP(SDRC_D15), (IEN | PTD | DIS | M0 )) /* sdrc_d15, CPU_SDRC_D15*/\
MUX_VAL(CP(SDRC_D16), (IEN | PTD | DIS | M0 )) /* sdrc_d16, CPU_SDRC_D16*/\
MUX_VAL(CP(SDRC_D17), (IEN | PTD | DIS | M0 )) /* sdrc_d17, CPU_SDRC_D17*/\
MUX_VAL(CP(SDRC_D18), (IEN | PTD | DIS | M0 )) /* sdrc_d18, CPU_SDRC_D18*/\
MUX_VAL(CP(SDRC_D19), (IEN | PTD | DIS | M0 )) /* sdrc_d19, CPU_SDRC_D19*/\
MUX_VAL(CP(SDRC_D20), (IEN | PTD | DIS | M0 )) /* sdrc_d20, CPU_SDRC_D20*/\
MUX_VAL(CP(SDRC_D21), (IEN | PTD | DIS | M0 )) /* sdrc_d21, CPU_SDRC_D21*/\
MUX_VAL(CP(SDRC_D22), (IEN | PTD | DIS | M0 )) /* sdrc_d22, CPU_SDRC_D22*/\
MUX_VAL(CP(SDRC_D23), (IEN | PTD | DIS | M0 )) /* sdrc_d23, CPU_SDRC_D23*/\
MUX_VAL(CP(SDRC_D24), (IEN | PTD | DIS | M0 )) /* sdrc_d24, CPU_SDRC_D24*/\
MUX_VAL(CP(SDRC_D25), (IEN | PTD | DIS | M0 )) /* sdrc_d25, CPU_SDRC_D25*/\
MUX_VAL(CP(SDRC_D26), (IEN | PTD | DIS | M0 )) /* sdrc_d26, CPU_SDRC_D26*/\
MUX_VAL(CP(SDRC_D27), (IEN | PTD | DIS | M0 )) /* sdrc_d27, CPU_SDRC_D27*/\
MUX_VAL(CP(SDRC_D28), (IEN | PTD | DIS | M0 )) /* sdrc_d28, CPU_SDRC_D28*/\
MUX_VAL(CP(SDRC_D29), (IEN | PTD | DIS | M0 )) /* sdrc_d29, CPU_SDRC_D29*/\
MUX_VAL(CP(SDRC_D30), (IEN | PTD | DIS | M0 )) /* sdrc_d30, CPU_SDRC_D30*/\
MUX_VAL(CP(SDRC_D31), (IEN | PTD | DIS | M0 )) /* sdrc_d31, CPU_SDRC_D31*/\
MUX_VAL(CP(SDRC_DQS0N), (IEN | PTD | EN | M0 )) /* sdrc_dqs0n, GND*/\
MUX_VAL(CP(SDRC_DQS0), (IEN | PTD | DIS | M0 )) /* sdrc_dqs0p, CPU_SDRC_DQS0*/\
MUX_VAL(CP(SDRC_DQS1N), (IEN | PTD | EN | M0 )) /* sdrc_dqs1n, GND*/\
MUX_VAL(CP(SDRC_DQS1), (IEN | PTD | DIS | M0 )) /* sdrc_dqs1p, CPU_SDRC_DQS1*/\
MUX_VAL(CP(SDRC_DQS2N), (IEN | PTD | EN | M0 )) /* sdrc_dqs2n, GND*/\
MUX_VAL(CP(SDRC_DQS2), (IEN | PTD | DIS | M0 )) /* sdrc_dqs2p, CPU_SDRC_DQS2*/\
MUX_VAL(CP(SDRC_DQS3N), (IEN | PTD | EN | M0 )) /* sdrc_dqs3n, GND*/\
MUX_VAL(CP(SDRC_DQS3), (IEN | PTD | DIS | M0 )) /* sdrc_dqs3p, CPU_SDRC_DQS3*/\
MUX_VAL(CP(STRBEN_DLY0), (IEN | PTD | DIS | M0 )) /* sdrc_strben_dly0, NC*/\
MUX_VAL(CP(STRBEN_DLY1), (IEN | PTD | DIS | M0 )) /* sdrc_strben_dly1, NC*/\
MUX_VAL(CP(SYS_32K), (IEN | PTD | DIS | M0 )) /* sys_32k, CPU_CLK32K*/\
MUX_VAL(CP(SYS_BOOT0), (IEN | PTD | DIS | M0 )) /* sys_boot0, CPU_SYS_BOOT0*/\
MUX_VAL(CP(SYS_BOOT1), (IEN | PTD | DIS | M0 )) /* sys_boot1, CPU_SYS_BOOT1*/\
MUX_VAL(CP(SYS_BOOT2), (IEN | PTD | DIS | M0 )) /* sys_boot2, CPU_SYS_BOOT2*/\
MUX_VAL(CP(SYS_BOOT3), (IEN | PTD | DIS | M0 )) /* sys_boot3, CPU_SYS_BOOT3 */\
MUX_VAL(CP(SYS_BOOT4), (IEN | PTD | DIS | M0 )) /* sys_boot4, CPU_SYS_BOOT4 */\
MUX_VAL(CP(SYS_BOOT5), (IEN | PTD | DIS | M0 )) /* sys_boot5, CPU_SYS_BOOT5 */\
MUX_VAL(CP(SYS_BOOT6), (IEN | PTD | DIS | M0 )) /* sys_boot6, CPU_SYS_BOOT6 */\
MUX_VAL(CP(SYS_BOOT7), (IEN | PTD | DIS | M0 )) /* sys_boot7, CPU_SYS_BOOT7 */\
MUX_VAL(CP(SYS_BOOT8), (IEN | PTD | DIS | M0 )) /* sys_boot8, CPU_SYS_BOOT8 */\
MUX_VAL(CP(SYS_CLKOUT1), (IEN | PTD | DIS | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(SYS_CLKOUT2), (IEN | PTU | EN | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(SYS_CLKREQ), (IEN | PTD | DIS | M4 )) /* gpio_1, SLEEP */\
MUX_VAL(CP(SYS_NIRQ), (IEN | PTU | EN | M0 )) /* sys_nirq, NIRQ */\
MUX_VAL(CP(SYS_NRESWARM), (IEN | PTD | DIS | M0 )) /* sys_nreswarm, WARM_NRST */\
MUX_VAL(CP(UART1_CTS), (IEN | PTD | DIS | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(UART1_RTS), (IEN | PTD | DIS | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(UART1_RX), (IEN | PTD | DIS | M0 )) /* uart1_rx, GSM_TX0_CPU */\
MUX_VAL(CP(UART1_TX), (IDIS | PTD | DIS | M0 )) /* uart1_tx, GSM_RX0_CPU */\
MUX_VAL(CP(UART2_CTS), (IEN | PTU | EN | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(UART2_RTS), (IEN | PTD | DIS | M7 )) /* safe_mode, NC */\
MUX_VAL(CP(UART2_RX), (IEN | PTD | DIS | M0 )) /* uart2_rx, GSM_TX1_CPU */\
MUX_VAL(CP(UART2_TX), (IDIS | PTD | DIS | M0 )) /* uart2_tx, GSM_RX1_CPU */\
MUX_VAL(CP(UART3_CTS_RCTX), (IEN | PTD | DIS | M0 )) /* uart3_cts_rctx, CPU_UART3_CTS */\
MUX_VAL(CP(UART3_RTS_SD), (IDIS | PTD | DIS | M0 )) /* uart3_rts_sd, CPU_UART3_RTS */\
MUX_VAL(CP(UART3_RX_IRRX), (IEN | PTD | DIS | M0 )) /* uart3_rx_irrx, CPU_UART3_RX */\
MUX_VAL(CP(UART3_TX_IRTX), (IDIS | PTD | DIS | M0 )) /* uart3_tx_irtx, CPU_UART3_TX */\
MUX_VAL(CP(USB0_DRVBUS), (IDIS | PTD | EN | M0 )) /* usb0_drvvbus, CPU_USB0_DRVVBUS */\

#endif
