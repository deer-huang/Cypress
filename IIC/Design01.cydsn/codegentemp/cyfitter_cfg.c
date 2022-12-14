
/*******************************************************************************
* File Name: cyfitter_cfg.c
* 
* PSoC Creator  4.4
*
* Description:
* This file contains device initialization code.
* Except for the user defined sections in CyClockStartupError(), this file should not be modified.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include "cytypes.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include "CyLib.h"
#include "CyLFClk.h"
#include "cyfitter_cfg.h"
#include "cyapicallbacks.h"


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
    #define CYPACKED 
    #define CYPACKED_ATTR __attribute__ ((packed))
    #define CYALIGNED __attribute__ ((aligned))
    #define CY_CFG_UNUSED __attribute__ ((unused))
    #ifndef CY_CFG_SECTION
        #define CY_CFG_SECTION __attribute__ ((section(".psocinit")))
    #endif
    
    #if defined(__ARMCC_VERSION)
        #define CY_CFG_MEMORY_BARRIER() __memory_changed()
    #else
        #define CY_CFG_MEMORY_BARRIER() __sync_synchronize()
    #endif
    
#elif defined(__ICCARM__)
    #include <intrinsics.h>

    #define CYPACKED __packed
    #define CYPACKED_ATTR 
    #define CYALIGNED _Pragma("data_alignment=4")
    #define CY_CFG_UNUSED _Pragma("diag_suppress=Pe177")
    #define CY_CFG_SECTION _Pragma("location=\".psocinit\"")
    
    #define CY_CFG_MEMORY_BARRIER() __DMB()
    
#else
    #error Unsupported toolchain
#endif

#ifndef CYCODE
    #define CYCODE
#endif
#ifndef CYDATA
    #define CYDATA
#endif
#ifndef CYFAR
    #define CYFAR
#endif
#ifndef CYXDATA
    #define CYXDATA
#endif


CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n);
CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n)
{
	(void)memset(s, 0, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}




/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u
#define CYCLOCKSTART_FLL_ERROR   4u
#define CYCLOCKSTART_WCO_ERROR   5u


#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode);
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

#ifdef CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK
    CY_CFG_Clock_Startup_ErrorCallback();
#else
    /*  If not using CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK, place your clock startup code here. */
    /* `#START CyClockStartupError` */



    /* `#END` */

    while(1) {}
#endif /* CY_CFG_CLOCK_STARTUP_ERROR_CALLBACK */
}
#endif



