;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; LED_1
LED_1__0__DR EQU CYREG_GPIO_PRT3_DR
LED_1__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_1__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_1__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
LED_1__0__HSIOM_MASK EQU 0x000F0000
LED_1__0__HSIOM_SHIFT EQU 16
LED_1__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_1__0__INTR EQU CYREG_GPIO_PRT3_INTR
LED_1__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_1__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_1__0__MASK EQU 0x10
LED_1__0__PC EQU CYREG_GPIO_PRT3_PC
LED_1__0__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_1__0__PORT EQU 3
LED_1__0__PS EQU CYREG_GPIO_PRT3_PS
LED_1__0__SHIFT EQU 4
LED_1__DR EQU CYREG_GPIO_PRT3_DR
LED_1__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_1__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_1__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_1__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_1__INTR EQU CYREG_GPIO_PRT3_INTR
LED_1__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_1__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_1__MASK EQU 0x10
LED_1__PC EQU CYREG_GPIO_PRT3_PC
LED_1__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_1__PORT EQU 3
LED_1__PS EQU CYREG_GPIO_PRT3_PS
LED_1__SHIFT EQU 4

; PWM_1
PWM_1_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT2_CC
PWM_1_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT2_CC_BUFF
PWM_1_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT2_COUNTER
PWM_1_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT2_CTRL
PWM_1_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT2_INTR
PWM_1_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT2_INTR_MASK
PWM_1_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT2_INTR_MASKED
PWM_1_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT2_INTR_SET
PWM_1_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT2_PERIOD
PWM_1_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT2_PERIOD_BUFF
PWM_1_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT2_STATUS
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x04
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 2
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x400
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 10
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x4000000
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 26
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x40000
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 18
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x04
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 2
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x04
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 2
PWM_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 2
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT2_TR_CTRL0
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT2_TR_CTRL1
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT2_TR_CTRL2

; PWM_2
PWM_2_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT3_CC
PWM_2_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT3_CC_BUFF
PWM_2_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT3_COUNTER
PWM_2_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT3_CTRL
PWM_2_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT3_INTR
PWM_2_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT3_INTR_MASK
PWM_2_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT3_INTR_MASKED
PWM_2_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT3_INTR_SET
PWM_2_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT3_PERIOD
PWM_2_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT3_PERIOD_BUFF
PWM_2_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT3_STATUS
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x08
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 3
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x800
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 11
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x8000000
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 27
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x80000
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 19
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x08
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 3
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x08
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 3
PWM_2_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 3
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT3_TR_CTRL0
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT3_TR_CTRL1
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT3_TR_CTRL2

; Pin_13
Pin_13__0__DR EQU CYREG_GPIO_PRT5_DR
Pin_13__0__DR_CLR EQU CYREG_GPIO_PRT5_DR_CLR
Pin_13__0__DR_INV EQU CYREG_GPIO_PRT5_DR_INV
Pin_13__0__DR_SET EQU CYREG_GPIO_PRT5_DR_SET
Pin_13__0__HSIOM EQU CYREG_HSIOM_PORT_SEL5
Pin_13__0__HSIOM_MASK EQU 0xF0000000
Pin_13__0__HSIOM_SHIFT EQU 28
Pin_13__0__INTCFG EQU CYREG_GPIO_PRT5_INTR_CFG
Pin_13__0__INTR EQU CYREG_GPIO_PRT5_INTR
Pin_13__0__INTR_CFG EQU CYREG_GPIO_PRT5_INTR_CFG
Pin_13__0__INTSTAT EQU CYREG_GPIO_PRT5_INTR
Pin_13__0__MASK EQU 0x80
Pin_13__0__PC EQU CYREG_GPIO_PRT5_PC
Pin_13__0__PC2 EQU CYREG_GPIO_PRT5_PC2
Pin_13__0__PORT EQU 5
Pin_13__0__PS EQU CYREG_GPIO_PRT5_PS
Pin_13__0__SHIFT EQU 7
Pin_13__DR EQU CYREG_GPIO_PRT5_DR
Pin_13__DR_CLR EQU CYREG_GPIO_PRT5_DR_CLR
Pin_13__DR_INV EQU CYREG_GPIO_PRT5_DR_INV
Pin_13__DR_SET EQU CYREG_GPIO_PRT5_DR_SET
Pin_13__INTCFG EQU CYREG_GPIO_PRT5_INTR_CFG
Pin_13__INTR EQU CYREG_GPIO_PRT5_INTR
Pin_13__INTR_CFG EQU CYREG_GPIO_PRT5_INTR_CFG
Pin_13__INTSTAT EQU CYREG_GPIO_PRT5_INTR
Pin_13__MASK EQU 0x80
Pin_13__PC EQU CYREG_GPIO_PRT5_PC
Pin_13__PC2 EQU CYREG_GPIO_PRT5_PC2
Pin_13__PORT EQU 5
Pin_13__PS EQU CYREG_GPIO_PRT5_PS
Pin_13__SHIFT EQU 7

