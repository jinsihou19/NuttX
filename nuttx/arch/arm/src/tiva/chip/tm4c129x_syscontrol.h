/********************************************************************************************
 * arch/arm/src/tiva/chip/tm4c129x_syscontrol.h
 *
 *   Copyright (C) 2014 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

#ifndef __ARCH_ARM_SRC_TIVA_CHIP_TM4C129X_SYSCONTROL_H
#define __ARCH_ARM_SRC_TIVA_CHIP_TM4C129X_SYSCONTROL_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/

/* System Control Register Offsets **********************************************************/
/* System Control Registers (System Control Offset) */

#define TIVA_SYSCON_DID0_OFFSET        0x0000 /* Device Identification 0 */
#define TIVA_SYSCON_DID1_OFFSET        0x0004 /* Device Identification 1 */
#define TIVA_SYSCON_PTBOCTL_OFFSET     0x0038 /* Power-Temp Brown Out Control */
#define TIVA_SYSCON_RIS_OFFSET         0x0050 /* Raw Interrupt Status */
#define TIVA_SYSCON_IMC_OFFSET         0x0054 /* Interrupt Mask Control */
#define TIVA_SYSCON_MISC_OFFSET        0x0058 /* Masked Interrupt Status and Clear */
#define TIVA_SYSCON_RESC_OFFSET        0x005c /* Reset Cause */
#define TIVA_SYSCON_PWRTC_OFFSET       0x0060 /* Power-Temperature Cause */
#define TIVA_SYSCON_NMIC_OFFSET        0x0064 /* NMI Cause Register */
#define TIVA_SYSCON_MOSCCTL_OFFSET     0x007c /* Main Oscillator Control */
#define TIVA_SYSCON_RSCLKCFG_OFFSET    0x00b0 /* Run and Sleep Mode Configuration Register */
#define TIVA_SYSCON_MEMTIM0_OFFSET     0x00c0 /* Memory Timing Parameter Register 0 */
#define TIVA_SYSCON_ALTCLKCFG_OFFSET   0x0138 /* Alternate Clock Configuration */
#define TIVA_SYSCON_DSCLKCFG_OFFSET    0x0144 /* Deep Sleep Clock Configuration Register */
#define TIVA_SYSCON_DIVSCLK_OFFSET     0x0148 /* Divisor and Source Clock Configuration */
#define TIVA_SYSCON_SYSPROP_OFFSET     0x014c /* System Properties */
#define TIVA_SYSCON_PIOSCCAL_OFFSET    0x0150 /* Precision Internal Oscillator Calibration */
#define TIVA_SYSCON_PIOSCSTAT_OFFSET   0x0154 /* Precision Internal Oscillator Statistics */
#define TIVA_SYSCON_PLLFREQ0_OFFSET    0x0160 /* PLL Frequency 0 */
#define TIVA_SYSCON_PLLFREQ1_OFFSET    0x0164 /* PLL Frequency 1 */
#define TIVA_SYSCON_PLLSTAT_OFFSET     0x0168 /* PLL Status */
#define TIVA_SYSCON_SLPPWRCFG_OFFSET   0x0188 /* Sleep Power Configuration */
#define TIVA_SYSCON_DSLPPWRCFG_OFFSET  0x018c /* Deep-Sleep Power Configuration */
#define TIVA_SYSCON_NVMSTAT_OFFSET     0x01a0 /* Non-Volatile Memory Information */
#define TIVA_SYSCON_LDOSPCTL_OFFSET    0x01b4 /* LDO Sleep Power Control */
#define TIVA_SYSCON_LDOSPCAL_OFFSET    0x01b8 /* LDO Sleep Power Calibration */
#define TIVA_SYSCON_LDODPCTL_OFFSET    0x01bc /* LDO Deep-Sleep Power Control */
#define TIVA_SYSCON_LDODPCAL_OFFSET    0x01c0 /* LDO Deep-Sleep Power Calibration */
#define TIVA_SYSCON_SDPMST_OFFSET      0x01cc /* Sleep / Deep-Sleep Power Mode Status */
#define TIVA_SYSCON_RESBEHAVCTL_OFFSET 0x01d8 /* Reset Behavior Control Register */
#define TIVA_SYSCON_HSSR_OFFSET        0x01f4 /* Hardware System Service Request */
#define TIVA_SYSCON_USBPDS_OFFSET      0x0280 /* USB Power Domain Status */
#define TIVA_SYSCON_USBMPC_OFFSET      0x0284 /* USB Memory Power Control */
#define TIVA_SYSCON_EMACPDS_OFFSET     0x0288 /* Ethernet MAC Power Domain Status */
#define TIVA_SYSCON_EMACMPC_OFFSET     0x028c /* Ethernet MAC Memory Power Control */
#define TIVA_SYSCON_LCDPDS_OFFSET      0x0290 /* LCD Power Domain Status */
#define TIVA_SYSCON_LCDMPC_OFFSET      0x0294 /* LCD Memory Power Control */
#define TIVA_SYSCON_CAN0PDS_OFFSET     0x0298 /* CAN 0 Power Domain Status */
#define TIVA_SYSCON_CAN0MPC_OFFSET     0x029c /* CAN 0 Memory Power Control */
#define TIVA_SYSCON_CAN1PDS_OFFSET     0x02a0 /* CAN 1 Power Domain Status */
#define TIVA_SYSCON_CAN1MPC_OFFSET     0x02a4 /* CAN 1 Memory Power Control */
#define TIVA_SYSCON_PPWD_OFFSET        0x0300 /* Watchdog Timer Peripheral Present */
#define TIVA_SYSCON_PPTIMER_OFFSET     0x0304 /* 16/32-Bit Timer Peripheral Present */
#define TIVA_SYSCON_PPGPIO_OFFSET      0x0308 /* GPIO Peripheral Present */
#define TIVA_SYSCON_PPDMA_OFFSET       0x030c /* uDMA Peripheral Present */
#define TIVA_SYSCON_PPEPI_OFFSET       0x0310 /* EPI Peripheral Present */
#define TIVA_SYSCON_PPHIB_OFFSET       0x0314 /* Hibernation Peripheral Present */
#define TIVA_SYSCON_PPUART_OFFSET      0x0318 /* UART Peripheral Present */
#define TIVA_SYSCON_PPSSI_OFFSET       0x031c /* SSI Peripheral Present */
#define TIVA_SYSCON_PPI2C_OFFSET       0x0320 /* I2C Peripheral Present */
#define TIVA_SYSCON_PPUSB_OFFSET       0x0328 /* USB Peripheral Present */
#define TIVA_SYSCON_PPEPHY_OFFSET      0x0330 /* Ethernet PHY Peripheral Present */
#define TIVA_SYSCON_PPCAN_OFFSET       0x0334 /* CAN Peripheral Present */
#define TIVA_SYSCON_PPADC_OFFSET       0x0338 /* ADC Peripheral Present */
#define TIVA_SYSCON_PPACMP_OFFSET      0x033c /* ACMP Peripheral Present */
#define TIVA_SYSCON_PPPWM_OFFSET       0x0340 /* PWM Peripheral Present */
#define TIVA_SYSCON_PPQEI_OFFSET       0x0344 /* QE Interface Peripheral Present */
#define TIVA_SYSCON_PPLPC_OFFSET       0x0348 /* Low Pin Count Interface Peripheral Present */
#define TIVA_SYSCON_PPPECI_OFFSET      0x0350 /* Platform Environment Control Interface Peripheral Present */
#define TIVA_SYSCON_PPFAN_OFFSET       0x0354 /* Fan Control Peripheral Present */
#define TIVA_SYSCON_PPEEPROM_OFFSET    0x0358 /* EEPROM Peripheral Present */
#define TIVA_SYSCON_PPWTIMER_OFFSET    0x035c /* 32/64-Bit Wide Timer Peripheral Present */
#define TIVA_SYSCON_PPRTS_OFFSET       0x0370 /* Remote Temperature Sensor Peripheral Present */
#define TIVA_SYSCON_PPCCM_OFFSET       0x0374 /* CRC/Crypto Modules Peripheral Present */
#define TIVA_SYSCON_PPLCD_OFFSET       0x0390 /* LCD Peripheral Present */
#define TIVA_SYSCON_PPOWIRE_OFFSET     0x0398 /* 1-Wire Peripheral Present */
#define TIVA_SYSCON_PPEMAC_OFFSET      0x039c /* Ethernet MAC Peripheral Present */
#define TIVA_SYSCON_PPPRB_OFFSET       0x03a0 /* Power Regulator Bus Peripheral Present */
#define TIVA_SYSCON_PPHIM_OFFSET       0x03a4 /* Human Interface Master Peripheral Present */
#define TIVA_SYSCON_SRWD_OFFSET        0x0500 /* Watchdog Timer Software Reset */
#define TIVA_SYSCON_SRTIMER_OFFSET     0x0504 /* 16/32-Bit Timer Software Reset */
#define TIVA_SYSCON_SRGPIO_OFFSET      0x0508 /* GPIO Software Reset */
#define TIVA_SYSCON_SRDMA_OFFSET       0x050c /* uDMA Software Reset */
#define TIVA_SYSCON_SREPI_OFFSET       0x0510 /* EPI Software Reset */
#define TIVA_SYSCON_SRHIB_OFFSET       0x0514 /* Hibernation Software Reset */
#define TIVA_SYSCON_SRUART_OFFSET      0x0518 /* UART Software Reset */
#define TIVA_SYSCON_SRSSI_OFFSET       0x051c /* SSI Software Reset */
#define TIVA_SYSCON_SRI2C_OFFSET       0x0520 /* I2C Software Reset */
#define TIVA_SYSCON_SRUSB_OFFSET       0x0528 /* USB Software Reset */
#define TIVA_SYSCON_SREPHY_OFFSET      0x0530 /* Ethernet PHY Software Reset */
#define TIVA_SYSCON_SRCAN_OFFSET       0x0534 /* CAN Software Reset */
#define TIVA_SYSCON_SRADC_OFFSET       0x0538 /* ADC Software Reset */
#define TIVA_SYSCON_SRACMP_OFFSET      0x053c /* ACMP Software Reset */
#define TIVA_SYSCON_SRPWM_OFFSET       0x0540 /* PWM Software Reset */
#define TIVA_SYSCON_SRQEI_OFFSET       0x0544 /* QE Interface Software Reset */
#define TIVA_SYSCON_SREEPROM_OFFSET    0x0558 /* EEPROM Software Reset */
#define TIVA_SYSCON_SRCCM_OFFSET       0x0574 /* CRC/Crypto Modules Software Reset */
#define TIVA_SYSCON_SRLCD_OFFSET       0x0590 /* LCD Controller Software Reset */
#define TIVA_SYSCON_SROWIRE_OFFSET     0x0598 /* 1-Wire Software Reset */
#define TIVA_SYSCON_SREMAC_OFFSET      0x059c /* Ethernet MAC Software Reset */
#define TIVA_SYSCON_RCGCWD_OFFSET      0x0600 /* Watchdog Timer Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCTIMER_OFFSET   0x0604 /* 16/32-Bit Timer Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCGPIO_OFFSET    0x0608 /* GPIO Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCDMA_OFFSET     0x060c /* uDMA Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEPI_OFFSET     0x0610 /* EPI Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCHIB_OFFSET     0x0614 /* Hibernation Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCUART_OFFSET    0x0618 /* UART Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCSSI_OFFSET     0x061c /* SSI Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCI2C_OFFSET     0x0620 /* I2C Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCUSB_OFFSET     0x0628 /* USB Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEPHY_OFFSET    0x0630 /* Ethernet PHY Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCCAN_OFFSET     0x0634 /* CAN RunMode Clock Gating Control */
#define TIVA_SYSCON_RCGCADC_OFFSET     0x0638 /* ADC Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCACMP_OFFSET    0x063c /* ACMP Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCPWM_OFFSET     0x0640 /* PWM Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCQEI_OFFSET     0x0644 /* QE Interface Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEEPROM_OFFSET  0x0658 /* EEPROM Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCCCM_OFFSET     0x0674 /* CRC/CryptoModules RunMode ClockGating Control */
#define TIVA_SYSCON_RCGCLCD_OFFSET     0x0690 /* LCD Controller Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCOWIRE_OFFSET   0x0698 /* 1-Wire Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEMAC_OFFSET    0x069c /* Ethernet MAC Run Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCWD_OFFSET      0x0700 /* Watchdog Timer Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCTIMER_OFFSET   0x0704 /* 16/32-Bit Timer Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCGPIO_OFFSET    0x0708 /* GPIO Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCDMA_OFFSET     0x070c /* uDMA Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEPI_OFFSET     0x0710 /* EPI Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCHIB_OFFSET     0x0714 /* Hibernation Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCUART_OFFSET    0x0718 /* UART Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCSSI_OFFSET     0x071c /* SSI Sleep Mode Clock GatingControl */
#define TIVA_SYSCON_SCGCI2C_OFFSET     0x0720 /* I2C Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCUSB_OFFSET     0x0728 /* USB Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEPHY_OFFSET    0x0730 /* Ethernet PHY Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCCAN_OFFSET     0x0734 /* CAN Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCADC_OFFSET     0x0738 /* ADC Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCACMP_OFFSET    0x073c /* ACMP Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCPWM_OFFSET     0x0740 /* PulseWidthModulator Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCQEI_OFFSET     0x0744 /* QE Interface Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEEPROM_OFFSET  0x0758 /* EEPROM Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCCCM_OFFSET     0x0774 /* CRC/Crypto Modules Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCLCD_OFFSET     0x0790 /* LCD Controller Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCOWIRE_OFFSET   0x0798 /* 1-Wire Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEMAC_OFFSET    0x079c /* Ethernet MAC Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCWD_OFFSET      0x0800 /* Watchdog Timer Deep-SleepMode Clock Gating Control */
#define TIVA_SYSCON_DCGCTIMER_OFFSET   0x0804 /* 16/32-Bit Timer Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCGPIO_OFFSET    0x0808 /* GPIO Deep-Sleep Mode Clock */
#define TIVA_SYSCON_DCGCDMA_OFFSET     0x080c /* uDMA Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEPI_OFFSET     0x0810 /* EPI Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCHIB_OFFSET     0x0814 /* Hibernation Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCUART_OFFSET    0x0818 /* UART Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCSSI_OFFSET     0x081c /* SSI Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCI2C_OFFSET     0x0820 /* I2C Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCUSB_OFFSET     0x0828 /* USB Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEPHY_OFFSET    0x0830 /* Ethernet PHY Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCCAN_OFFSET     0x0834 /* CAN Deep-SleepMode Clock Gating Control */
#define TIVA_SYSCON_DCGCADC_OFFSET     0x0838 /* ADC Deep-Sleep Mode ClockGating Control */
#define TIVA_SYSCON_DCGCACMP_OFFSET    0x083c /* ACMP Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCPWM_OFFSET     0x0840 /* PWM Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCQEI_OFFSET     0x0844 /* QE Interface Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEEPROM_OFFSET  0x0858 /* EEPROM Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCCCM_OFFSET     0x0874 /* CRC/Crypto Modules Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCLCD_OFFSET     0x0890 /* LCD Controller Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCOWIRE_OFFSET   0x0898 /* 1-Wire Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEMAC_OFFSET    0x089c /* Ethernet MAC Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_PCWD_OFFSET        0x0900 /* Watchdog Timer Power Control */
#define TIVA_SYSCON_PCTIMER_OFFSET     0x0904 /* 16/32-Bit Timer Power Control */
#define TIVA_SYSCON_PCGPIO_OFFSET      0x0908 /* GPIO Power Control */
#define TIVA_SYSCON_PCDMA_OFFSET       0x090c /* uDMA Power Control */
#define TIVA_SYSCON_PCEPI_OFFSET       0x0910 /* External Peripheral Interface Power Control */
#define TIVA_SYSCON_PCHIB_OFFSET       0x0914 /* Hibernation Power Control */
#define TIVA_SYSCON_PCUART_OFFSET      0x0918 /* UART Power Control */
#define TIVA_SYSCON_PCSSI_OFFSET       0x091c /* SSI Power Control */
#define TIVA_SYSCON_PCI2C_OFFSET       0x0920 /* I2C Power Control */
#define TIVA_SYSCON_PCUSB_OFFSET       0x0928 /* USB Power Control */
#define TIVA_SYSCON_PCEPHY_OFFSET      0x0930 /* Ethernet PHY Power Control */
#define TIVA_SYSCON_PCCAN_OFFSET       0x0934 /* CAN Power Control */
#define TIVA_SYSCON_PCADC_OFFSET       0x0938 /* ADC Power Control */
#define TIVA_SYSCON_PCACMP_OFFSET      0x093c /* ACMP Power Control */
#define TIVA_SYSCON_PCPWM_OFFSET       0x0940 /* PWM Power Control */
#define TIVA_SYSCON_PCQEI_OFFSET       0x0944 /* QE Interface Power Control */
#define TIVA_SYSCON_PCEEPROM_OFFSET    0x0958 /* EEPROM Power Control */
#define TIVA_SYSCON_PCCCM_OFFSET       0x0974 /* CRC/Crypto Modules Power Control */
#define TIVA_SYSCON_PCLCD_OFFSET       0x0990 /* LCD Controller Power Control */
#define TIVA_SYSCON_PCOWIRE_OFFSET     0x0998 /* 1-Wire Power Control */
#define TIVA_SYSCON_PCEMAC_OFFSET      0x099c /* Ethernet MAC Power Control */
#define TIVA_SYSCON_PRWD_OFFSET        0x0a00 /* Watchdog Timer Peripheral Ready */
#define TIVA_SYSCON_PRTIMER_OFFSET     0x0a04 /* 16/32-Bit Timer Peripheral Ready */
#define TIVA_SYSCON_PRGPIO_OFFSET      0x0a08 /* GPIO Peripheral Ready */
#define TIVA_SYSCON_PRDMA_OFFSET       0x0a0c /* uDMA Peripheral Ready */
#define TIVA_SYSCON_PREPI_OFFSET       0x0a10 /* EPI Peripheral Ready */
#define TIVA_SYSCON_PRHIB_OFFSET       0x0a14 /* Hibernation Peripheral Ready */
#define TIVA_SYSCON_PRUART_OFFSET      0x0a18 /* UART Peripheral Ready */
#define TIVA_SYSCON_PRSSI_OFFSET       0x0a1c /* SSI Peripheral Ready */
#define TIVA_SYSCON_PRI2C_OFFSET       0x0a20 /* I2C Peripheral Ready */
#define TIVA_SYSCON_PRUSB_OFFSET       0x0a28 /* USB Peripheral Ready */
#define TIVA_SYSCON_PREPHY_OFFSET      0x0a30 /* Ethernet PHY Peripheral Ready */
#define TIVA_SYSCON_PRCAN_OFFSET       0x0a34 /* CAN Peripheral Ready */
#define TIVA_SYSCON_PRADC_OFFSET       0x0a38 /* ADC Peripheral Ready */
#define TIVA_SYSCON_PRACMP_OFFSET      0x0a3c /* ACMP Peripheral Ready */
#define TIVA_SYSCON_PRPWM_OFFSET       0x0a40 /* PWM Peripheral Ready */
#define TIVA_SYSCON_PRQEI_OFFSET       0x0a44 /* QE Interface Peripheral Ready */
#define TIVA_SYSCON_PREEPROM_OFFSET    0x0a58 /* EEPROM Peripheral Ready */
#define TIVA_SYSCON_PRCCM_OFFSET       0x0a74 /* CRC/Crypto Modules Peripheral Ready */
#define TIVA_SYSCON_PRLCD_OFFSET       0x0a90 /* LCD Controller Peripheral Ready */
#define TIVA_SYSCON_PROWIRE_OFFSET     0x0a98 /* 1-Wire Peripheral Ready */
#define TIVA_SYSCON_PREMAC_OFFSET      0x0a9c /* Ethernet MAC Peripheral Ready */
#define TIVA_SYSCON_UNIQUEID0_OFFSET   0x0f20 /* Unique ID 0 */
#define TIVA_SYSCON_UNIQUEID1_OFFSET   0x0f24 /* Unique ID 1 */
#define TIVA_SYSCON_UNIQUEID2_OFFSET   0x0f28 /* Unique ID 2 */
#define TIVA_SYSCON_UNIQUEID3_OFFSET   0x0f2c /* Unique ID 3 */