/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*   Performs the initialization of all of the clocks in the device based on the
*   settings in the Clock tab of the DWR.  This includes enabling the requested
*   clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void ClockSetup(void);
CY_CFG_SECTION
static void ClockSetup(void)
{

	/* Set Flash Cycles based on max possible frequency in case a glitch occurs during ClockSetup(). */
	CY_SET_REG32((void CYXDATA *)(CYREG_CPUSS_FLASH_CTL), (0x0012u));
	/* Update IMO to new clock speed. */
	CySysClkWriteImoFreq(24u);

	/* Setup phase aligned clocks */
	CY_SET_REG32((void *)CYREG_PERI_DIV_16_CTL2, 0x00000B00u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_CMD, 0x8000FF42u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_16_CTL0, 0x0000FE00u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_CMD, 0x8000FF40u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_16_CTL3, 0x00000E00u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_CMD, 0x8000FF43u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_16_CTL1, 0x00000200u);
	CY_SET_REG32((void *)CYREG_PERI_DIV_CMD, 0x8000FF41u);

	/* CYDEV_CLK_SELECT Starting address: CYDEV_CLK_SELECT */
	CY_SET_REG32((void *)(CYREG_CLK_SELECT), 0x00000000u);

	/* CYDEV_PERI_PCLK_CTL9 Starting address: CYDEV_PERI_PCLK_CTL9 */
	CY_SET_REG32((void *)(CYREG_PERI_PCLK_CTL9), 0x00000042u);

	/* CYDEV_PERI_PCLK_CTL8 Starting address: CYDEV_PERI_PCLK_CTL8 */
	CY_SET_REG32((void *)(CYREG_PERI_PCLK_CTL8), 0x00000042u);

	/* CYDEV_PERI_PCLK_CTL5 Starting address: CYDEV_PERI_PCLK_CTL5 */
	CY_SET_REG32((void *)(CYREG_PERI_PCLK_CTL5), 0x00000040u);

	/* CYDEV_PERI_PCLK_CTL2 Starting address: CYDEV_PERI_PCLK_CTL2 */
	CY_SET_REG32((void *)(CYREG_PERI_PCLK_CTL2), 0x00000043u);

	/* CYDEV_PERI_PCLK_CTL1 Starting address: CYDEV_PERI_PCLK_CTL1 */
	CY_SET_REG32((void *)(CYREG_PERI_PCLK_CTL1), 0x00000041u);

	(void)CyIntSetVector(13u, &CySysTimerIsr);
	CyIntEnable(13u);
	CY_SET_REG32((void *)(CYREG_WCO_WDT_CONFIG), 0x00000000u);
	CySysClkSetTimerSource(CY_SYS_CLK_TIMER_SRC_ILO);
	/* Set Flash Cycles based on newly configured 24.00MHz HFCLK. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CPUSS_FLASH_CTL), (0x0011u));
}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
	CY_SET_XTND_REG32((void CYFAR *)CYREG_HSIOM_AMUX_SPLIT_CTL0, 0x00000003u);
	CY_SET_XTND_REG32((void CYFAR *)CYREG_CTBM0_DFT_CTRL, 0x00000003u);
	CY_SET_XTND_REG32((void CYFAR *)CYREG_PASS_DSAB_DSAB_CTRL, 0x00000020u);
	SetAnalogRoutingPumps(1);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint32 regValue = CY_GET_XTND_REG32((void *)(CYREG_SAR_PUMP_CTRL));
	if (enabled != 0u)
	{
		regValue |= 0x80000000u;
	}
	else
	{
		regValue &= ~0x80000000u;
	}
	CY_SET_XTND_REG32((void *)(CYREG_SAR_PUMP_CTRL), regValue);
	regValue = CY_GET_XTND_REG32((void *)(CYREG_CLK_SELECT));
	if (enabled != 0u)
	{
		regValue |= 0x00000020u;
	}
	else
	{
		regValue &= ~0x00000020u;
	}
	CY_SET_XTND_REG32((void *)(CYREG_CLK_SELECT), regValue);
}




/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_SECTION
void cyfitter_cfg(void)
{
	/* Disable interrupts by default. Let user enable if/when they want. */
	CyGlobalIntDisable;

	{
		/* HSIOM Starting address: CYDEV_HSIOM_BASE */
		CY_SET_REG32((void *)(CYDEV_HSIOM_BASE), 0x0000000Eu);
		CY_SET_REG32((void *)(CYREG_HSIOM_PORT_SEL1), 0x0000E000u);
		CY_SET_REG32((void *)(CYREG_HSIOM_PORT_SEL3), 0x8080EEEEu);

	}

	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	/* IOPINS0_0 Starting address: CYDEV_GPIO_PRT0_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT0_BASE), 0x00000001u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT0_PC), 0x00000004u);

	/* IOPINS0_1 Starting address: CYDEV_GPIO_PRT1_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT1_BASE), 0x0000005Du);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT1_PC), 0x00186986u);

	/* IOPINS0_2 Starting address: CYDEV_GPIO_PRT2_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT2_BASE), 0x00000085u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT2_PC), 0x00000186u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT2_PC2), 0x00000080u);

	/* IOPINS0_3 Starting address: CYDEV_GPIO_PRT3_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT3_BASE), 0x00000013u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT3_PC), 0x00006DA4u);

	/* IOPINS0_4 Starting address: CYDEV_GPIO_PRT4_BASE */
	CY_SET_REG32((void *)(CYREG_GPIO_PRT4_PC2), 0x00000012u);

	/* IOPINS0_5 Starting address: CYDEV_GPIO_PRT5_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT5_BASE), 0x00000080u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT5_PC), 0x00C00000u);

	/* IOPINS0_6 Starting address: CYDEV_GPIO_PRT6_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT6_BASE), 0x00000037u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT6_PC2), 0x00000037u);

	/* IOPINS0_7 Starting address: CYDEV_GPIO_PRT7_BASE */
	CY_SET_REG32((void *)(CYDEV_GPIO_PRT7_BASE), 0x00000002u);
	CY_SET_REG32((void *)(CYREG_GPIO_PRT7_PC), 0x00000030u);


	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

}
