/*
 * Copyright (C) 2010 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __ARCH_ARM_MACH_MX50_CRM_REGS_H__
#define __ARCH_ARM_MACH_MX50_CRM_REGS_H__

#define MXC_CCM_BASE   CCM_BASE_ADDR
#define MXC_DPLL1_BASE PLL1_BASE_ADDR
#define MXC_DPLL2_BASE PLL2_BASE_ADDR
#define MXC_DPLL3_BASE PLL3_BASE_ADDR

/* PLL Register Offsets */
#define MXC_PLL_DP_CTL			0x00
#define MXC_PLL_DP_CONFIG		0x04
#define MXC_PLL_DP_OP			0x08
#define MXC_PLL_DP_MFD			0x0C
#define MXC_PLL_DP_MFN			0x10
#define MXC_PLL_DP_MFNMINUS		0x14
#define MXC_PLL_DP_MFNPLUS		0x18
#define MXC_PLL_DP_HFS_OP		0x1C
#define MXC_PLL_DP_HFS_MFD		0x20
#define MXC_PLL_DP_HFS_MFN		0x24
#define MXC_PLL_DP_MFN_TOGC		0x28
#define MXC_PLL_DP_DESTAT		0x2c

/* PLL Register Bit definitions */
#define MXC_PLL_DP_CTL_MUL_CTRL		0x2000
#define MXC_PLL_DP_CTL_DPDCK0_2_EN	0x1000
#define MXC_PLL_DP_CTL_DPDCK0_2_OFFSET	12
#define MXC_PLL_DP_CTL_ADE		0x800
#define MXC_PLL_DP_CTL_REF_CLK_DIV	0x400
#define MXC_PLL_DP_CTL_REF_CLK_SEL_MASK	(3 << 8)
#define MXC_PLL_DP_CTL_REF_CLK_SEL_OFFSET	8
#define MXC_PLL_DP_CTL_HFSM		0x80
#define MXC_PLL_DP_CTL_PRE		0x40
#define MXC_PLL_DP_CTL_UPEN		0x20
#define MXC_PLL_DP_CTL_RST		0x10
#define MXC_PLL_DP_CTL_RCP		0x8
#define MXC_PLL_DP_CTL_PLM		0x4
#define MXC_PLL_DP_CTL_BRM0		0x2
#define MXC_PLL_DP_CTL_LRF		0x1

#define MXC_PLL_DP_CONFIG_BIST		0x8
#define MXC_PLL_DP_CONFIG_SJC_CE	0x4
#define MXC_PLL_DP_CONFIG_AREN		0x2
#define MXC_PLL_DP_CONFIG_LDREQ		0x1

#define MXC_PLL_DP_OP_MFI_OFFSET	4
#define MXC_PLL_DP_OP_MFI_MASK		(0xF << 4)
#define MXC_PLL_DP_OP_PDF_OFFSET	0
#define MXC_PLL_DP_OP_PDF_MASK		0xF

#define MXC_PLL_DP_MFD_OFFSET		0
#define MXC_PLL_DP_MFD_MASK		0x07FFFFFF

#define MXC_PLL_DP_MFN_OFFSET		0x0
#define MXC_PLL_DP_MFN_MASK		0x07FFFFFF

#define MXC_PLL_DP_MFN_TOGC_TOG_DIS	(1 << 17)
#define MXC_PLL_DP_MFN_TOGC_TOG_EN	(1 << 16)
#define MXC_PLL_DP_MFN_TOGC_CNT_OFFSET	0x0
#define MXC_PLL_DP_MFN_TOGC_CNT_MASK	0xFFFF

#define MXC_PLL_DP_DESTAT_TOG_SEL	(1 << 31)
#define MXC_PLL_DP_DESTAT_MFN		0x07FFFFFF