; Clock_1
Clock_1__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL9
Clock_1__DIV_ID EQU 0x00000040
Clock_1__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
Clock_1__PA_DIV_ID EQU 0x000000FF

; SmartIO_1
SmartIO_1_cy_m0s8_prgio__CTL EQU CYREG_PRGIO_PRT1_CTL
SmartIO_1_cy_m0s8_prgio__DATA EQU CYREG_PRGIO_PRT1_DATA
SmartIO_1_cy_m0s8_prgio__DU_CTL EQU CYREG_PRGIO_PRT1_DU_CTL
SmartIO_1_cy_m0s8_prgio__DU_SEL EQU CYREG_PRGIO_PRT1_DU_SEL
SmartIO_1_cy_m0s8_prgio__LUT_CTL0 EQU CYREG_PRGIO_PRT1_LUT_CTL0
SmartIO_1_cy_m0s8_prgio__LUT_CTL1 EQU CYREG_PRGIO_PRT1_LUT_CTL1
SmartIO_1_cy_m0s8_prgio__LUT_CTL2 EQU CYREG_PRGIO_PRT1_LUT_CTL2
SmartIO_1_cy_m0s8_prgio__LUT_CTL3 EQU CYREG_PRGIO_PRT1_LUT_CTL3
SmartIO_1_cy_m0s8_prgio__LUT_CTL4 EQU CYREG_PRGIO_PRT1_LUT_CTL4
SmartIO_1_cy_m0s8_prgio__LUT_CTL5 EQU CYREG_PRGIO_PRT1_LUT_CTL5
SmartIO_1_cy_m0s8_prgio__LUT_CTL6 EQU CYREG_PRGIO_PRT1_LUT_CTL6
SmartIO_1_cy_m0s8_prgio__LUT_CTL7 EQU CYREG_PRGIO_PRT1_LUT_CTL7
SmartIO_1_cy_m0s8_prgio__LUT_SEL0 EQU CYREG_PRGIO_PRT1_LUT_SEL0
SmartIO_1_cy_m0s8_prgio__LUT_SEL1 EQU CYREG_PRGIO_PRT1_LUT_SEL1
SmartIO_1_cy_m0s8_prgio__LUT_SEL2 EQU CYREG_PRGIO_PRT1_LUT_SEL2
SmartIO_1_cy_m0s8_prgio__LUT_SEL3 EQU CYREG_PRGIO_PRT1_LUT_SEL3
SmartIO_1_cy_m0s8_prgio__LUT_SEL4 EQU CYREG_PRGIO_PRT1_LUT_SEL4
SmartIO_1_cy_m0s8_prgio__LUT_SEL5 EQU CYREG_PRGIO_PRT1_LUT_SEL5
SmartIO_1_cy_m0s8_prgio__LUT_SEL6 EQU CYREG_PRGIO_PRT1_LUT_SEL6
SmartIO_1_cy_m0s8_prgio__LUT_SEL7 EQU CYREG_PRGIO_PRT1_LUT_SEL7
SmartIO_1_cy_m0s8_prgio__SYNC_CTL EQU CYREG_PRGIO_PRT1_SYNC_CTL

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x257C11B5
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4V
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4V_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 8
CYDEV_DFT_SELECT_CLK1 EQU 9
CYDEV_DMA_CHANNELS_AVAILABLE EQU 8
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_INTR_NUMBER_DMA EQU 14
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8can_VERSION EQU 1
CYIPBLOCK_m0s8cpussv3_VERSION EQU 1
CYIPBLOCK_m0s8crypto_VERSION EQU 2
CYIPBLOCK_m0s8csdv2_VERSION EQU 2
CYIPBLOCK_m0s8exco_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8pass4a_VERSION EQU 1
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8srsslt_VERSION EQU 1
DMA_CHANNELS_USED__MASK EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
