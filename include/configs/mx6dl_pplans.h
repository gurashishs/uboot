/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the MX6DL SabreSD Freescale board.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <asm/arch/mx6.h>

 /* High Level Configuration Options */
#define CONFIG_MFG
#define CONFIG_ARMV7	/* This is armv7 Cortex-A9 CPU core */

#define CONFIG_MXC
#define CONFIG_MX6DL
#define CONFIG_MX6DL_DDR3
#define CONFIG_MX6DL_SABRESD
#define CONFIG_DDR_64BIT /* for DDR 64bit */
#define CONFIG_FLASH_HEADER
#define CONFIG_FLASH_HEADER_OFFSET 0x400
#define CONFIG_MX6_CLK32	   32768

#define CONFIG_SKIP_RELOCATE_UBOOT
#define CONFIG_L2_OFF  /* disable L2 cache first*/

#define CONFIG_ARCH_CPU_INIT
#undef CONFIG_ARCH_MMU /* disable MMU first */


#define CONFIG_MX6_HCLK_FREQ	24000000
#define CONFIG_DISPLAY_CPUINFO
#define CONFIG_DISPLAY_BOARDINFO

#define CONFIG_SYS_64BIT_VSPRINTF

#define BOARD_LATE_INIT

#define CONFIG_CMDLINE_TAG	/* enable passing of ATAGs */
#define CONFIG_SERIAL_TAG
#define CONFIG_REVISION_TAG
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG

#define CONFIG_MXC_GPIO

/*
 * Size of malloc() pool
 */
#define CONFIG_SYS_MALLOC_LEN		(2 * 1024 * 1024)
/* size in bytes reserved for initial data */
#define CONFIG_SYS_GBL_DATA_SIZE	128

/*
 * Hardware drivers
 */
#define CONFIG_MXC_UART
#define CONFIG_UART_BASE_ADDR   UART1_BASE_ADDR

/* allow to overwrite serial and ethaddr */
#define CONFIG_ENV_OVERWRITE
#define CONFIG_CONS_INDEX		1
#define CONFIG_BAUDRATE			115200
#define CONFIG_SYS_BAUDRATE_TABLE	{9600, 19200, 38400, 57600, 115200}

/***********************************************************
 * Command definition
 ***********************************************************/

#define CONFIG_CMD_BDI		/* bdinfo			*/
#define CONFIG_CMD_BOOTD	/* bootd			*/
#define CONFIG_CMD_CONSOLE	/* coninfo			*/
#define CONFIG_CMD_RUN		/* run command in env variable	*/

#define CONFIG_CMD_I2C
#define CONFIG_CMD_IMXOTP

/* Enable below configure when supporting nand */
#define CONFIG_CMD_REGUL

#define CONFIG_REF_CLK_FREQ CONFIG_MX6_HCLK_FREQ

#undef CONFIG_CMD_IMLS

#define CONFIG_BOOTDELAY 3

#define CONFIG_PRIME	"FEC0"

#define CONFIG_LOADADDR		0x10800000	/* loadaddr env var */
#define CONFIG_RD_LOADADDR	(CONFIG_LOADADDR + 0x300000)

#define CONFIG_BOOTARGS         "console=ttymxc0,115200 rdinit=/linuxrc "\
				"enable_wait_mode=off"
#define CONFIG_BOOTCOMMAND      "bootm 0x10800000 0x10c00000"

#define	CONFIG_EXTRA_ENV_SETTINGS					\
		"uboot=u-boot.bin\0"			\
		"kernel=uImage\0"				\

#define CONFIG_ARP_TIMEOUT	200UL

/*
 * Miscellaneous configurable options
 */