/* Register addresses of CCM*/
#define MXC_CCM_CCR		(MXC_CCM_BASE + 0x00)
#define MXC_CCM_CCDR		(MXC_CCM_BASE + 0x04) /* Reserved */
#define MXC_CCM_CSR		(MXC_CCM_BASE + 0x08)
#define MXC_CCM_CCSR		(MXC_CCM_BASE + 0x0C)
#define MXC_CCM_CACRR		(MXC_CCM_BASE + 0x10)
#define MXC_CCM_CBCDR		(MXC_CCM_BASE + 0x14)
#define MXC_CCM_CBCMR		(MXC_CCM_BASE + 0x18)
#define MXC_CCM_CSCMR1		(MXC_CCM_BASE + 0x1C)
#define MXC_CCM_CSCMR2		(MXC_CCM_BASE + 0x20) /* Reserved */
#define MXC_CCM_CSCDR1		(MXC_CCM_BASE + 0x24)
#define MXC_CCM_CS1CDR		(MXC_CCM_BASE + 0x28)
#define MXC_CCM_CS2CDR		(MXC_CCM_BASE + 0x2C)
#define MXC_CCM_CDCDR		(MXC_CCM_BASE + 0x30) /* Reserved */
#define MXC_CCM_CHSCDR		(MXC_CCM_BASE + 0x34) /* Reserved */
#define MXC_CCM_CSCDR2		(MXC_CCM_BASE + 0x38)
#define MXC_CCM_CSCDR3		(MXC_CCM_BASE + 0x3C) /* Reserved */
#define MXC_CCM_CSCDR4		(MXC_CCM_BASE + 0x40) /* Reserved */
#define MXC_CCM_CWDR		(MXC_CCM_BASE + 0x44) /* Reserved */
#define MXC_CCM_CDHIPR		(MXC_CCM_BASE + 0x48)
#define MXC_CCM_CDCR		(MXC_CCM_BASE + 0x4C)
#define MXC_CCM_CTOR		(MXC_CCM_BASE + 0x50)
#define MXC_CCM_CLPCR		(MXC_CCM_BASE + 0x54)
#define MXC_CCM_CISR		(MXC_CCM_BASE + 0x58)
#define MXC_CCM_CIMR		(MXC_CCM_BASE + 0x5C)
#define MXC_CCM_CCOSR		(MXC_CCM_BASE + 0x60)
#define MXC_CCM_CGPR		(MXC_CCM_BASE + 0x64) /* Reserved */
#define MXC_CCM_CCGR0		(MXC_CCM_BASE + 0x68)
#define MXC_CCM_CCGR1		(MXC_CCM_BASE + 0x6C)
#define MXC_CCM_CCGR2		(MXC_CCM_BASE + 0x70)
#define MXC_CCM_CCGR3		(MXC_CCM_BASE + 0x74)
#define MXC_CCM_CCGR4		(MXC_CCM_BASE + 0x78)
#define MXC_CCM_CCGR5		(MXC_CCM_BASE + 0x7C)
#define MXC_CCM_CCGR6		(MXC_CCM_BASE + 0x80)
#define MXC_CCM_CCGR7		(MXC_CCM_BASE + 0x84)
#define MXC_CCM_CMEOR		(MXC_CCM_BASE + 0x88)
#define MXC_CCM_CSR2		(MXC_CCM_BASE + 0x8C)
#define MXC_CCM_CLKSEQ_BYPASS	(MXC_CCM_BASE + 0x90)
#define MXC_CCM_CLK_SYS		(MXC_CCM_BASE + 0x94)
#define MXC_CCM_CLK_DDR		(MXC_CCM_BASE + 0x98)

/* Define the bits in register CCR */
#define MXC_CCM_CCR_COSC_EN			(1 << 12)
#define MXC_CCM_CCR_CAMP1_EN			(1 << 9)
#define MXC_CCM_CCR_OSCNT_OFFSET		(0)
#define MXC_CCM_CCR_OSCNT_MASK			(0xFF)

/* Define the bits in register CSR */
#define MXC_CCM_CSR_COSR_READY			(1 << 5)
#define MXC_CCM_CSR_LVS_VALUE			(1 << 4)
#define MXC_CCM_CSR_CAMP1_READY			(1 << 2)
#define MXC_CCM_CSR_TEMP_MON_ALARM		(1 << 1)
#define MXC_CCM_CSR_REF_EN_B			(1 << 0)

/* Define the bits in register CCSR */
#define MXC_CCM_CCSR_PLL3_PFD_EN		(0x1 << 13)
#define MXC_CCM_CCSR_PLL2_PFD_EN		(0x1 << 12)
#define MXC_CCM_CCSR_PLL1_PFD_EN		(0x1 << 11)
#define MXC_CCM_CCSR_LP_APM_SEL			(0x1 << 10)
#define MXC_CCM_CCSR_LP_APM_SEL_OFFSET		(1)
#define MXC_CCM_CCSR_STEP_SEL_OFFSET		(7)
#define MXC_CCM_CCSR_STEP_SEL_MASK		(0x3 << 7)
#define MXC_CCM_CCSR_PLL2_PODF_OFFSET		(5)
#define MXC_CCM_CCSR_PLL2_PODF_MASK		(0x3 << 5)
#define MXC_CCM_CCSR_PLL3_PODF_OFFSET		(3)
#define MXC_CCM_CCSR_PLL3_PODF_MASK		(0x3 << 3)
#define MXC_CCM_CCSR_PLL1_SW_CLK_SEL		(1 << 2)
#define MXC_CCM_CCSR_PLL2_SW_CLK_SEL		(1 << 1)
#define MXC_CCM_CCSR_PLL3_SW_CLK_SEL		(1 << 0)

/* Define the bits in register CACRR */
#define MXC_CCM_CACRR_ARM_PODF_OFFSET		(0)
#define MXC_CCM_CACRR_ARM_PODF_MASK		(0x7)

/* Define the bits in register CBCDR */
#define MXC_CCM_CBCDR_WEIM_CLK_SEL		(0x1 << 27)
#define MXC_CCM_CBCDR_PERIPH_CLK_SEL_OFFSET	(25)
#define MXC_CCM_CBCDR_PERIPH_CLK_SEL_MASK	(0x3 << 25)
#define MXC_CCM_CBCDR_WEIM_PODF_OFFSET		(22)
#define MXC_CCM_CBCDR_WEIM_PODF_MASK		(7 << 22)
#define MXC_CCM_CBCDR_AXI_B_PODF_OFFSET		(19)
#define MXC_CCM_CBCDR_AXI_B_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CBCDR_AXI_A_PODF_OFFSET		(16)
#define MXC_CCM_CBCDR_AXI_A_PODF_MASK		(0x7 << 16)
#define MXC_CCM_CBCDR_AHB_PODF_OFFSET		(10)
#define MXC_CCM_CBCDR_AHB_PODF_MASK		(0x7 << 10)
#define MXC_CCM_CBCDR_IPG_PODF_OFFSET		(8)
#define MXC_CCM_CBCDR_IPG_PODF_MASK		(0x3 << 8)
#define MXC_CCM_CBCDR_PERCLK_PRED1_OFFSET	(6)
#define MXC_CCM_CBCDR_PERCLK_PRED1_MASK		(0x3 << 6)
#define MXC_CCM_CBCDR_PERCLK_PRED2_OFFSET	(3)
#define MXC_CCM_CBCDR_PERCLK_PRED2_MASK		(0x7 << 3)
#define MXC_CCM_CBCDR_PERCLK_PODF_OFFSET	(0)
#define MXC_CCM_CBCDR_PERCLK_PODF_MASK		(0x7)