/*( CCM System Control Registers (CCM Control Offset) */

#define TIVA_SYSCON_CCMCGREQ_OFFSET    0x0204 /* Cryptographic Modules Clock Gating Request */

/* System Control Register Addresses ********************************************************/

/* System Control Registers (System Control Offset) */

#define TIVA_SYSCON_DID0               (TIVA_SYSCON_BASE+TIVA_SYSCON_DID0_OFFSET)
#define TIVA_SYSCON_DID1               (TIVA_SYSCON_BASE+TIVA_SYSCON_DID1_OFFSET)
#define TIVA_SYSCON_PTBOCTL            (TIVA_SYSCON_BASE+TIVA_SYSCON_PTBOCTL_OFFSET)
#define TIVA_SYSCON_RIS                (TIVA_SYSCON_BASE+TIVA_SYSCON_RIS_OFFSET)
#define TIVA_SYSCON_IMC                (TIVA_SYSCON_BASE+TIVA_SYSCON_IMC_OFFSET)
#define TIVA_SYSCON_MISC               (TIVA_SYSCON_BASE+TIVA_SYSCON_MISC_OFFSET)
#define TIVA_SYSCON_RESC               (TIVA_SYSCON_BASE+TIVA_SYSCON_RESC_OFFSET)
#define TIVA_SYSCON_PWRTC              (TIVA_SYSCON_BASE+TIVA_SYSCON_PWRTC_OFFSET)
#define TIVA_SYSCON_NMIC               (TIVA_SYSCON_BASE+TIVA_SYSCON_NMIC_OFFSET)
#define TIVA_SYSCON_MOSCCTL            (TIVA_SYSCON_BASE+TIVA_SYSCON_MOSCCTL_OFFSET)
#define TIVA_SYSCON_RSCLKCFG           (TIVA_SYSCON_BASE+TIVA_SYSCON_RSCLKCFG_OFFSET)
#define TIVA_SYSCON_MEMTIM0            (TIVA_SYSCON_BASE+TIVA_SYSCON_MEMTIM0_OFFSET)
#define TIVA_SYSCON_ALTCLKCFG          (TIVA_SYSCON_BASE+TIVA_SYSCON_ALTCLKCFG_OFFSET)
#define TIVA_SYSCON_DSCLKCFG           (TIVA_SYSCON_BASE+TIVA_SYSCON_DSCLKCFG_OFFSET)
#define TIVA_SYSCON_DIVSCLK            (TIVA_SYSCON_BASE+TIVA_SYSCON_DIVSCLK_OFFSET)
#define TIVA_SYSCON_SYSPROP            (TIVA_SYSCON_BASE+TIVA_SYSCON_SYSPROP_OFFSET)
#define TIVA_SYSCON_PIOSCCAL           (TIVA_SYSCON_BASE+TIVA_SYSCON_PIOSCCAL_OFFSET)
#define TIVA_SYSCON_PIOSCSTAT          (TIVA_SYSCON_BASE+TIVA_SYSCON_PIOSCSTAT_OFFSET)
#define TIVA_SYSCON_PLLFREQ0           (TIVA_SYSCON_BASE+TIVA_SYSCON_PLLFREQ0_OFFSET)
#define TIVA_SYSCON_PLLFREQ1           (TIVA_SYSCON_BASE+TIVA_SYSCON_PLLFREQ1_OFFSET)
#define TIVA_SYSCON_PLLSTAT            (TIVA_SYSCON_BASE+TIVA_SYSCON_PLLSTAT_OFFSET)
#define TIVA_SYSCON_SLPPWRCFG          (TIVA_SYSCON_BASE+TIVA_SYSCON_SLPPWRCFG_OFFSET)
#define TIVA_SYSCON_DSLPPWRCFG         (TIVA_SYSCON_BASE+TIVA_SYSCON_DSLPPWRCFG_OFFSET)
#define TIVA_SYSCON_NVMSTAT            (TIVA_SYSCON_BASE+TIVA_SYSCON_NVMSTAT_OFFSET)
#define TIVA_SYSCON_LDOSPCTL           (TIVA_SYSCON_BASE+TIVA_SYSCON_LDOSPCTL_OFFSET)
#define TIVA_SYSCON_LDOSPCAL           (TIVA_SYSCON_BASE+TIVA_SYSCON_LDOSPCAL_OFFSET)
#define TIVA_SYSCON_LDODPCTL           (TIVA_SYSCON_BASE+TIVA_SYSCON_LDODPCTL_OFFSET)
#define TIVA_SYSCON_LDODPCAL           (TIVA_SYSCON_BASE+TIVA_SYSCON_LDODPCAL_OFFSET)
#define TIVA_SYSCON_SDPMST             (TIVA_SYSCON_BASE+TIVA_SYSCON_SDPMST_OFFSET)
#define TIVA_SYSCON_RESBEHAVCTL        (TIVA_SYSCON_BASE+TIVA_SYSCON_RESBEHAVCTL_OFFSET)
#define TIVA_SYSCON_HSSR               (TIVA_SYSCON_BASE+TIVA_SYSCON_HSSR_OFFSET)
#define TIVA_SYSCON_USBPDS             (TIVA_SYSCON_BASE+TIVA_SYSCON_USBPDS_OFFSET)
#define TIVA_SYSCON_USBMPC             (TIVA_SYSCON_BASE+TIVA_SYSCON_USBMPC_OFFSET)
#define TIVA_SYSCON_EMACPDS            (TIVA_SYSCON_BASE+TIVA_SYSCON_EMACPDS_OFFSET)
#define TIVA_SYSCON_EMACMPC            (TIVA_SYSCON_BASE+TIVA_SYSCON_EMACMPC_OFFSET)
#define TIVA_SYSCON_LCDPDS             (TIVA_SYSCON_BASE+TIVA_SYSCON_LCDPDS_OFFSET)
#define TIVA_SYSCON_LCDMPC             (TIVA_SYSCON_BASE+TIVA_SYSCON_LCDMPC_OFFSET)
#define TIVA_SYSCON_CAN0PDS            (TIVA_SYSCON_BASE+TIVA_SYSCON_CAN0PDS_OFFSET)
#define TIVA_SYSCON_CAN0MPC            (TIVA_SYSCON_BASE+TIVA_SYSCON_CAN0MPC_OFFSET)
#define TIVA_SYSCON_CAN1PDS            (TIVA_SYSCON_BASE+TIVA_SYSCON_CAN1PDS_OFFSET)
#define TIVA_SYSCON_CAN1MPC            (TIVA_SYSCON_BASE+TIVA_SYSCON_CAN1MPC_OFFSET)
#define TIVA_SYSCON_PPWD               (TIVA_SYSCON_BASE+TIVA_SYSCON_PPWD_OFFSET)
#define TIVA_SYSCON_PPTIMER            (TIVA_SYSCON_BASE+TIVA_SYSCON_PPTIMER_OFFSET)
#define TIVA_SYSCON_PPGPIO             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPGPIO_OFFSET)
#define TIVA_SYSCON_PPDMA              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPDMA_OFFSET)
#define TIVA_SYSCON_PPEPI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPEPI_OFFSET)
#define TIVA_SYSCON_PPHIB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPHIB_OFFSET)
#define TIVA_SYSCON_PPUART             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPUART_OFFSET)
#define TIVA_SYSCON_PPSSI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPSSI_OFFSET)
#define TIVA_SYSCON_PPI2C              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPI2C_OFFSET)
#define TIVA_SYSCON_PPUSB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPUSB_OFFSET)
#define TIVA_SYSCON_PPEPHY             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPEPHY_OFFSET)
#define TIVA_SYSCON_PPCAN              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPCAN_OFFSET)
#define TIVA_SYSCON_PPADC              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPADC_OFFSET)
#define TIVA_SYSCON_PPACMP             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPACMP_OFFSET)
#define TIVA_SYSCON_PPPWM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPPWM_OFFSET)
#define TIVA_SYSCON_PPQEI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPQEI_OFFSET)
#define TIVA_SYSCON_PPLPC              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPLPC_OFFSET)
#define TIVA_SYSCON_PPPECI             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPPECI_OFFSET)
#define TIVA_SYSCON_PPFAN              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPFAN_OFFSET)
#define TIVA_SYSCON_PPEEPROM           (TIVA_SYSCON_BASE+TIVA_SYSCON_PPEEPROM_OFFSET)
#define TIVA_SYSCON_PPWTIMER           (TIVA_SYSCON_BASE+TIVA_SYSCON_PPWTIMER_OFFSET)
#define TIVA_SYSCON_PPRTS              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPRTS_OFFSET)
#define TIVA_SYSCON_PPCCM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPCCM_OFFSET)
#define TIVA_SYSCON_PPLCD              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPLCD_OFFSET)
#define TIVA_SYSCON_PPOWIRE            (TIVA_SYSCON_BASE+TIVA_SYSCON_PPOWIRE_OFFSET)
#define TIVA_SYSCON_PPEMAC             (TIVA_SYSCON_BASE+TIVA_SYSCON_PPEMAC_OFFSET)
#define TIVA_SYSCON_PPPRB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPPRB_OFFSET)
#define TIVA_SYSCON_PPHIM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PPHIM_OFFSET)
#define TIVA_SYSCON_SRWD               (TIVA_SYSCON_BASE+TIVA_SYSCON_SRWD_OFFSET)
#define TIVA_SYSCON_SRTIMER            (TIVA_SYSCON_BASE+TIVA_SYSCON_SRTIMER_OFFSET)
#define TIVA_SYSCON_SRGPIO             (TIVA_SYSCON_BASE+TIVA_SYSCON_SRGPIO_OFFSET)
#define TIVA_SYSCON_SRDMA              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRDMA_OFFSET)
#define TIVA_SYSCON_SREPI              (TIVA_SYSCON_BASE+TIVA_SYSCON_SREPI_OFFSET)
#define TIVA_SYSCON_SRHIB              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRHIB_OFFSET)
#define TIVA_SYSCON_SRUART             (TIVA_SYSCON_BASE+TIVA_SYSCON_SRUART_OFFSET)
#define TIVA_SYSCON_SRSSI              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRSSI_OFFSET)
#define TIVA_SYSCON_SRI2C              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRI2C_OFFSET)
#define TIVA_SYSCON_SRUSB              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRUSB_OFFSET)
#define TIVA_SYSCON_SREPHY             (TIVA_SYSCON_BASE+TIVA_SYSCON_SREPHY_OFFSET)
#define TIVA_SYSCON_SRCAN              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRCAN_OFFSET)
#define TIVA_SYSCON_SRADC              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRADC_OFFSET)
#define TIVA_SYSCON_SRACMP             (TIVA_SYSCON_BASE+TIVA_SYSCON_SRACMP_OFFSET)
#define TIVA_SYSCON_SRPWM              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRPWM_OFFSET)
#define TIVA_SYSCON_SRQEI              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRQEI_OFFSET)
#define TIVA_SYSCON_SREEPROM           (TIVA_SYSCON_BASE+TIVA_SYSCON_SREEPROM_OFFSET)
#define TIVA_SYSCON_SRCCM              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRCCM_OFFSET)
#define TIVA_SYSCON_SRLCD              (TIVA_SYSCON_BASE+TIVA_SYSCON_SRLCD_OFFSET)
#define TIVA_SYSCON_SROWIRE            (TIVA_SYSCON_BASE+TIVA_SYSCON_SROWIRE_OFFSET)
#define TIVA_SYSCON_SREMAC             (TIVA_SYSCON_BASE+TIVA_SYSCON_SREMAC_OFFSET)
#define TIVA_SYSCON_RCGCWD             (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCWD_OFFSET)
#define TIVA_SYSCON_RCGCTIMER          (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCTIMER_OFFSET)
#define TIVA_SYSCON_RCGCGPIO           (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCGPIO_OFFSET)
#define TIVA_SYSCON_RCGCDMA            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCDMA_OFFSET)
#define TIVA_SYSCON_RCGCEPI            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCEPI_OFFSET)
#define TIVA_SYSCON_RCGCHIB            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCHIB_OFFSET)
#define TIVA_SYSCON_RCGCUART           (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCUART_OFFSET)
#define TIVA_SYSCON_RCGCSSI            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCSSI_OFFSET)
#define TIVA_SYSCON_RCGCI2C            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCI2C_OFFSET)
#define TIVA_SYSCON_RCGCUSB            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCUSB_OFFSET)
#define TIVA_SYSCON_RCGCEPHY           (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCEPHY_OFFSET)
#define TIVA_SYSCON_RCGCCAN            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCCAN_OFFSET)
#define TIVA_SYSCON_RCGCADC            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCADC_OFFSET)
#define TIVA_SYSCON_RCGCACMP           (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCACMP_OFFSET)
#define TIVA_SYSCON_RCGCPWM            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCPWM_OFFSET)
#define TIVA_SYSCON_RCGCQEI            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCQEI_OFFSET)
#define TIVA_SYSCON_RCGCEEPROM         (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCEEPROM_OFFSET)
#define TIVA_SYSCON_RCGCCCM            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCCCM_OFFSET)
#define TIVA_SYSCON_RCGCLCD            (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCLCD_OFFSET)
#define TIVA_SYSCON_RCGCOWIRE          (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCOWIRE_OFFSET)
#define TIVA_SYSCON_RCGCEMAC           (TIVA_SYSCON_BASE+TIVA_SYSCON_RCGCEMAC_OFFSET)
#define TIVA_SYSCON_SCGCWD             (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCWD_OFFSET)
#define TIVA_SYSCON_SCGCTIMER          (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCTIMER_OFFSET)
#define TIVA_SYSCON_SCGCGPIO           (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCGPIO_OFFSET)
#define TIVA_SYSCON_SCGCDMA            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCDMA_OFFSET)
#define TIVA_SYSCON_SCGCEPI            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCEPI_OFFSET)
#define TIVA_SYSCON_SCGCHIB            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCHIB_OFFSET)
#define TIVA_SYSCON_SCGCUART           (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCUART_OFFSET)
#define TIVA_SYSCON_SCGCSSI            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCSSI_OFFSET)
#define TIVA_SYSCON_SCGCI2C            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCI2C_OFFSET)
#define TIVA_SYSCON_SCGCUSB            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCUSB_OFFSET)
#define TIVA_SYSCON_SCGCEPHY           (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCEPHY_OFFSET)
#define TIVA_SYSCON_SCGCCAN            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCCAN_OFFSET)
#define TIVA_SYSCON_SCGCADC            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCADC_OFFSET)
#define TIVA_SYSCON_SCGCACMP           (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCACMP_OFFSET)
#define TIVA_SYSCON_SCGCPWM            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCPWM_OFFSET)
#define TIVA_SYSCON_SCGCQEI            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCQEI_OFFSET)
#define TIVA_SYSCON_SCGCEEPROM         (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCEEPROM_OFFSET)
#define TIVA_SYSCON_SCGCCCM            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCCCM_OFFSET)
#define TIVA_SYSCON_SCGCLCD            (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCLCD_OFFSET)
#define TIVA_SYSCON_SCGCOWIRE          (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCOWIRE_OFFSET)
#define TIVA_SYSCON_SCGCEMAC           (TIVA_SYSCON_BASE+TIVA_SYSCON_SCGCEMAC_OFFSET)
#define TIVA_SYSCON_DCGCWD             (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCWD_OFFSET)
#define TIVA_SYSCON_DCGCTIMER          (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCTIMER_OFFSET)
#define TIVA_SYSCON_DCGCGPIO           (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCGPIO_OFFSET)
#define TIVA_SYSCON_DCGCDMA            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCDMA_OFFSET)
#define TIVA_SYSCON_DCGCEPI            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCEPI_OFFSET)
#define TIVA_SYSCON_DCGCHIB            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCHIB_OFFSET)
#define TIVA_SYSCON_DCGCUART           (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCUART_OFFSET)
#define TIVA_SYSCON_DCGCSSI            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCSSI_OFFSET)
#define TIVA_SYSCON_DCGCI2C            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCI2C_OFFSET)
#define TIVA_SYSCON_DCGCUSB            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCUSB_OFFSET)
#define TIVA_SYSCON_DCGCEPHY           (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCEPHY_OFFSET)
#define TIVA_SYSCON_DCGCCAN            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCCAN_OFFSET)
#define TIVA_SYSCON_DCGCADC            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCADC_OFFSET)
#define TIVA_SYSCON_DCGCACMP           (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCACMP_OFFSET)
#define TIVA_SYSCON_DCGCPWM            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCPWM_OFFSET)
#define TIVA_SYSCON_DCGCQEI            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCQEI_OFFSET)
#define TIVA_SYSCON_DCGCEEPROM         (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCEEPROM_OFFSET)
#define TIVA_SYSCON_DCGCCCM            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCCCM_OFFSET)
#define TIVA_SYSCON_DCGCLCD            (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCLCD_OFFSET)
#define TIVA_SYSCON_DCGCOWIRE          (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCOWIRE_OFFSET)
#define TIVA_SYSCON_DCGCEMAC           (TIVA_SYSCON_BASE+TIVA_SYSCON_DCGCEMAC_OFFSET)
#define TIVA_SYSCON_PCWD               (TIVA_SYSCON_BASE+TIVA_SYSCON_PCWD_OFFSET)
#define TIVA_SYSCON_PCTIMER            (TIVA_SYSCON_BASE+TIVA_SYSCON_PCTIMER_OFFSET)
#define TIVA_SYSCON_PCGPIO             (TIVA_SYSCON_BASE+TIVA_SYSCON_PCGPIO_OFFSET)
#define TIVA_SYSCON_PCDMA              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCDMA_OFFSET)
#define TIVA_SYSCON_PCEPI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCEPI_OFFSET)
#define TIVA_SYSCON_PCHIB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCHIB_OFFSET)
#define TIVA_SYSCON_PCUART             (TIVA_SYSCON_BASE+TIVA_SYSCON_PCUART_OFFSET)
#define TIVA_SYSCON_PCSSI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCSSI_OFFSET)
#define TIVA_SYSCON_PCI2C              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCI2C_OFFSET)
#define TIVA_SYSCON_PCUSB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCUSB_OFFSET)
#define TIVA_SYSCON_PCEPHY             (TIVA_SYSCON_BASE+TIVA_SYSCON_PCEPHY_OFFSET)
#define TIVA_SYSCON_PCCAN              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCCAN_OFFSET)
#define TIVA_SYSCON_PCADC              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCADC_OFFSET)
#define TIVA_SYSCON_PCACMP             (TIVA_SYSCON_BASE+TIVA_SYSCON_PCACMP_OFFSET)
#define TIVA_SYSCON_PCPWM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCPWM_OFFSET)
#define TIVA_SYSCON_PCQEI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCQEI_OFFSET)
#define TIVA_SYSCON_PCEEPROM           (TIVA_SYSCON_BASE+TIVA_SYSCON_PCEEPROM_OFFSET)
#define TIVA_SYSCON_PCCCM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCCCM_OFFSET)
#define TIVA_SYSCON_PCLCD              (TIVA_SYSCON_BASE+TIVA_SYSCON_PCLCD_OFFSET)
#define TIVA_SYSCON_PCOWIRE            (TIVA_SYSCON_BASE+TIVA_SYSCON_PCOWIRE_OFFSET)
#define TIVA_SYSCON_PCEMAC             (TIVA_SYSCON_BASE+TIVA_SYSCON_PCEMAC_OFFSET)
#define TIVA_SYSCON_PRWD               (TIVA_SYSCON_BASE+TIVA_SYSCON_PRWD_OFFSET)
#define TIVA_SYSCON_PRTIMER            (TIVA_SYSCON_BASE+TIVA_SYSCON_PRTIMER_OFFSET)
#define TIVA_SYSCON_PRGPIO             (TIVA_SYSCON_BASE+TIVA_SYSCON_PRGPIO_OFFSET)
#define TIVA_SYSCON_PRDMA              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRDMA_OFFSET)
#define TIVA_SYSCON_PREPI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PREPI_OFFSET)
#define TIVA_SYSCON_PRHIB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRHIB_OFFSET)
#define TIVA_SYSCON_PRUART             (TIVA_SYSCON_BASE+TIVA_SYSCON_PRUART_OFFSET)
#define TIVA_SYSCON_PRSSI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRSSI_OFFSET)
#define TIVA_SYSCON_PRI2C              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRI2C_OFFSET)
#define TIVA_SYSCON_PRUSB              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRUSB_OFFSET)
#define TIVA_SYSCON_PREPHY             (TIVA_SYSCON_BASE+TIVA_SYSCON_PREPHY_OFFSET)
#define TIVA_SYSCON_PRCAN              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRCAN_OFFSET)
#define TIVA_SYSCON_PRADC              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRADC_OFFSET)
#define TIVA_SYSCON_PRACMP             (TIVA_SYSCON_BASE+TIVA_SYSCON_PRACMP_OFFSET)
#define TIVA_SYSCON_PRPWM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRPWM_OFFSET)
#define TIVA_SYSCON_PRQEI              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRQEI_OFFSET)
#define TIVA_SYSCON_PREEPROM           (TIVA_SYSCON_BASE+TIVA_SYSCON_PREEPROM_OFFSET)
#define TIVA_SYSCON_PRCCM              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRCCM_OFFSET)
#define TIVA_SYSCON_PRLCD              (TIVA_SYSCON_BASE+TIVA_SYSCON_PRLCD_OFFSET)
#define TIVA_SYSCON_PROWIRE            (TIVA_SYSCON_BASE+TIVA_SYSCON_PROWIRE_OFFSET)
#define TIVA_SYSCON_PREMAC             (TIVA_SYSCON_BASE+TIVA_SYSCON_PREMAC_OFFSET)
#define TIVA_SYSCON_UNIQUEID0          (TIVA_SYSCON_BASE+TIVA_SYSCON_UNIQUEID0_OFFSET)
#define TIVA_SYSCON_UNIQUEID1          (TIVA_SYSCON_BASE+TIVA_SYSCON_UNIQUEID1_OFFSET)
#define TIVA_SYSCON_UNIQUEID2          (TIVA_SYSCON_BASE+TIVA_SYSCON_UNIQUEID2_OFFSET)
#define TIVA_SYSCON_UNIQUEID3          (TIVA_SYSCON_BASE+TIVA_SYSCON_UNIQUEID3_OFFSET)