#define CONFIG_SYS_PROMPT		"MX6SDL SABRESD-MFG U-Boot > "
#define CONFIG_SYS_CBSIZE		256	/* Console I/O Buffer Size */
/* Print Buffer Size */
#define CONFIG_SYS_PBSIZE (CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)
#define CONFIG_SYS_MAXARGS	16	/* max number of command args */
#define CONFIG_SYS_BARGSIZE CONFIG_SYS_CBSIZE /* Boot Argument Buffer Size */

#define CONFIG_SYS_MEMTEST_START	0x10000000	/* memtest works on */
#define CONFIG_SYS_MEMTEST_END		0x10010000

#undef	CONFIG_SYS_CLKS_IN_HZ		/* everything, incl board info, in Hz */

#define CONFIG_SYS_LOAD_ADDR		CONFIG_LOADADDR

#define CONFIG_SYS_HZ			1000


/*
 * OCOTP Configs
 */
#ifdef CONFIG_CMD_IMXOTP
	#define CONFIG_IMX_OTP
	#define IMX_OTP_BASE			OCOTP_BASE_ADDR
	#define IMX_OTP_ADDR_MAX		0x7F
	#define IMX_OTP_DATA_ERROR_VAL	0xBADABADA
#endif

/*
 * I2C Configs
 */
#ifdef CONFIG_CMD_I2C
	#define CONFIG_HARD_I2C         1
	#define CONFIG_I2C_MXC          1
	#define CONFIG_SYS_I2C_PORT             I2C3_BASE_ADDR
	#define CONFIG_SYS_I2C_SPEED            100000
	#define CONFIG_SYS_I2C_SLAVE            0x1f
#endif

/* Regulator Configs */
#ifdef CONFIG_CMD_REGUL
	#define CONFIG_ANATOP_REGULATOR
	#define CONFIG_CORE_REGULATOR_NAME "vdd1p1"
	#define CONFIG_PERIPH_REGULATOR_NAME "vdd1p1"
#endif

/*-----------------------------------------------------------------------
 * Stack sizes
 *
 * The stack sizes are set up in start.S using the settings below
 */
#define CONFIG_STACKSIZE	(128 * 1024)	/* regular stack */

/*-----------------------------------------------------------------------
 * Physical Memory Map
 */
#define CONFIG_NR_DRAM_BANKS	1
#define PHYS_SDRAM_1		CSD0_DDR_BASE_ADDR
#define PHYS_SDRAM_1_SIZE	(1u * 1024 * 1024 * 1024)
#define iomem_valid_addr(addr, size) \
	(addr >= PHYS_SDRAM_1 && addr <= (PHYS_SDRAM_1 + PHYS_SDRAM_1_SIZE))

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
#define CONFIG_SYS_NO_FLASH

/* Monitor at beginning of flash */
/* #define CONFIG_FSL_ENV_IN_SF
*/
/* #define CONFIG_FSL_ENV_IN_MMC */

#define CONFIG_ENV_SECT_SIZE    (128 * 1024)
#define CONFIG_ENV_SIZE         CONFIG_ENV_SECT_SIZE
#define CONFIG_ENV_IS_NOWHERE   1

#ifdef CONFIG_SPLASH_SCREEN
	/*
	 * Framebuffer and LCD
	 */
	#define CONFIG_LCD
	#define CONFIG_IPU_V3H
	#define CONFIG_VIDEO_MX5
	#define CONFIG_IPU_CLKRATE	260000000
	#define CONFIG_SYS_CONSOLE_ENV_OVERWRITE
	#define CONFIG_SYS_CONSOLE_OVERWRITE_ROUTINE
	#define CONFIG_SYS_CONSOLE_IS_IN_ENV
	#define LCD_BPP		LCD_COLOR16
	#define CONFIG_CMD_BMP
	#define CONFIG_BMP_8BPP
	#define CONFIG_FB_BASE	(TEXT_BASE + 0x300000)
	#define CONFIG_SPLASH_SCREEN_ALIGN
	#define CONFIG_SYS_WHITE_ON_BLACK
#endif
#endif				/* __CONFIG_H */