/* Define the bits in register CBCMR */
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_OFFSET	(16)
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_MASK	(0x3 << 16)
#define MXC_CCM_CBCMR_DBG_APB_CLK_SEL_OFFSET	(2)
#define MXC_CCM_CBCMR_DBG_APB_CLK_SEL_MASK	(0x3 << 2)
#define MXC_CCM_CBCMR_PERCLK_LP_APM_CLK_SEL	(0x1 << 1)
#define MXC_CCM_CBCMR_PERCLK_IPG_CLK_SEL	(0x1 << 0)
#define MXC_CCM_CBCMR_LP_APM_SEL_OFFSET		(0x1)

/* Define the bits in register CSCMR1 */
#define MXC_CCM_CSCMR1_SSI_EXT2_CLK_SEL_OFFSET		(30)
#define MXC_CCM_CSCMR1_SSI_EXT2_CLK_SEL_MASK		(0x3 << 30)
#define MXC_CCM_CSCMR1_SSI_EXT1_CLK_SEL_OFFSET		(28)
#define MXC_CCM_CSCMR1_SSI_EXT1_CLK_SEL_MASK		(0x3 << 28)
#define MXC_CCM_CSCMR1_UART_CLK_SEL_OFFSET		(24)
#define MXC_CCM_CSCMR1_UART_CLK_SEL_MASK		(0x3 << 24)
#define MXC_CCM_CSCMR1_ESDHC1_CLK_SEL_OFFSET	(21)
#define MXC_CCM_CSCMR1_ESDHC1_CLK_SEL_MASK	(0x3 << 21)
#define MXC_CCM_CSCMR1_ESDHC2_CLK_SEL			(0x1 << 20)
#define MXC_CCM_CSCMR1_ESDHC4_CLK_SEL			(0x1 << 19)
#define MXC_CCM_CSCMR1_ESDHC3_CLK_SEL_OFFSET		(16)
#define MXC_CCM_CSCMR1_ESDHC3_CLK_SEL_MASK		(0x7 << 16)
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_OFFSET		(14)
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_OFFSET		(12)
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_MASK		(0x3 << 12)
#define MXC_CCM_CSCMR1_SSI_APM_CLK_SEL_OFFSET		(8)
#define MXC_CCM_CSCMR1_SSI_APM_CLK_SEL_MASK		(0x3 << 8)
#define MXC_CCM_CSCMR1_CSPI_CLK_SEL_OFFSET		(4)
#define MXC_CCM_CSCMR1_CSPI_CLK_SEL_MASK		(0x3 << 4)
#define MXC_CCM_CSCMR1_SSI_EXT2_COM_CLK_SEL		(0x1 << 1)
#define MXC_CCM_CSCMR1_SSI_EXT1_COM_CLK_SEL		(0x1)

/* Define the bits in register CSCDR1 */
#define MXC_CCM_CSCDR1_ESDHC3_CLK_PRED_OFFSET		(22)
#define MXC_CCM_CSCDR1_ESDHC3_CLK_PRED_MASK		(0x7 << 22)
#define MXC_CCM_CSCDR1_ESDHC3_CLK_PODF_OFFSET		(19)
#define MXC_CCM_CSCDR1_ESDHC3_CLK_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CSCDR1_ESDHC1_CLK_PRED_OFFSET		(16)
#define MXC_CCM_CSCDR1_ESDHC1_CLK_PRED_MASK		(0x7 << 16)
#define MXC_CCM_CSCDR1_PGC_CLK_PODF_OFFSET		(14)
#define MXC_CCM_CSCDR1_PGC_CLK_PODF_MASK		(0x3 << 14)
#define MXC_CCM_CSCDR1_ESDHC1_CLK_PODF_OFFSET		(11)
#define MXC_CCM_CSCDR1_ESDHC1_CLK_PODF_MASK		(0x7 << 11)
#define MXC_CCM_CSCDR1_UART_CLK_PRED_OFFSET		(3)
#define MXC_CCM_CSCDR1_UART_CLK_PRED_MASK		(0x7 << 3)
#define MXC_CCM_CSCDR1_UART_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CSCDR1_UART_CLK_PODF_MASK		(0x7)

/* Define the bits in register CS1CDR and CS2CDR */
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PRED_OFFSET		(22)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PRED_MASK		(0x7 << 22)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PODF_OFFSET		(16)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PODF_MASK		(0x3F << 16)
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_MASK		(0x3F)

#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PRED_OFFSET		(22)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PRED_MASK		(0x7 << 22)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PODF_OFFSET		(16)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PODF_MASK		(0x3F << 16)
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_MASK		(0x3F)

/* Define the bits in register CSCDR2 */
#define MXC_CCM_CSCDR2_CSPI_CLK_PRED_OFFSET		(25)
#define MXC_CCM_CSCDR2_CSPI_CLK_PRED_MASK		(0x7 << 25)
#define MXC_CCM_CSCDR2_CSPI_CLK_PODF_OFFSET		(19)
#define MXC_CCM_CSCDR2_CSPI_CLK_PODF_MASK		(0x3F << 19)

