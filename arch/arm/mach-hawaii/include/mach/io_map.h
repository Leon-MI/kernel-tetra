/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2010  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/************************************************************************************************/

#ifndef __HAWAII_IO_MAP_H
#define __HAWAII_IO_MAP_H

#include <asm/memory.h>
#include <mach/memory.h>
#include <mach/rdb/brcm_rdb_sysmap.h>

#ifdef __ASSEMBLY__
/* If possible never use the macros in this file directly in assembly.
 * But if it is really required add them here as in the commented example
 * below.
 */
#define KONA_UART0_VA	IO_XLATE(UARTB_BASE_ADDR, IO_G5_PHYS, IO_G5_VIRT)

#else /* !__ASSEMBLY__ */

#define KONA_PROC_CLK_VA		HW_IO_PHYS_TO_VIRT(PROC_CLK_BASE_ADDR)
#define KONA_PROC_RST_VA		HW_IO_PHYS_TO_VIRT(PROC_RST_BASE_ADDR)
#define KONA_AON_CLK_VA			HW_IO_PHYS_TO_VIRT(AON_CLK_BASE_ADDR)
#define KONA_AON_RST_VA			IOMEM(HW_IO_PHYS_TO_VIRT(AON_RST_BASE_ADDR))
#define KONA_ATBFILTER_VA		HW_IO_PHYS_TO_VIRT(ATBFILTER_BASE_ADDR)
#define KONA_BSC1_VA			HW_IO_PHYS_TO_VIRT(BSC1_BASE_ADDR)
#define KONA_BSC2_VA			HW_IO_PHYS_TO_VIRT(BSC2_BASE_ADDR)
#define KONA_BSC3_VA			HW_IO_PHYS_TO_VIRT(BSC3_BASE_ADDR)
#define KONA_BSC4_VA			HW_IO_PHYS_TO_VIRT(BSC4_BASE_ADDR)
#define KONA_CHIPREG_VA			IOMEM(HW_IO_PHYS_TO_VIRT(CHIPREGS_BASE_ADDR))
#define KONA_PAD_CTRL_VA		HW_IO_PHYS_TO_VIRT(PAD_CTRL_BASE_ADDR)
#define KONA_DMAC_NS_VA			HW_IO_PHYS_TO_VIRT(NONDMAC_BASE_ADDR)
#define KONA_DMAC_S_VA			HW_IO_PHYS_TO_VIRT(SECDMAC_BASE_ADDR)
#define KONA_DMUX_VA			HW_IO_PHYS_TO_VIRT(DMUX_BASE_ADDR)
#define KONA_FIN_FUNNEL_VA		HW_IO_PHYS_TO_VIRT(FIN_FUNNEL_BASE_ADDR)
#define KONA_FUNNEL_VA			HW_IO_PHYS_TO_VIRT(FUNNEL_BASE_ADDR)
#define KONA_GICCPU_VA			HW_IO_PHYS_TO_VIRT(GICCPU_BASE_ADDR)
#define KONA_GICDIST_VA			HW_IO_PHYS_TO_VIRT(GICDIST_BASE_ADDR)
#define KONA_GPIO2_VA			HW_IO_PHYS_TO_VIRT(GPIO2_BASE_ADDR)
#define KONA_HUB_SWITCH_VA		HW_IO_PHYS_TO_VIRT(HUBSWITCH_BASE_ADDR)
#define KONA_KEYPAD_VA			HW_IO_PHYS_TO_VIRT(KEYPAD_BASE_ADDR)
#define KONA_KPM_CLK_VA			HW_IO_PHYS_TO_VIRT(KONA_MST_CLK_BASE_ADDR)
#define KONA_KPM_RST_VA			HW_IO_PHYS_TO_VIRT(KONA_MST_RST_BASE_ADDR)
#define KONA_KPS_CLK_VA			HW_IO_PHYS_TO_VIRT(KONA_SLV_CLK_BASE_ADDR)
#define KONA_KPS_RST_VA			HW_IO_PHYS_TO_VIRT(KONA_SLV_RST_BASE_ADDR)
#define KONA_L2C_VA			HW_IO_PHYS_TO_VIRT(L2C_BASE_ADDR)
#define KONA_MEMC0_APHY_VA		HW_IO_PHYS_TO_VIRT(MEMC0_OPEN_APHY_BASE_ADDR)
#define KONA_MEMC0_DPHY_VA		HW_IO_PHYS_TO_VIRT(MEMC0_OPEN_DPHY_BASE_ADDR)
#define KONA_MEMC0_NS_VA		HW_IO_PHYS_TO_VIRT(MEMC0_OPEN_BASE_ADDR)
#define KONA_MEMC0_S_VA			HW_IO_PHYS_TO_VIRT(MEMC0_SECURE_BASE_ADDR)
#define KONA_MEMC1_APHY_VA		HW_IO_PHYS_TO_VIRT(MEMC1_OPEN_APHY_BASE_ADDR)
#define KONA_MEMC1_DPHY_VA		HW_IO_PHYS_TO_VIRT(MEMC1_OPEN_DPHY_BASE_ADDR)
#define KONA_MEMC1_NS_VA		HW_IO_PHYS_TO_VIRT(MEMC1_OPEN_BASE_ADDR)
#define KONA_MEMC1_S_VA			HW_IO_PHYS_TO_VIRT(MEMC1_SECURE_BASE_ADDR)
#define KONA_MPU_VA			HW_IO_PHYS_TO_VIRT(MPU_BASE_ADDR)
#define KONA_NVSRAM_VA			HW_IO_PHYS_TO_VIRT(NVSRAM_BASE_ADDR)
#define KONA_OTP_VA			HW_IO_PHYS_TO_VIRT(SEC_OTP_BASE_ADDR)
#define KONA_PKA_VA			HW_IO_PHYS_TO_VIRT(SEC_PKA_BASE_ADDR)
#define KONA_PROFTMR_VA			HW_IO_PHYS_TO_VIRT(GTIM_BASE_ADDR)
#define KONA_PTIM_VA			HW_IO_PHYS_TO_VIRT(PTIM_BASE_ADDR)
#define KONA_PMU_BSC_VA			HW_IO_PHYS_TO_VIRT(PMU_BSC_BASE_ADDR)
#define KONA_ROOT_CLK_VA		IOMEM(HW_IO_PHYS_TO_VIRT(ROOT_CLK_BASE_ADDR))
#define KONA_ROOT_RST_VA		HW_IO_PHYS_TO_VIRT(ROOT_RST_BASE_ADDR)
#define KONA_PWM_VA			HW_IO_PHYS_TO_VIRT(PWM_BASE_ADDR)
#define KONA_RNG_VA			HW_IO_PHYS_TO_VIRT(SEC_RNG_BASE_ADDR)
#define KONA_SCU_VA			HW_IO_PHYS_TO_VIRT(SCU_BASE_ADDR)
#define KONA_SDIO1_VA			HW_IO_PHYS_TO_VIRT(SDIO1_BASE_ADDR)
#define KONA_SDIO2_VA			HW_IO_PHYS_TO_VIRT(SDIO2_BASE_ADDR)
#define KONA_SDIO3_VA			HW_IO_PHYS_TO_VIRT(SDIO3_BASE_ADDR)
#define KONA_SEC_VA			HW_IO_PHYS_TO_VIRT(SEC_CFG_BASE_ADDR)
#define KONA_SEC_WATCHDOG_VA		HW_IO_PHYS_TO_VIRT(SEC_WATCHDOG_BASE_ADDR)
#define KONA_SECTRAP1_VA		HW_IO_PHYS_TO_VIRT(SECTRAP1_BASE_ADDR)
#define KONA_SECTRAP2_VA		HW_IO_PHYS_TO_VIRT(SECTRAP2_BASE_ADDR)
#define KONA_SECTRAP3_VA		HW_IO_PHYS_TO_VIRT(SECTRAP3_BASE_ADDR)
#define KONA_SECTRAP4_VA		HW_IO_PHYS_TO_VIRT(SECTRAP4_BASE_ADDR)
#define KONA_SECTRAP5_VA		HW_IO_PHYS_TO_VIRT(SECTRAP5_BASE_ADDR)
#define KONA_SECTRAP6_VA		HW_IO_PHYS_TO_VIRT(SECTRAP6_BASE_ADDR)
#define KONA_SECTRAP7_VA		HW_IO_PHYS_TO_VIRT(SECTRAP7_BASE_ADDR)
#define KONA_SECTRAP8_VA		HW_IO_PHYS_TO_VIRT(SECTRAP8_BASE_ADDR)
#define KONA_SECWD_VA			HW_IO_PHYS_TO_VIRT(SECWD_BASE_ADDR)
#define KONA_PAD_CTRL			HW_IO_PHYS_TO_VIRT(PAD_CTRL_BASE_ADDR)
#define KONA_SIMI_VA			HW_IO_PHYS_TO_VIRT(SIM_BASE_ADDR)
#define KONA_SIMI2_VA			HW_IO_PHYS_TO_VIRT(SIM2_BASE_ADDR)
#define KONA_SLV_CLK_VA			HW_IO_PHYS_TO_VIRT(KONA_SLV_CLK_BASE_ADDR)
#define KONA_SLV_RST_VA			HW_IO_PHYS_TO_VIRT(KONA_SLV_RST_BASE_ADDR)
#define KONA_SPUM_NS_VA			HW_IO_PHYS_TO_VIRT(SPUM_NS_BASE_ADDR)
#define KONA_SPUM_S_VA			HW_IO_PHYS_TO_VIRT(SPUM_S_BASE_ADDR)
#define KONA_SPUM_APB_NS_VA		HW_IO_PHYS_TO_VIRT(SEC_SPUM_NS_APB_BASE_ADDR)
#define KONA_SPUM_APB_S_VA		HW_IO_PHYS_TO_VIRT(SEC_SPUM_S_APB_BASE_ADDR)
#define KONA_SRAM_VA			HW_IO_PHYS_TO_VIRT(SPUM_S_BASE_ADDR)
#define KONA_SSP0_VA			HW_IO_PHYS_TO_VIRT(SSP0_BASE_ADDR)
#define KONA_SSP1_VA                    HW_IO_PHYS_TO_VIRT(SSP1_BASE_ADDR)
#define KONA_SSP3_VA			HW_IO_PHYS_TO_VIRT(SSP3_BASE_ADDR)
#define KONA_SSP4_VA			HW_IO_PHYS_TO_VIRT(SSP4_BASE_ADDR)
#define KONA_SCLKCAL_VA			HW_IO_PHYS_TO_VIRT(SCLKCAL_BASE_ADDR)
#define KONA_BMDM_CCU_VA		HW_IO_PHYS_TO_VIRT(BMDM_CCU_BASE_ADDR)
#define KONA_BMDM_RST_VA		HW_IO_PHYS_TO_VIRT(BMDM_RST_BASE_ADDR)
#define KONA_BMDM_PWRMGR_VA		HW_IO_PHYS_TO_VIRT(BMDM_PWRMGR_BASE_ADDR)
#define KONA_SLPTIMER_VA		HW_IO_PHYS_TO_VIRT(BMODEM_SLPTIMER_BASE_ADDR)
#define KONA_STM_VA			HW_IO_PHYS_TO_VIRT(STM_BASE_ADDR)
#define KONA_SWSTM_VA			HW_IO_PHYS_TO_VIRT(SWSTM_BASE_ADDR)
#define KONA_SWSTM_ST_VA		HW_IO_PHYS_TO_VIRT(SWSTM_ST_BASE_ADDR)
#define KONA_SYSTEM_SWITCH_VA		HW_IO_PHYS_TO_VIRT(SYSSWITCH_BASE_ADDR)
#define KONA_SYSTMR_VA			HW_IO_PHYS_TO_VIRT(TIMER_BASE_ADDR)
#define KONA_TMR_HUB_VA			HW_IO_PHYS_TO_VIRT(HUB_TIMER_BASE_ADDR)
#define KONA_HUB_CLK_VA			HW_IO_PHYS_TO_VIRT(HUB_CLK_BASE_ADDR)
#define KONA_HUB_RST_VA			HW_IO_PHYS_TO_VIRT(HUB_RST_BASE_ADDR)
#define KONA_TZCFG_VA			HW_IO_PHYS_TO_VIRT(TZCFG_BASE_ADDR)
#define KONA_UART0_VA			HW_IO_PHYS_TO_VIRT(UARTB_BASE_ADDR)
#define KONA_UART1_VA			HW_IO_PHYS_TO_VIRT(UARTB2_BASE_ADDR)
#define KONA_UART2_VA			HW_IO_PHYS_TO_VIRT(UARTB3_BASE_ADDR)
#define KONA_USB_FSHOST_VA		HW_IO_PHYS_TO_VIRT(FSHOST_BASE_ADDR)
#define KONA_USB_FSHOST_CTRL_VA		HW_IO_PHYS_TO_VIRT(FSHOST_CTRL_BASE_ADDR)
#define KONA_USB_HSOTG_VA		HW_IO_PHYS_TO_VIRT(HSOTG_BASE_ADDR)
#define KONA_USB_HSOTG_CTRL_VA		HW_IO_PHYS_TO_VIRT(HSOTG_CTRL_BASE_ADDR)
#define KONA_BINTC_BASE_ADDR		HW_IO_PHYS_TO_VIRT(BINTC_BASE_ADDR)
#define KONA_DSI0_VA			HW_IO_PHYS_TO_VIRT(DSI0_BASE_ADDR)
#define KONA_PIXELVALVE_VA		HW_IO_PHYS_TO_VIRT(PIXELVALVE_BASE_ADDR)
#define KONA_AXIPV_VA			HW_IO_PHYS_TO_VIRT(AXIPV_BASE_ADDR)
#define KONA_H264ASYNC_VA 		HW_IO_PHYS_TO_VIRT(H264ASYNC_BASE_ADDR)
#define KONA_SMI_VA			HW_IO_PHYS_TO_VIRT(SMI_BASE_ADDR)
#define KONA_MM_CLK_VA			HW_IO_PHYS_TO_VIRT(MM_CLK_BASE_ADDR)
#define KONA_MM_SWITCH_VA		HW_IO_PHYS_TO_VIRT(MM_SWITCH_BASE_ADDR)
#define KONA_MM_RST_VA			HW_IO_PHYS_TO_VIRT(MM_RST_BASE_ADDR)
#define KONA_MM_TECTL_VA		HW_IO_PHYS_TO_VIRT(MM_TECTL_BASE_ADDR)
#define KONA_MM_CSI0_VA			HW_IO_PHYS_TO_VIRT(MM_CSI0_BASE_ADDR)
#define KONA_MM_DMA_VA			HW_IO_PHYS_TO_VIRT(MM_DMA_BASE_ADDR)
#define KONA_MM_CFG_VA			HW_IO_PHYS_TO_VIRT(MM_CFG_BASE_ADDR)
#define KONA_PWRMGR_VA			HW_IO_PHYS_TO_VIRT(PWRMGR_BASE_ADDR)
#define KONA_ACI_VA			IOMEM(HW_IO_PHYS_TO_VIRT(ACI_BASE_ADDR))
#define KONA_AUXMIC_VA			IOMEM(HW_IO_PHYS_TO_VIRT(AUXMIC_BASE_ADDR))
#define KONA_AUDIOH_VA			HW_IO_PHYS_TO_VIRT(AUDIOH_BASE_ADDR)
#define KONA_HUB_CLK_BASE_VA		HW_IO_PHYS_TO_VIRT(HUB_CLK_BASE_ADDR)
#define KONA_AUDIOH_BASE_VA		HW_IO_PHYS_TO_VIRT(AUDIOH_BASE_ADDR)
#define KONA_SDT_BASE_VA		HW_IO_PHYS_TO_VIRT(SDT_BASE_ADDR)
#define KONA_SSP4_BASE_VA		HW_IO_PHYS_TO_VIRT(SSP4_BASE_ADDR)
#define KONA_SSP3_BASE_VA		HW_IO_PHYS_TO_VIRT(SSP3_BASE_ADDR)
#define KONA_SRCMIXER_BASE_VA		HW_IO_PHYS_TO_VIRT(SRCMIXER_BASE_ADDR)
#define KONA_CFIFO_BASE_VA		HW_IO_PHYS_TO_VIRT(CFIFO_BASE_ADDR)
#define KONA_AADMAC_BASE_VA		HW_IO_PHYS_TO_VIRT(AADMAC_BASE_ADDR)
#define KONA_SSASW_BASE_VA		HW_IO_PHYS_TO_VIRT(SSASW_BASE_ADDR)
#define KONA_AHINTC_BASE_VA		HW_IO_PHYS_TO_VIRT(AHINTC_BASE_ADDR)
#define KONA_HUB_FUNNEL_VA		HW_IO_PHYS_TO_VIRT(HUB_FUNNEL_BASE_ADDR)
#define KONA_FAB_FUNNEL1_VA		HW_IO_PHYS_TO_VIRT(FAB_FUNNEL1_BASE_ADDR)
#define KONA_BMODEM_FUNNEL_VA		HW_IO_PHYS_TO_VIRT(BMODEM_FUNNEL_BASE_ADDR)
#define KONA_AXITRACE1_VA		HW_IO_PHYS_TO_VIRT(AXITRACE1_BASE_ADDR)
#define KONA_AXITRACE2_VA		HW_IO_PHYS_TO_VIRT(AXITRACE2_BASE_ADDR)
#define KONA_AXITRACE3_VA		HW_IO_PHYS_TO_VIRT(AXITRACE3_BASE_ADDR)
#define KONA_AXITRACE4_VA		HW_IO_PHYS_TO_VIRT(AXITRACE4_BASE_ADDR)
#define KONA_AXITRACE11_VA		HW_IO_PHYS_TO_VIRT(AXITRACE11_BASE_ADDR)
#define KONA_AXITRACE12_VA		HW_IO_PHYS_TO_VIRT(AXITRACE12_BASE_ADDR)
#define KONA_AXITRACE16_VA		HW_IO_PHYS_TO_VIRT(AXITRACE16_BASE_ADDR)
#define KONA_AXITRACE17_VA		HW_IO_PHYS_TO_VIRT(AXITRACE17_BASE_ADDR)
#define KONA_AXITP18_VA			HW_IO_PHYS_TO_VIRT(AXITP18_BASE_ADDR)
#define KONA_AXITRACE19_VA		HW_IO_PHYS_TO_VIRT(AXITRACE19_BASE_ADDR)
#define KONA_HUB_CTI_VA			HW_IO_PHYS_TO_VIRT(HUB_CTI_BASE_ADDR)
#define KONA_MM_CTI_VA			HW_IO_PHYS_TO_VIRT(MM_CTI_BASE_ADDR)
#define KONA_FAB_CTI_VA			HW_IO_PHYS_TO_VIRT(FAB_CTI_BASE_ADDR)
#define KONA_A9CTI0_VA			HW_IO_PHYS_TO_VIRT(A9CTI0_BASE_ADDR)
#define KONA_BMODEM_CTI_VA		HW_IO_PHYS_TO_VIRT(BMODEM_CTI_BASE_ADDR)
#define KONA_ETB_VA			HW_IO_PHYS_TO_VIRT(ETB_BASE_ADDR)
#define KONA_ETB2AXI_VA			HW_IO_PHYS_TO_VIRT(ETB2AXI_BASE_ADDR)
#define KONA_GLOBPERF_VA		HW_IO_PHYS_TO_VIRT(GLOBPERF_BASE_ADDR)
#define KONA_GICTR_VA			HW_IO_PHYS_TO_VIRT(GICTR_BASE_ADDR)
#define KONA_PWRWDOG_VA			HW_IO_PHYS_TO_VIRT(PWRWDOG_BASE_ADDR)
#define KONA_A9CPU0_VA			HW_IO_PHYS_TO_VIRT(A9CPU0_BASE_ADDR)
#define KONA_A9CPU1_VA			HW_IO_PHYS_TO_VIRT(A9CPU1_BASE_ADDR)
#define KONA_A9PMU0_VA			HW_IO_PHYS_TO_VIRT(A9PMU0_BASE_ADDR)
#define KONA_A9PTM0_VA			HW_IO_PHYS_TO_VIRT(A9PTM0_BASE_ADDR)
#define KONA_A9PTM1_VA			HW_IO_PHYS_TO_VIRT(A9PTM1_BASE_ADDR)
#define KONA_DSP_CCU_VA			HW_IO_PHYS_TO_VIRT(DSP_CCU_BASE_ADDR)
#define KONA_RESERVED_ROM_VA		HW_IO_PHYS_TO_VIRT(0x3404B000)
#define KONA_TMON_VA                    HW_IO_PHYS_TO_VIRT(TMON_BASE_ADDR)
#endif /* __ASSEMBLY__ */

#define KONA_UART_LLDEBUG_VA		KONA_UART0_VA
#define KONA_UART_LLDEBUG_PA		UARTB_BASE_ADDR

#endif /* __HAWAII_IO_MAP_H */