/* CCM System Control Registers (CCM Control Offset) */

#define TIVA_SYSCON_CCMCGREQ           (TIVA_CRC_BASE+TIVA_SYSCON_CCMCGREQ_OFFSET)

/* System Control Register Bit Definitions **************************************************/
/* System Control Registers (System Control Offset) */

/* Device Identification 0 */
#define SYSCON_DID0_
/* Device Identification 1 */
#define SYSCON_DID1_
/* Power-Temp Brown Out Control */
#define SYSCON_PTBOCTL_
/* Raw Interrupt Status */
#define SYSCON_RIS_
/* Interrupt Mask Control */
#define SYSCON_IMC_
/* Masked Interrupt Status and Clear */
#define SYSCON_MISC_
/* Reset Cause */
#define SYSCON_RESC_
/* Power-Temperature Cause */
#define SYSCON_PWRTC_
/* NMI Cause Register */
#define SYSCON_NMIC_
/* Main Oscillator Control */
#define SYSCON_MOSCCTL_
/* Run and Sleep Mode Configuration Register */
#define SYSCON_RSCLKCFG_
/* Memory Timing Parameter Register 0 */
#define SYSCON_MEMTIM0_
/* Alternate Clock Configuration */
#define SYSCON_ALTCLKCFG_
/* Deep Sleep Clock Configuration Register */
#define SYSCON_DSCLKCFG_
/* Divisor and Source Clock Configuration */
#define SYSCON_DIVSCLK_
/* System Properties */
#define SYSCON_SYSPROP_
/* Precision Internal Oscillator Calibration */
#define SYSCON_PIOSCCAL_
/* Precision Internal Oscillator Statistics */
#define SYSCON_PIOSCSTAT_
/* PLL Frequency 0 */
#define SYSCON_PLLFREQ0_
/* PLL Frequency 1 */
#define SYSCON_PLLFREQ1_
/* PLL Status */
#define SYSCON_PLLSTAT_
/* Sleep Power Configuration */
#define SYSCON_SLPPWRCFG_
/* Deep-Sleep Power Configuration */
#define SYSCON_DSLPPWRCFG_
/* Non-Volatile Memory Information */
#define SYSCON_NVMSTAT_
/* LDO Sleep Power Control */
#define SYSCON_LDOSPCTL_
/* LDO Sleep Power Calibration */
#define SYSCON_LDOSPCAL_
/* LDO Deep-Sleep Power Control */
#define SYSCON_LDODPCTL_
/* LDO Deep-Sleep Power Calibration */
#define SYSCON_LDODPCAL_
/* Sleep / Deep-Sleep Power Mode Status */
#define SYSCON_SDPMST_
/* Reset Behavior Control Register */
#define SYSCON_RESBEHAVCTL_
/* Hardware System Service Request */
#define SYSCON_HSSR_
/* USB Power Domain Status */
#define SYSCON_USBPDS_
/* USB Memory Power Control */
#define SYSCON_USBMPC_
/* Ethernet MAC Power Domain Status */
#define SYSCON_EMACPDS_
/* Ethernet MAC Memory Power Control */
#define SYSCON_EMACMPC_
/* LCD Power Domain Status */
#define SYSCON_LCDPDS_
/* LCD Memory Power Control */
#define SYSCON_LCDMPC_
/* CAN 0 Power Domain Status */
#define SYSCON_CAN0PDS_
/* CAN 0 Memory Power Control */
#define SYSCON_CAN0MPC_
/* CAN 1 Power Domain Status */
#define SYSCON_CAN1PDS_
/* CAN 1 Memory Power Control */
#define SYSCON_CAN1MPC_
/* Watchdog Timer Peripheral Present */
#define SYSCON_PPWD_
/* 16/32-Bit Timer Peripheral Present */
#define SYSCON_PPTIMER_
/* GPIO Peripheral Present */
#define SYSCON_PPGPIO_
/* uDMA Peripheral Present */
#define SYSCON_PPDMA_
/* EPI Peripheral Present */
#define SYSCON_PPEPI_
/* Hibernation Peripheral Present */
#define SYSCON_PPHIB_
/* UART Peripheral Present */
#define SYSCON_PPUART_
/* SSI Peripheral Present */
#define SYSCON_PPSSI_
/* I2C Peripheral Present */
#define SYSCON_PPI2C_
/* USB Peripheral Present */
#define SYSCON_PPUSB_
/* Ethernet PHY Peripheral Present */
#define SYSCON_PPEPHY_
/* CAN Peripheral Present */
#define SYSCON_PPCAN_
/* ADC Peripheral Present */
#define SYSCON_PPADC_
/* ACMP Peripheral Present */
#define SYSCON_PPACMP_
/* PWM Peripheral Present */
#define SYSCON_PPPWM_
/* QE Interface Peripheral Present */
#define SYSCON_PPQEI_
/* Low Pin Count Interface Peripheral Present */
#define SYSCON_PPLPC_
/* Platform Environment Control Interface Peripheral Present */
#define SYSCON_PPPECI_
/* Fan Control Peripheral Present */
#define SYSCON_PPFAN_
/* EEPROM Peripheral Present */
#define SYSCON_PPEEPROM_
/* 32/64-Bit Wide Timer Peripheral Present */
#define SYSCON_PPWTIMER_
/* Remote Temperature Sensor Peripheral Present */
#define SYSCON_PPRTS_
/* CRC/Crypto Modules Peripheral Present */
#define SYSCON_PPCCM_
/* LCD Peripheral Present */
#define SYSCON_PPLCD_
/* 1-Wire Peripheral Present */
#define SYSCON_PPOWIRE_
/* Ethernet MAC Peripheral Present */
#define SYSCON_PPEMAC_
/* Power Regulator Bus Peripheral Present */
#define SYSCON_PPPRB_
/* Human Interface Master Peripheral Present */
#define SYSCON_PPHIM_
/* Watchdog Timer Software Reset */
#define SYSCON_SRWD_
/* 16/32-Bit Timer Software Reset */
#define SYSCON_SRTIMER_
/* GPIO Software Reset */
#define SYSCON_SRGPIO_
/* uDMA Software Reset */
#define SYSCON_SRDMA_
/* EPI Software Reset */
#define SYSCON_SREPI_
/* Hibernation Software Reset */
#define SYSCON_SRHIB_
/* UART Software Reset */
#define SYSCON_SRUART_
/* SSI Software Reset */
#define SYSCON_SRSSI_
/* I2C Software Reset */
#define SYSCON_SRI2C_
/* USB Software Reset */
#define SYSCON_SRUSB_
/* Ethernet PHY Software Reset */
#define SYSCON_SREPHY_
/* CAN Software Reset */
#define SYSCON_SRCAN_
/* ADC Software Reset */
#define SYSCON_SRADC_
/* ACMP Software Reset */
#define SYSCON_SRACMP_
/* PWM Software Reset */
#define SYSCON_SRPWM_
/* QE Interface Software Reset */
#define SYSCON_SRQEI_
/* EEPROM Software Reset */
#define SYSCON_SREEPROM_
/* CRC/Crypto Modules Software Reset */
#define SYSCON_SRCCM_
/* LCD Controller Software Reset */
#define SYSCON_SRLCD_
/* 1-Wire Software Reset */
#define SYSCON_SROWIRE_
/* Ethernet MAC Software Reset */
#define SYSCON_SREMAC_
/* Watchdog Timer Run Mode Clock Gating Control */
#define SYSCON_RCGCWD_
/* 16/32-Bit Timer Run Mode Clock Gating Control */
#define SYSCON_RCGCTIMER_
/* GPIO Run Mode Clock Gating Control */
#define SYSCON_RCGCGPIO_
/* uDMA Run Mode Clock Gating Control */
#define SYSCON_RCGCDMA_
/* EPI Run Mode Clock Gating Control */
#define SYSCON_RCGCEPI_
/* Hibernation Run Mode Clock Gating Control */
#define SYSCON_RCGCHIB_
/* UART Run Mode Clock Gating Control */
#define SYSCON_RCGCUART_
/* SSI Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCSSI_
/* I2C Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCI2C_
/* USB Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCUSB_
/* Ethernet PHY Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEPHY_
/* CAN RunMode Clock Gating Control */
#define TIVA_SYSCON_RCGCCAN_
/* ADC Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCADC_
/* ACMP Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCACMP_
/* PWM Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCPWM_
/* QE Interface Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCQEI_
/* EEPROM Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEEPROM_
/* CRC/CryptoModules RunMode ClockGating Control */
#define TIVA_SYSCON_RCGCCCM_
/* LCD Controller Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCLCD_
/* 1-Wire Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCOWIRE_
/* Ethernet MAC Run Mode Clock Gating Control */
#define TIVA_SYSCON_RCGCEMAC_
/* Watchdog Timer Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCWD_
/* 16/32-Bit Timer Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCTIMER_
/* GPIO Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCGPIO_
/* uDMA Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCDMA_
/* EPI Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEPI_
/* Hibernation Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCHIB_
/* UART Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCUART_
/* SSI Sleep Mode Clock GatingControl */
#define TIVA_SYSCON_SCGCSSI_
/* I2C Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCI2C_
/* USB Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCUSB_
/* Ethernet PHY Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEPHY_
/* CAN Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCCAN_
/* ADC Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCADC_
/* ACMP Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCACMP_
/* PulseWidthModulator Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCPWM_
/* QE Interface Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCQEI_
/* EEPROM Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEEPROM_
/* CRC/Crypto Modules Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCCCM_
/* LCD Controller Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCLCD_
/* 1-Wire Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCOWIRE_
/* Ethernet MAC Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_SCGCEMAC_
/* Watchdog Timer Deep-SleepMode Clock Gating Control */
#define TIVA_SYSCON_DCGCWD_
/* 16/32-Bit Timer Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCTIMER_
/* GPIO Deep-Sleep Mode Clock */
#define TIVA_SYSCON_DCGCGPIO_
/* uDMA Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCDMA_
/* EPI Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEPI_
/* Hibernation Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCHIB_
/* UART Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCUART_
/* SSI Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCSSI_
/* I2C Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCI2C_
/* USB Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCUSB_
/* Ethernet PHY Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEPHY_
/* CAN Deep-SleepMode Clock Gating Control */
#define TIVA_SYSCON_DCGCCAN_
/* ADC Deep-Sleep Mode ClockGating Control */
#define TIVA_SYSCON_DCGCADC_
/* ACMP Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCACMP_
/* PWM Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCPWM_
/* QE Interface Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCQEI_
/* EEPROM Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEEPROM_
/* CRC/Crypto Modules Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCCCM_
/* LCD Controller Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCLCD_
/* 1-Wire Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCOWIRE_
/* Ethernet MAC Deep-Sleep Mode Clock Gating Control */
#define TIVA_SYSCON_DCGCEMAC_
/* Watchdog Timer Power Control */
#define TIVA_SYSCON_PCWD_
/* 16/32-Bit Timer Power Control */
#define TIVA_SYSCON_PCTIMER_
/* GPIO Power Control */
#define TIVA_SYSCON_PCGPIO_
/* uDMA Power Control */
#define TIVA_SYSCON_PCDMA_
/* External Peripheral Interface Power Control */
#define TIVA_SYSCON_PCEPI_
/* Hibernation Power Control */
#define TIVA_SYSCON_PCHIB_
/* UART Power Control */
#define TIVA_SYSCON_PCUART_
/* SSI Power Control */
#define TIVA_SYSCON_PCSSI_
/* I2C Power Control */
#define TIVA_SYSCON_PCI2C_
/* USB Power Control */
#define TIVA_SYSCON_PCUSB_
/* Ethernet PHY Power Control */
#define TIVA_SYSCON_PCEPHY_
/* CAN Power Control */
#define TIVA_SYSCON_PCCAN_
/* ADC Power Control */
#define TIVA_SYSCON_PCADC_
/* ACMP Power Control */
#define TIVA_SYSCON_PCACMP_
/* PWM Power Control */
#define TIVA_SYSCON_PCPWM_
/* QE Interface Power Control */
#define TIVA_SYSCON_PCQEI_
/* EEPROM Power Control */
#define TIVA_SYSCON_PCEEPROM_
/* CRC/Crypto Modules Power Control */
#define TIVA_SYSCON_PCCCM_
/* LCD Controller Power Control */
#define TIVA_SYSCON_PCLCD_
/* 1-Wire Power Control */
#define TIVA_SYSCON_PCOWIRE_
/* Ethernet MAC Power Control */
#define TIVA_SYSCON_PCEMAC_
/* Watchdog Timer Peripheral Ready */
#define TIVA_SYSCON_PRWD_
/* 16/32-Bit Timer Peripheral Ready */
#define TIVA_SYSCON_PRTIMER_
/* GPIO Peripheral Ready */
#define TIVA_SYSCON_PRGPIO_
/* uDMA Peripheral Ready */
#define TIVA_SYSCON_PRDMA_
/* EPI Peripheral Ready */
#define TIVA_SYSCON_PREPI_
/* Hibernation Peripheral Ready */
#define TIVA_SYSCON_PRHIB_
/* UART Peripheral Ready */
#define TIVA_SYSCON_PRUART_
/* SSI Peripheral Ready */
#define TIVA_SYSCON_PRSSI_
/* I2C Peripheral Ready */
#define TIVA_SYSCON_PRI2C_
/* USB Peripheral Ready */
#define TIVA_SYSCON_PRUSB_
/* Ethernet PHY Peripheral Ready */
#define TIVA_SYSCON_PREPHY_
/* CAN Peripheral Ready */
#define TIVA_SYSCON_PRCAN_
/* ADC Peripheral Ready */
#define TIVA_SYSCON_PRADC_
/* ACMP Peripheral Ready */
#define TIVA_SYSCON_PRACMP_
/* PWM Peripheral Ready */
#define TIVA_SYSCON_PRPWM_
/* QE Interface Peripheral Ready */
#define TIVA_SYSCON_PRQEI_
/* EEPROM Peripheral Ready */
#define TIVA_SYSCON_PREEPROM_
/* CRC/Crypto Modules Peripheral Ready */
#define TIVA_SYSCON_PRCCM_
/* LCD Controller Peripheral Ready */
#define TIVA_SYSCON_PRLCD_
/* 1-Wire Peripheral Ready */
#define TIVA_SYSCON_PROWIRE_
/* Ethernet MAC Peripheral Ready */
#define TIVA_SYSCON_PREMAC_
/* Unique ID 0 */
#define TIVA_SYSCON_UNIQUEID0_
/* Unique ID 1 */
#define TIVA_SYSCON_UNIQUEID1_
/* Unique ID 2 */
#define TIVA_SYSCON_UNIQUEID2_
/* Unique ID 3 */
#define TIVA_SYSCON_UNIQUEID3_

/* CCM System Control Registers (CCM Control Offset) */

/* Cryptographic Modules Clock Gating Request */
#define TIVA_SYSCON_CCMCGREQ_

/********************************************************************************************
 * Public Types
 ********************************************************************************************/

/********************************************************************************************
 * Public Data
 ********************************************************************************************/

/********************************************************************************************
 * Public Functions
 ********************************************************************************************/

#endif /* __ARCH_ARM_SRC_TIVA_CHIP_TM4C129X_SYSCONTROL_H */