/* Define the bits in register CDHIPR */
#define MXC_CCM_CDHIPR_ARM_PODF_BUSY			(1 << 16)
#define MXC_CCM_CDHIPR_WEIM_CLK_SEL_BUSY		(1 << 6)
#define MXC_CCM_CDHIPR_PERIPH_CLK_SEL_BUSY		(1 << 5)
#define MXC_CCM_CDHIPR_AHB_PODF_BUSY			(1 << 3)
#define MXC_CCM_CDHIPR_WEIM_PODF_BUSY			(1 << 2)
#define MXC_CCM_CDHIPR_AXI_B_PODF_BUSY			(1 << 1)
#define MXC_CCM_CDHIPR_AXI_A_PODF_BUSY			(1 << 0)

/* Define the bits in register CDCR */

#define MXC_CCM_CDCR_SW_PERIPH_CLK_DIV_REQ_STATUS	(0x1 << 7)
#define MXC_CCM_CDCR_SW_PERIPH_CLK_DIV_REQ		(0x1 << 6)
#define MXC_CCM_CDCR_SW_DVFS_EN				(0x1 << 5)
#define MXC_CCM_CDCR_ARM_FREQ_SHIFT_DIVIDER		(0x1 << 2)
#define MXC_CCM_CDCR_PERIPH_CLK_DVFS_PODF_OFFSET	(0)
#define MXC_CCM_CDCR_PERIPH_CLK_DVFS_PODF_MASK		(0x3)

/* Define the bits in register CLPCR */
#define MXC_CCM_CLPCR_BYPASS_MAX_LPM_HS			(0x1 << 25)
#define MXC_CCM_CLPCR_BYPASS_SDMA_LPM_HS		(0x1 << 24)
#define MXC_CCM_CLPCR_BYPASS_RNGB_LPM_HS		(0x1 << 23)
#define MXC_CCM_CLPCR_BYPASS_WEIM_LPM_HS		(0x1 << 19)
#define MXC_CCM_CLPCR_COSC_PWRDOWN			(0x1 << 11)
#define MXC_CCM_CLPCR_STBY_COUNT_OFFSET			(9)
#define MXC_CCM_CLPCR_STBY_COUNT_MASK			(0x3 << 9)
#define MXC_CCM_CLPCR_VSTBY				(0x1 << 8)
#define MXC_CCM_CLPCR_DIS_REF_OSC			(0x1 << 7)
#define MXC_CCM_CLPCR_SBYOS				(0x1 << 6)
#define MXC_CCM_CLPCR_ARM_CLK_DIS_ON_LPM		(0x1 << 5)
#define MXC_CCM_CLPCR_BYPASS_PMIC_VFUNC_READY		(0x1 << 2)
#define MXC_CCM_CLPCR_LPM_OFFSET			(0)
#define MXC_CCM_CLPCR_LPM_MASK				(0x3)

/* Define the bits in register CISR */
#define MXC_CCM_CISR_ARM_PODF_LOADED			(0x1 << 26)
#define MXC_CCM_CISR_TEMP_MON_ALARM			(0x1 << 25)
#define MXC_CCM_CISR_WEIM_CLK_SEL_LOADED		(0x1 << 23)
#define MXC_CCM_CISR_PER_CLK_SEL_LOADED			(0x1 << 22)
#define MXC_CCM_CISR_AHB_PODF_LOADED			(0x1 << 20)
#define MXC_CCM_CISR_WEIM_PODF_LOADED			(0x1 << 19)
#define MXC_CCM_CISR_AXI_B_PODF_LOADED			(0x1 << 18)
#define MXC_CCM_CISR_AXI_A_PODF_LOADED			(0x1 << 17)
#define MXC_CCM_CISR_DIVIDER_LOADED			(0x1 << 16)
#define MXC_CCM_CISR_COSC_READY				(0x1 << 6)
#define MXC_CCM_CISR_CAMP1_READY			(0x1 << 4)
#define MXC_CCM_CISR_LRF_PLL3				(0x1 << 2)
#define MXC_CCM_CISR_LRF_PLL2				(0x1 << 1)
#define MXC_CCM_CISR_LRF_PLL1				(0x1)

/* Define the bits in register CIMR */
#define MXC_CCM_CIMR_MASK_ARM_PODF_LOADED		(0x1 << 26)
#define MXC_CCM_CIMR_MASK_TEMP_MON_ALARM		(0x1 << 25)
#define MXC_CCM_CIMR_MASK_WEIM_CLK_SEL_LOADED		(0x1 << 23)
#define MXC_CCM_CIMR_MASK_PER_CLK_SEL_LOADED		(0x1 << 22)
#define MXC_CCM_CIMR_MASK_AHB_PODF_LOADED		(0x1 << 20)
#define MXC_CCM_CIMR_MASK_WEIM_PODF_LOADED		(0x1 << 19)
#define MXC_CCM_CIMR_MASK_AXI_B_PODF_LOADED		(0x1 << 18)
#define MXC_CCM_CIMR_MASK_AXI_A_PODF_LOADED		(0x1 << 17)
#define MXC_CCM_CIMR_MASK_DIVIDER_LOADED		(0x1 << 16)
#define MXC_CCM_CIMR_MASK_COSC_READY			(0x1 << 6)
#define MXC_CCM_CIMR_MASK_CAMP1_READY			(0x1 << 4)
#define MXC_CCM_CIMR_MASK_LRF_PLL3			(0x1 << 2)
#define MXC_CCM_CIMR_MASK_LRF_PLL2			(0x1 << 1)
#define MXC_CCM_CIMR_MASK_LRF_PLL1			(0x1)

/* Define the bits in register CCOSR */
#define MXC_CCM_CCOSR_CKO2_EN_OFFSET			(0x1 << 24)
#define MXC_CCM_CCOSR_CKO2_DIV_OFFSET			(21)
#define MXC_CCM_CCOSR_CKO2_DIV_MASK			(0x7 << 21)
#define MXC_CCM_CCOSR_CKO2_SEL_OFFSET			(16)
#define MXC_CCM_CCOSR_CKO2_SEL_MASK			(0x1F << 16)
#define MXC_CCM_CCOSR_CKO1_SLOW_SEL			(0x1 << 8)
#define MXC_CCM_CCOSR_CKO1_EN				(0x1 << 7)
#define MXC_CCM_CCOSR_CKO1_DIV_OFFSET			(4)
#define MXC_CCM_CCOSR_CKO1_DIV_MASK			(0x7 << 4)
#define MXC_CCM_CCOSR_CKO1_SEL_OFFSET			(0)
#define MXC_CCM_CCOSR_CKO1_SEL_MASK			(0xF)

/* Define the bits in registers CCGRx */
#define MXC_CCM_CCGR_CG_MASK				0x3

#define MXC_CCM_CCGR0_CG15_OFFSET			30
#define MXC_CCM_CCGR0_CG15_MASK			(0x3 << 30)
#define MXC_CCM_CCGR0_CG14_OFFSET			28
#define MXC_CCM_CCGR0_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR0_CG13_OFFSET			26
#define MXC_CCM_CCGR0_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR0_CG12_OFFSET			24
#define MXC_CCM_CCGR0_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR0_CG11_OFFSET			22
#define MXC_CCM_CCGR0_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR0_CG10_OFFSET			20
#define MXC_CCM_CCGR0_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR0_CG9_OFFSET			18
#define MXC_CCM_CCGR0_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR0_CG8_OFFSET			16
#define MXC_CCM_CCGR0_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR0_CG7_OFFSET			14
#define MXC_CCM_CCGR0_CG6_OFFSET			12
#define MXC_CCM_CCGR0_CG5_OFFSET			10
#define MXC_CCM_CCGR0_CG5_MASK			(0x3 << 10)
#define MXC_CCM_CCGR0_CG4_OFFSET			8
#define MXC_CCM_CCGR0_CG4_MASK			(0x3 << 8)
#define MXC_CCM_CCGR0_CG3_OFFSET			6
#define MXC_CCM_CCGR0_CG3_MASK			(0x3 << 6)
#define MXC_CCM_CCGR0_CG2_OFFSET			4
#define MXC_CCM_CCGR0_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR0_CG1_OFFSET			2
#define MXC_CCM_CCGR0_CG1_MASK			(0x3 << 2)
#define MXC_CCM_CCGR0_CG0_OFFSET			0
#define MXC_CCM_CCGR0_CG0_MASK			0x3

#define MXC_CCM_CCGR1_CG15_OFFSET			30
#define MXC_CCM_CCGR1_CG14_OFFSET			28
#define MXC_CCM_CCGR1_CG13_OFFSET			26
#define MXC_CCM_CCGR1_CG12_OFFSET			24
#define MXC_CCM_CCGR1_CG11_OFFSET			22
#define MXC_CCM_CCGR1_CG10_OFFSET			20
#define MXC_CCM_CCGR1_CG9_OFFSET			18
#define MXC_CCM_CCGR1_CG8_OFFSET			16
#define MXC_CCM_CCGR1_CG7_OFFSET			14
#define MXC_CCM_CCGR1_CG6_OFFSET			12
#define MXC_CCM_CCGR1_CG5_OFFSET			10
#define MXC_CCM_CCGR1_CG4_OFFSET			8
#define MXC_CCM_CCGR1_CG3_OFFSET			6
#define MXC_CCM_CCGR1_CG2_OFFSET			4
#define MXC_CCM_CCGR1_CG1_OFFSET			2
#define MXC_CCM_CCGR1_CG0_OFFSET			0

#define MXC_CCM_CCGR2_CG15_OFFSET			30
#define MXC_CCM_CCGR2_CG14_OFFSET			28
#define MXC_CCM_CCGR2_CG13_OFFSET			26
#define MXC_CCM_CCGR2_CG12_OFFSET			24
#define MXC_CCM_CCGR2_CG11_OFFSET			22
#define MXC_CCM_CCGR2_CG10_OFFSET			20
#define MXC_CCM_CCGR2_CG9_OFFSET			18
#define MXC_CCM_CCGR2_CG8_OFFSET			16
#define MXC_CCM_CCGR2_CG7_OFFSET			14
#define MXC_CCM_CCGR2_CG6_OFFSET			12
#define MXC_CCM_CCGR2_CG5_OFFSET			10
#define MXC_CCM_CCGR2_CG4_OFFSET			8
#define MXC_CCM_CCGR2_CG3_OFFSET			6
#define MXC_CCM_CCGR2_CG2_OFFSET			4
#define MXC_CCM_CCGR2_CG1_OFFSET			2
#define MXC_CCM_CCGR2_CG0_OFFSET			0

#define MXC_CCM_CCGR3_CG15_OFFSET			30
#define MXC_CCM_CCGR3_CG14_OFFSET			28
#define MXC_CCM_CCGR3_CG13_OFFSET			26
#define MXC_CCM_CCGR3_CG12_OFFSET			24
#define MXC_CCM_CCGR3_CG11_OFFSET			22
#define MXC_CCM_CCGR3_CG10_OFFSET			20
#define MXC_CCM_CCGR3_CG9_OFFSET			18
#define MXC_CCM_CCGR3_CG8_OFFSET			16
#define MXC_CCM_CCGR3_CG7_OFFSET			14
#define MXC_CCM_CCGR3_CG6_OFFSET			12
#define MXC_CCM_CCGR3_CG5_OFFSET			10
#define MXC_CCM_CCGR3_CG4_OFFSET			8
#define MXC_CCM_CCGR3_CG3_OFFSET			6
#define MXC_CCM_CCGR3_CG2_OFFSET			4
#define MXC_CCM_CCGR3_CG1_OFFSET			2
#define MXC_CCM_CCGR3_CG0_OFFSET			0

#define MXC_CCM_CCGR4_CG15_OFFSET			30
#define MXC_CCM_CCGR4_CG14_OFFSET			28
#define MXC_CCM_CCGR4_CG13_OFFSET			26
#define MXC_CCM_CCGR4_CG12_OFFSET			24
#define MXC_CCM_CCGR4_CG11_OFFSET			22
#define MXC_CCM_CCGR4_CG10_OFFSET			20
#define MXC_CCM_CCGR4_CG9_OFFSET			18
#define MXC_CCM_CCGR4_CG8_OFFSET			16
#define MXC_CCM_CCGR4_CG7_OFFSET			14
#define MXC_CCM_CCGR4_CG6_OFFSET			12
#define MXC_CCM_CCGR4_CG5_OFFSET			10
#define MXC_CCM_CCGR4_CG4_OFFSET			8
#define MXC_CCM_CCGR4_CG3_OFFSET			6
#define MXC_CCM_CCGR4_CG2_OFFSET			4
#define MXC_CCM_CCGR4_CG1_OFFSET			2
#define MXC_CCM_CCGR4_CG0_OFFSET			0

#define MXC_CCM_CCGR5_CG15_OFFSET			30
#define MXC_CCM_CCGR5_CG14_OFFSET			28
#define MXC_CCM_CCGR5_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR5_CG13_OFFSET			26
#define MXC_CCM_CCGR5_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR5_CG12_OFFSET			24
#define MXC_CCM_CCGR5_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR5_CG11_OFFSET			22
#define MXC_CCM_CCGR5_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR5_CG10_OFFSET			20
#define MXC_CCM_CCGR5_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR5_CG9_OFFSET			18
#define MXC_CCM_CCGR5_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR5_CG8_OFFSET			16
#define MXC_CCM_CCGR5_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR5_CG7_OFFSET			14
#define MXC_CCM_CCGR5_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR5_CG6_1_OFFSET		12
#define MXC_CCM_CCGR5_CG6_2_OFFSET		13
#define MXC_CCM_CCGR5_CG6_OFFSET			12
#define MXC_CCM_CCGR5_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR5_CG5_OFFSET			10
#define MXC_CCM_CCGR5_CG4_OFFSET			8
#define MXC_CCM_CCGR5_CG3_OFFSET			6
#define MXC_CCM_CCGR5_CG2_OFFSET			4
#define MXC_CCM_CCGR5_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR5_CG1_OFFSET			2
#define MXC_CCM_CCGR5_CG0_OFFSET			0

#define MXC_CCM_CCGR6_CG15_OFFSET			30
#define MXC_CCM_CCGR6_CG14_OFFSET			28
#define MXC_CCM_CCGR6_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR6_CG13_OFFSET			26
#define MXC_CCM_CCGR6_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR6_CG12_OFFSET			24
#define MXC_CCM_CCGR6_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR6_CG11_OFFSET			22
#define MXC_CCM_CCGR6_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR6_CG10_OFFSET			20
#define MXC_CCM_CCGR6_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR6_CG9_OFFSET			18
#define MXC_CCM_CCGR6_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR6_CG8_OFFSET			16
#define MXC_CCM_CCGR6_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR6_CG7_OFFSET            		14
#define MXC_CCM_CCGR6_CG7_MASK          	(0x3 << 14)
#define MXC_CCM_CCGR6_CG6_OFFSET			12
#define MXC_CCM_CCGR6_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR6_CG5_OFFSET			10
#define MXC_CCM_CCGR6_CG5_MASK			(0x3 << 10)
#define MXC_CCM_CCGR6_CG4_OFFSET			8
#define MXC_CCM_CCGR6_CG4_MASK			(0x3 << 8)
#define MXC_CCM_CCGR6_CG3_OFFSET			6
#define MXC_CCM_CCGR6_CG2_OFFSET			4
#define MXC_CCM_CCGR6_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR6_CG1_OFFSET			2
#define MXC_CCM_CCGR6_CG0_OFFSET			0

#define MXC_CCM_CCGR7_CG15_OFFSET			30
#define MXC_CCM_CCGR7_CG14_OFFSET			28
#define MXC_CCM_CCGR7_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR7_CG13_OFFSET			26
#define MXC_CCM_CCGR7_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR7_CG12_OFFSET			24
#define MXC_CCM_CCGR7_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR7_CG11_OFFSET			22
#define MXC_CCM_CCGR7_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR7_CG10_OFFSET			20
#define MXC_CCM_CCGR7_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR7_CG9_OFFSET			18
#define MXC_CCM_CCGR7_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR7_CG8_OFFSET			16
#define MXC_CCM_CCGR7_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR7_CG7_OFFSET			14
#define MXC_CCM_CCGR7_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR7_CG6_OFFSET			12
#define MXC_CCM_CCGR7_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR7_CG5_OFFSET			10
#define MXC_CCM_CCGR7_CG4_OFFSET			8
#define MXC_CCM_CCGR7_CG3_OFFSET			6
#define MXC_CCM_CCGR7_CG2_OFFSET			4
#define MXC_CCM_CCGR7_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR7_CG1_OFFSET			2
#define MXC_CCM_CCGR7_CG0_OFFSET			0

/* Define the bits in registers CLKSEQ_BYPASS */
#define MXC_CCM_CLKSEQ_BYPASS_ELCDIF_PIX_OFFSET 	14
#define MXC_CCM_CLKSEQ_BYPASS_ELCDIF_PIX_MASK	(0x3 << 14)
#define MXC_CCM_CLKSEQ_BYPASS_EPDC_PIX_OFFSET		12
#define MXC_CCM_CLKSEQ_BYPASS_EPDC_PIX_MASK	(0x3 << 12)
#define MXC_CCM_CLKSEQ_BYPASS_MSHCX_OFFSET		10
#define MXC_CCM_CLKSEQ_BYPASS_MSHCX_MASK	(0x3 << 10)
#define MXC_CCM_CLKSEQ_BYPASS_BCH_OFFSET		8
#define MXC_CCM_CLKSEQ_BYPASS_BCH_MASK		(0x3 << 8)
#define MXC_CCM_CLKSEQ_BYPASS_GPMI_OFFSET               6
#define MXC_CCM_CLKSEQ_BYPASS_GPMI_MASK         (0x3 << 6)
#define MXC_CCM_CLKSEQ_BYPASS_EPDC_OFFSET		4
#define MXC_CCM_CLKSEQ_BYPASS_EPDC_MASK		(0x3 << 4)
#define MXC_CCM_CLKSEQ_BYPASS_DISPLY_AXI_OFFSET		2
#define MXC_CCM_CLKSEQ_BYPASS_DISPLY_AXI_MASK	(0x3 << 2)
#define MXC_CCM_CLKSEQ_BYPASS_SYS_CLK_1		(0x1 << 1)
#define MXC_CCM_CLKSEQ_BYPASS_SYS_CLK_0		(0x1 << 0)

/* Define the bits in registers CLK_SYS */
#define MXC_CCM_CLK_SYS_XTAL_CLKGATE_OFFSET		30
#define MXC_CCM_CLK_SYS_XTAL_CLKGATE_MASK	(0x3 << 30)
#define MXC_CCM_CLK_SYS_PLL_CLKGATE_OFFSET		28
#define MXC_CCM_CLK_SYS_PLL_CLKGATE_MASK	(0x3 << 28)
#define MXC_CCM_CLK_SYS_DIV_XTAL_OFFSET			6
#define MXC_CCM_CLK_SYS_DIV_XTAL_MASK		(0xf << 6)
#define MXC_CCM_CLK_SYS_DIV_PLL_OFFSET			0
#define MXC_CCM_CLK_SYS_DIV_PLL_MASK	       (0x3f << 0)

/* Define the bits in registers CLK_DDR */
#define MXC_CCM_CLK_DDR_DDR_CLKGATE_OFFSET	(30)
#define MXC_CCM_CLK_DDR_DDR_CLKGATE_MASK	(0x3 << 30)
#define MXC_CCM_CLK_DDR_DDR_PFD_SEL		(1 << 6)
#define MXC_CCM_CLK_DDR_DDR_DIV_PLL_OFFSET	(0)
#define MXC_CCM_CLK_DDR_DDR_DIV_PLL_MASK	(0x3F)


#define MXC_GPC_BASE			(IO_ADDRESS(GPC_BASE_ADDR))
#define MXC_DPTC_LP_BASE		(MXC_GPC_BASE + 0x80)
#define MXC_DPTC_GP_BASE		(MXC_GPC_BASE + 0x100)
#define MXC_DVFS_CORE_BASE		(MXC_GPC_BASE + 0x180)
#define MXC_DVFS_PER_BASE		(MXC_GPC_BASE + 0x1C4)
#define MXC_PGC_IPU_BASE		(MXC_GPC_BASE + 0x220)
#define MXC_PGC_VPU_BASE		(MXC_GPC_BASE + 0x240)
#define MXC_PGC_GPU_BASE		(MXC_GPC_BASE + 0x260)
#define MXC_SRPG_NEON_BASE		(MXC_GPC_BASE + 0x280)
#define MXC_SRPG_ARM_BASE		(MXC_GPC_BASE + 0x2A0)
#define MXC_SRPG_EMPGC0_BASE		(MXC_GPC_BASE + 0x2C0)
#define MXC_SRPG_EMPGC1_BASE		(MXC_GPC_BASE + 0x2D0)
#define MXC_SRPG_MEGAMIX_BASE		(MXC_GPC_BASE + 0x2E0)
#define MXC_SRPG_EMI_BASE		(MXC_GPC_BASE + 0x300)

/* DVFS CORE */
#define MXC_DVFSTHRS		(MXC_DVFS_CORE_BASE + 0x00)
#define MXC_DVFSCOUN		(MXC_DVFS_CORE_BASE + 0x04)
#define MXC_DVFSSIG1		(MXC_DVFS_CORE_BASE + 0x08)
#define MXC_DVFSSIG0		(MXC_DVFS_CORE_BASE + 0x0C)
#define MXC_DVFSGPC0		(MXC_DVFS_CORE_BASE + 0x10)
#define MXC_DVFSGPC1		(MXC_DVFS_CORE_BASE + 0x14)
#define MXC_DVFSGPBT		(MXC_DVFS_CORE_BASE + 0x18)
#define MXC_DVFSEMAC		(MXC_DVFS_CORE_BASE + 0x1C)
#define MXC_DVFSCNTR		(MXC_DVFS_CORE_BASE + 0x20)
#define MXC_DVFSLTR0_0		(MXC_DVFS_CORE_BASE + 0x24)
#define MXC_DVFSLTR0_1		(MXC_DVFS_CORE_BASE + 0x28)
#define MXC_DVFSLTR1_0		(MXC_DVFS_CORE_BASE + 0x2C)
#define MXC_DVFSLTR1_1		(MXC_DVFS_CORE_BASE + 0x30)
#define MXC_DVFSPT0 		(MXC_DVFS_CORE_BASE + 0x34)
#define MXC_DVFSPT1 		(MXC_DVFS_CORE_BASE + 0x38)
#define MXC_DVFSPT2 		(MXC_DVFS_CORE_BASE + 0x3C)
#define MXC_DVFSPT3 		(MXC_DVFS_CORE_BASE + 0x40)

/* DVFS PER */
#define MXC_DVFSPER_LTR0	(MXC_DVFS_PER_BASE)
#define MXC_DVFSPER_LTR1	(MXC_DVFS_PER_BASE + 0x04)
#define MXC_DVFSPER_LTR2	(MXC_DVFS_PER_BASE + 0x08)
#define MXC_DVFSPER_LTR3	(MXC_DVFS_PER_BASE + 0x0C)
#define MXC_DVFSPER_LTBR0	(MXC_DVFS_PER_BASE + 0x10)
#define MXC_DVFSPER_LTBR1	(MXC_DVFS_PER_BASE + 0x14)
#define MXC_DVFSPER_PMCR0	(MXC_DVFS_PER_BASE + 0x18)
#define MXC_DVFSPER_PMCR1	(MXC_DVFS_PER_BASE + 0x1C)

/* GPC */
#define MXC_GPC_CNTR		(MXC_GPC_BASE + 0x0)
#define MXC_GPC_PGR		(MXC_GPC_BASE + 0x4)
#define MXC_GPC_VCR		(MXC_GPC_BASE + 0x8)
#define MXC_GPC_ALL_PU		(MXC_GPC_BASE + 0xC)
#define MXC_GPC_NEON		(MXC_GPC_BASE + 0x10)

/* PGC */
#define MXC_PGC_IPU_PGCR	(MXC_PGC_IPU_BASE + 0x0)
#define MXC_PGC_IPU_PGSR	(MXC_PGC_IPU_BASE + 0xC)
#define MXC_PGC_VPU_PGCR	(MXC_PGC_VPU_BASE + 0x0)
#define MXC_PGC_VPU_PGSR	(MXC_PGC_VPU_BASE + 0xC)
#define MXC_PGC_GPU_PGCR	(MXC_PGC_GPU_BASE + 0x0)
#define MXC_PGC_GPU_PGSR	(MXC_PGC_GPU_BASE + 0xC)

#define MXC_PGCR_PCR		1
#define MXC_SRPGCR_PCR		1
#define MXC_EMPGCR_PCR		1
#define MXC_PGSR_PSR		1


#define MXC_CORTEXA8_PLAT_LPC_DSM	(1 << 0)
#define MXC_CORTEXA8_PLAT_LPC_DBG_DSM	(1 << 1)

/* SRPG */
#define MXC_SRPG_NEON_SRPGCR	(MXC_SRPG_NEON_BASE + 0x0)
#define MXC_SRPG_NEON_PUPSCR	(MXC_SRPG_NEON_BASE + 0x4)
#define MXC_SRPG_NEON_PDNSCR	(MXC_SRPG_NEON_BASE + 0x8)

#define MXC_SRPG_ARM_SRPGCR	(MXC_SRPG_ARM_BASE + 0x0)
#define MXC_SRPG_ARM_PUPSCR	(MXC_SRPG_ARM_BASE + 0x4)
#define MXC_SRPG_ARM_PDNSCR	(MXC_SRPG_ARM_BASE + 0x8)

#define MXC_SRPG_EMPGC0_SRPGCR	(MXC_SRPG_EMPGC0_BASE + 0x0)
#define MXC_SRPG_EMPGC0_PUPSCR	(MXC_SRPG_EMPGC0_BASE + 0x4)
#define MXC_SRPG_EMPGC0_PDNSCR	(MXC_SRPG_EMPGC0_BASE + 0x8)

#define MXC_SRPG_EMPGC1_SRPGCR	(MXC_SRPG_EMPGC1_BASE + 0x0)
#define MXC_SRPG_EMPGC1_PUPSCR	(MXC_SRPG_EMPGC1_BASE + 0x4)
#define MXC_SRPG_EMPGC1_PDNSCR	(MXC_SRPG_EMPGC1_BASE + 0x8)

#define MXC_SRPG_MEGAMIX_SRPGCR		(MXC_SRPG_MEGAMIX_BASE + 0x0)
#define MXC_SRPG_MEGAMIX_PUPSCR		(MXC_SRPG_MEGAMIX_BASE + 0x4)
#define MXC_SRPG_MEGAMIX_PDNSCR		(MXC_SRPG_MEGAMIX_BASE + 0x8)

#define MXC_SRPGC_EMI_SRPGCR	(MXC_SRPGC_EMI_BASE + 0x0)
#define MXC_SRPGC_EMI_PUPSCR	(MXC_SRPGC_EMI_BASE + 0x4)
#define MXC_SRPGC_EMI_PDNSCR	(MXC_SRPGC_EMI_BASE + 0x8)

#endif				/* __ARCH_ARM_MACH_MX50_CRM_REGS_H__ */