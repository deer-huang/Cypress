/*******************************************************************************
* \file SmartIO_1.h
* \version 1.10
*
* \brief
*  This file provides constants and parameter values for the SmartIO Component.
*
********************************************************************************
* Copyright 2016, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SMARTIO_SmartIO_1_H)
#define CY_SMARTIO_SmartIO_1_H

#include <cydevice_trm.h>
#include <cyfitter.h>
#include <cytypes.h>


/***************************************
*       Global Variables
***************************************/

/**
* \addtogroup group_globals
* \{
*/
extern uint8 SmartIO_1_initVar; /**< Initialization state variable */
/** \} globals */


/***************************************
*        Function Prototypes
***************************************/

/**
* \addtogroup group_functions
* \{
*/
void SmartIO_1_Init(void);
void SmartIO_1_Start(void);
void SmartIO_1_Stop(void);
void SmartIO_1_SetBypass(uint32 portChannel);
void SmartIO_1_ClockSelect(uint32 clockSrc);
void SmartIO_1_HoldOverride(uint32 ovCtrl);
void SmartIO_1_IoSyncMode(uint32 portTerm);
void SmartIO_1_ChipSyncMode(uint32 portTerm);
cystatus SmartIO_1_LUT_SelectInputs(uint32 lutNum, uint32 inputNum, uint32 inputSrc);
void SmartIO_1_LUT_ConfigureMode(uint32 lutNum, uint32 mapping, uint32 mode);
cystatus SmartIO_1_DU_SelectTriggers(uint32 tr0Sel, uint32 tr1Sel, uint32 tr2Sel);
cystatus SmartIO_1_DU_SelectData(uint32 dataNum, uint32 dataSel);
cystatus SmartIO_1_DU_RegValue(uint32 dataValue);
cystatus SmartIO_1_DU_OpCode(uint32 opCode, uint32 dataSize);
/** \} functions */


/***************************************
*        API Constants
***************************************/

/**
* \addtogroup group_constants
* \{
*/

/** 
* \defgroup channelConst Port channel selection constants
* \{
* Constants to be passed as "portChannel" parameter in SmartIO_1_SetBypass() function.
*/
#define SmartIO_1_CHANNEL_NONE    0x00UL /**< Do not bypass any channels */
#define SmartIO_1_CHANNEL0        0x01UL /**< Channel 0 (data0 <-> gpio0) */
#define SmartIO_1_CHANNEL1        0x02UL /**< Channel 1 (data1 <-> gpio1) */
#define SmartIO_1_CHANNEL2        0x04UL /**< Channel 2 (data2 <-> gpio2) */
#define SmartIO_1_CHANNEL3        0x08UL /**< Channel 3 (data3 <-> gpio3) */
#define SmartIO_1_CHANNEL4        0x10UL /**< Channel 4 (data4 <-> gpio4) */
#define SmartIO_1_CHANNEL5        0x20UL /**< Channel 5 (data5 <-> gpio5) */
#define SmartIO_1_CHANNEL6        0x40UL /**< Channel 6 (data6 <-> gpio6) */
#define SmartIO_1_CHANNEL7        0x80UL /**< Channel 7 (data7 <-> gpio7) */
#define SmartIO_1_CHANNEL_ALL     0xffUL /**< Bypass all channels */
/** \} */

/** 
* \defgroup clockConst Component clock selection constants
* \{
* Constants to be passed as "clockSrc" parameter in SmartIO_1_ClockSelect() function.
*/
#define SmartIO_1_CLK_GPIO0       0UL  /**< Clock sourced from signal on gpio0 */
#define SmartIO_1_CLK_GPIO1       1UL  /**< Clock sourced from signal on gpio1 */
#define SmartIO_1_CLK_GPIO2       2UL  /**< Clock sourced from signal on gpio2 */
#define SmartIO_1_CLK_GPIO3       3UL  /**< Clock sourced from signal on gpio3 */
#define SmartIO_1_CLK_GPIO4       4UL  /**< Clock sourced from signal on gpio4 */
#define SmartIO_1_CLK_GPIO5       5UL  /**< Clock sourced from signal on gpio5 */
#define SmartIO_1_CLK_GPIO6       6UL  /**< Clock sourced from signal on gpio6 */
#define SmartIO_1_CLK_GPIO7       7UL  /**< Clock sourced from signal on gpio7 */
#define SmartIO_1_CLK_DATA0       8UL  /**< Clock sourced from signal on data0 */
#define SmartIO_1_CLK_DATA1       9UL  /**< Clock sourced from signal on data1 */
#define SmartIO_1_CLK_DATA2       10UL /**< Clock sourced from signal on data2 */
#define SmartIO_1_CLK_DATA3       11UL /**< Clock sourced from signal on data3 */
#define SmartIO_1_CLK_DATA4       12UL /**< Clock sourced from signal on data4 */
#define SmartIO_1_CLK_DATA5       13UL /**< Clock sourced from signal on data5 */
#define SmartIO_1_CLK_DATA6       14UL /**< Clock sourced from signal on data6 */
#define SmartIO_1_CLK_DATA7       15UL /**< Clock sourced from signal on data7 */
#define SmartIO_1_DIV_CLK_ACT     16UL /**< Clock sourced from a divided clock (Active) */
#define SmartIO_1_DIV_CLK_DS      17UL /**< Clock sourced from a divided clock (Deep-Sleep) */
#define SmartIO_1_DIV_CLK_HIB     18UL /**< Clock sourced from a divided clock (Hibernate) */
#define SmartIO_1_LFCLK           19UL /**< Clock sourced from LFCLK */
#define SmartIO_1_CLK_GATED       20UL /**< Disables the clock connection. Used when turning off the block */
#define SmartIO_1_ASYNC           31UL /**< Asynchronous operation */
/** \} */

/** \defgroup hldOvrConst Component hold override selection constants
* \{
* Constants to be passed as "ovCtrl" parameter in SmartIO_1_HoldOverride() function.
*/
#define SmartIO_1_OVCTRL_DISABLE  0UL /**< Controlled by HSIOM  */
#define SmartIO_1_OVCTRL_ENABLE   1UL /**< Controlled by SmartIO */
/** \} */

/** \defgroup termConst Terminal selection constants
* \{
* Constants to be passed as "portTerm" parameter in SmartIO_1_IoSyncMode() and SmartIO_1_ChipSyncMode() functions.
*/
#define SmartIO_1_TERM_NONE       0x00UL /**< No synchronization for all data/gpio */
#define SmartIO_1_TERM0           0x01UL /**< Enable synchronization for data0/gpio0 */
#define SmartIO_1_TERM1           0x02UL /**< Enable synchronization for data1/gpio1 */
#define SmartIO_1_TERM2           0x04UL /**< Enable synchronization for data2/gpio2 */
#define SmartIO_1_TERM3           0x08UL /**< Enable synchronization for data3/gpio3 */
#define SmartIO_1_TERM4           0x10UL /**< Enable synchronization for data4/gpio4 */
#define SmartIO_1_TERM5           0x20UL /**< Enable synchronization for data5/gpio5 */
#define SmartIO_1_TERM6           0x40UL /**< Enable synchronization for data6/gpio6 */
#define SmartIO_1_TERM7           0x80UL /**< Enable synchronization for data7/gpio7 */
#define SmartIO_1_TERM_ALL        0xffUL /**< Enable sycnhronization for all data/gpio */
/** \} */

/** \defgroup lutNumConst Look-up table number constants
* \{
* Constants to be passed as "lutNum" parameter in 
* SmartIO_1_LUT_SelectInputs() and SmartIO_1_LUT_ConfigureMode() functions.
*/ 
#define SmartIO_1_LUT0            0UL /**< LUT number 0 */
#define SmartIO_1_LUT1            1UL /**< LUT number 1 */
#define SmartIO_1_LUT2            2UL /**< LUT number 2 */
#define SmartIO_1_LUT3            3UL /**< LUT number 3 */
#define SmartIO_1_LUT4            4UL /**< LUT number 4 */
#define SmartIO_1_LUT5            5UL /**< LUT number 5 */
#define SmartIO_1_LUT6            6UL /**< LUT number 6 */
#define SmartIO_1_LUT7            7UL /**< LUT number 7 */
/** \} */

/** \defgroup inputNumConst LUT input number constants
* \{
* Constants to be passed as "inputNum" parameter in SmartIO_1_LUT_SelectInputs() function.
*/
#define SmartIO_1_LUT_INPUT0      0x01UL /**< LUT input terminal 0 */
#define SmartIO_1_LUT_INPUT1      0x02UL /**< LUT input terminal 1 */
#define SmartIO_1_LUT_INPUT2      0x04UL /**< LUT input terminal 2 */
#define SmartIO_1_LUT_INPUT_ALL   0x07UL /**< All LUT input terminals */
/** \} */

/** \defgroup inputSrcConst LUT input source constants
* \{
* Constants to be passed as "inputSrc" parameter in SmartIO_1_LUT_SelectInputs() function.
*/ 
#define SmartIO_1_SRC_LUT0        0UL  /**< Source is LUT0 output */
#define SmartIO_1_SRC_LUT1        1UL  /**< Source is LUT1 output */
#define SmartIO_1_SRC_LUT2        2UL  /**< Source is LUT2 output */
#define SmartIO_1_SRC_LUT3        3UL  /**< Source is LUT3 output */
#define SmartIO_1_SRC_LUT4        4UL  /**< Source is LUT4 output */
#define SmartIO_1_SRC_LUT5        5UL  /**< Source is LUT5 output */
#define SmartIO_1_SRC_LUT6        6UL  /**< Source is LUT6 output */
#define SmartIO_1_SRC_LUT7        7UL  /**< Source is LUT7 output */
#define SmartIO_1_SRC_DATA_04     8UL  /**< Source is data0/data4 */
#define SmartIO_1_SRC_DATA_15     9UL  /**< Source is data1/data5 */
#define SmartIO_1_SRC_DATA_26     10UL /**< Source is data2/data6 */
#define SmartIO_1_SRC_DATA_37     11UL /**< Source is data3/data7 */
#define SmartIO_1_SRC_GPIO_04     12UL /**< Source is gpio0/gpio4 */
#define SmartIO_1_SRC_GPIO_15     13UL /**< Source is gpio1/gpio5 */
#define SmartIO_1_SRC_GPIO_26     14UL /**< Source is gpio2/gpio6 */
#define SmartIO_1_SRC_GPIO_37     15UL /**< Source is gpio3/gpio7 */
#define SmartIO_1_SRC_DU          16UL /**< Source is Data Unit output */
/** \} */

/** \defgroup modeConst LUT mode constants
* \{
* Constants to be passed as "mode" parameter in SmartIO_1_LUT_ConfigureMode() function.
*/ 
#define SmartIO_1_MODE_COMB       0UL /**< Combinatorial mode */
#define SmartIO_1_MODE_REGIN      1UL /**< Registered input mode */
#define SmartIO_1_MODE_REGOUT     2UL /**< Registered output mode */
#define SmartIO_1_MODE_SRFF       3UL /**< S/R Flip-Flop mode */
/** \} */

/** \defgroup duTrConst Data Unit trigger input constants
* \{
* Constants to be passed as "tr0Sel", "tr1Sel", and "tr2Sel" parameters in SmartIO_1_DU_SelectTriggers() function.
*/
#define SmartIO_1_TR_CONST_ZERO   0UL /**< Constant 0 */
#define SmartIO_1_TR_CONST_ONE    1UL /**< Constant 1 */
#define SmartIO_1_TR_DU_OUT       2UL /**< Data unit output */
#define SmartIO_1_TR_LUT0         3UL /**< LUT 0 output */
#define SmartIO_1_TR_LUT1         4UL /**< LUT 1 output */
#define SmartIO_1_TR_LUT2         5UL /**< LUT 2 output */
#define SmartIO_1_TR_LUT3         6UL /**< LUT 3 output */
#define SmartIO_1_TR_LUT4         7UL /**< LUT 4 output */
#define SmartIO_1_TR_LUT5         8UL /**< LUT 5 output */
#define SmartIO_1_TR_LUT6         9UL /**< LUT 6 output */
#define SmartIO_1_TR_LUT7         10UL /**< LUT 7 output */
/** \} */

/** \defgroup duDataConst Data Unit data register constants
* \{
* Constants to be passed as "dataNum" parameter in SmartIO_1_DU_SelectData() function.
*/
#define SmartIO_1_DATA0             1UL /**< DU DATA0 register */
#define SmartIO_1_DATA1             2UL /**< DU DATA1 register */
#define SmartIO_1_DATA_BOTH         3UL /**< Both DU DATA0 and DATA1 registers */
/** \} */

/** \defgroup duDataSrcConst Data Unit data register source selection constants
* \{
* Constants to be passed as "dataSel" parameter in SmartIO_1_DU_SelectData() function.
*/ 
#define SmartIO_1_DATA_CONST_ZERO   0UL /**< Constant 0 */
#define SmartIO_1_DATA_TERM_DATA    1UL /**< Terminal data[7:0] */
#define SmartIO_1_DATA_TERM_GPIO    2UL /**< Terminal gpio[7:0] */
#define SmartIO_1_DATA_DU_REG       3UL /**< Data Unit register */
/** \} */

/** \defgroup duOpcConst Data Unit opcode constants
* \{
* Constants to be passed as "opCode" parameter in SmartIO_1_DU_OpCode() function.
*/
#define SmartIO_1_OPC_INCR           1UL /**< Count Up */
#define SmartIO_1_OPC_DECR           2UL /**< Count Down */
#define SmartIO_1_OPC_INCR_WRAP      3UL /**< Count Up and wrap */
#define SmartIO_1_OPC_DECR_WRAP      4UL /**< Count Down and wrap */
#define SmartIO_1_OPC_INCR_DECR      5UL /**< Count Up/Down */
#define SmartIO_1_OPC_INCR_DECR_WRAP 6UL /**< Count Up/Down and wrap */
#define SmartIO_1_OPC_ROR            7UL /**< Rotate right */
#define SmartIO_1_OPC_SHR            8UL /**< Shift right */
#define SmartIO_1_OPC_AND_OR         9UL /**< DU Data0 AND DU Data1 */
#define SmartIO_1_OPC_SHR_MAJ3       10UL /**< Majority 3 */
#define SmartIO_1_OPC_SHR_EQL        11UL /**< Equal DU Data1 */
/** \} */

/** \} constants */


/***************************************
*    Initial Parameter Constants
***************************************/
    
/* Global control */
#define SmartIO_1_BYPASS0         1UL
#define SmartIO_1_BYPASS1         1UL
#define SmartIO_1_BYPASS2         1UL
#define SmartIO_1_BYPASS3         1UL
#define SmartIO_1_BYPASS4         0UL
#define SmartIO_1_BYPASS5         0UL
#define SmartIO_1_BYPASS6         1UL
#define SmartIO_1_BYPASS7         0UL
#define SmartIO_1_CLOCK_SELECT    31UL
#define SmartIO_1_HLD_OVR         0UL

/* IO Synchronization control */
#define SmartIO_1_IO_SYNC0        0UL
#define SmartIO_1_IO_SYNC1        0UL
#define SmartIO_1_IO_SYNC2        0UL
#define SmartIO_1_IO_SYNC3        0UL
#define SmartIO_1_IO_SYNC4        0UL
#define SmartIO_1_IO_SYNC5        0UL
#define SmartIO_1_IO_SYNC6        0UL
#define SmartIO_1_IO_SYNC7        0UL

/* Chip Data Synchronization control */
#define SmartIO_1_DATA_SYNC0      0UL
#define SmartIO_1_DATA_SYNC1      0UL
#define SmartIO_1_DATA_SYNC2      0UL
#define SmartIO_1_DATA_SYNC3      0UL
#define SmartIO_1_DATA_SYNC4      0UL
#define SmartIO_1_DATA_SYNC5      0UL
#define SmartIO_1_DATA_SYNC6      0UL
#define SmartIO_1_DATA_SYNC7      0UL

/* LUT input selection */
#define SmartIO_1_LUT0_TR0        17UL
#define SmartIO_1_LUT0_TR1        17UL
#define SmartIO_1_LUT0_TR2        17UL
#define SmartIO_1_LUT1_TR0        17UL
#define SmartIO_1_LUT1_TR1        17UL
#define SmartIO_1_LUT1_TR2        17UL
#define SmartIO_1_LUT2_TR0        17UL
#define SmartIO_1_LUT2_TR1        17UL
#define SmartIO_1_LUT2_TR2        17UL
#define SmartIO_1_LUT3_TR0        17UL
#define SmartIO_1_LUT3_TR1        17UL
#define SmartIO_1_LUT3_TR2        17UL
#define SmartIO_1_LUT4_TR0        11UL
#define SmartIO_1_LUT4_TR1        9UL
#define SmartIO_1_LUT4_TR2        9UL
#define SmartIO_1_LUT5_TR0        17UL
#define SmartIO_1_LUT5_TR1        17UL
#define SmartIO_1_LUT5_TR2        17UL
#define SmartIO_1_LUT6_TR0        17UL
#define SmartIO_1_LUT6_TR1        17UL
#define SmartIO_1_LUT6_TR2        17UL
#define SmartIO_1_LUT7_TR0        17UL
#define SmartIO_1_LUT7_TR1        17UL
#define SmartIO_1_LUT7_TR2        17UL

/* LUT truth table */
#define SmartIO_1_LUT0_MAP        0UL
#define SmartIO_1_LUT1_MAP        0UL
#define SmartIO_1_LUT2_MAP        0UL
#define SmartIO_1_LUT3_MAP        0UL
#define SmartIO_1_LUT4_MAP        102UL
#define SmartIO_1_LUT5_MAP        0UL
#define SmartIO_1_LUT6_MAP        0UL
#define SmartIO_1_LUT7_MAP        0UL

/* LUT mode */
#define SmartIO_1_LUT0_MODE       0UL
#define SmartIO_1_LUT1_MODE       0UL
#define SmartIO_1_LUT2_MODE       0UL
#define SmartIO_1_LUT3_MODE       0UL
#define SmartIO_1_LUT4_MODE       0UL
#define SmartIO_1_LUT5_MODE       0UL
#define SmartIO_1_LUT6_MODE       0UL
#define SmartIO_1_LUT7_MODE       0UL

/* DU input selection */
#define SmartIO_1_DU_TR0          0UL
#define SmartIO_1_DU_TR1          0UL
#define SmartIO_1_DU_TR2          0UL

/* DU configuration */
#define SmartIO_1_DU_DATA0        0UL
#define SmartIO_1_DU_DATA1        0UL
#define SmartIO_1_DU_REG          0UL
#define SmartIO_1_DU_SIZE         7UL
#define SmartIO_1_DU_OPCODE       1UL


/***************************************
*    Constants and Structs
***************************************/

/* Number of channels */
#define SmartIO_1_CHANNELS       (8u)

/* General constants */
#define SmartIO_1_DUTRIG_MAX     (10UL)
#define SmartIO_1_REGVAL_MAX     (0xffUL)
#define SmartIO_1_OPC_MAX        (11UL)
#define SmartIO_1_DUSIZE_MAX     (8UL)

/**
* \addtogroup group_structs
* @{
*/

/** LUT selection and mapping register struct */
typedef struct
{
    uint32 lutSel[SmartIO_1_CHANNELS]; /**< LUT input selection configuration */
	uint32 lutCtl[SmartIO_1_CHANNELS]; /**< LUT mode and mapping configuration */
} SmartIO_1_lut_config_struct;
/** @} structs */


/***************************************
*        Registers
***************************************/

/* PRGIO global control register */
#define SmartIO_1_CTL                (* (reg32 *) SmartIO_1_cy_m0s8_prgio__CTL)

/* IO and chip data synchronization control */
#define SmartIO_1_SYNC_CTL           (* (reg32 *) SmartIO_1_cy_m0s8_prgio__SYNC_CTL)

/* LUT input selection and control registers */
#define SmartIO_1_LUT_CONGIG_BASE    (*(volatile SmartIO_1_lut_config_struct *) SmartIO_1_cy_m0s8_prgio__LUT_SEL0)

/* Data unit registers */
#define SmartIO_1_DU_SEL             (* (reg32 *) SmartIO_1_cy_m0s8_prgio__DU_SEL)
#define SmartIO_1_DU_CTL             (* (reg32 *) SmartIO_1_cy_m0s8_prgio__DU_CTL)
#define SmartIO_1_DATA               (* (reg32 *) SmartIO_1_cy_m0s8_prgio__DATA)


/***************************************
*        Register Constants
***************************************/

/* Channel number */
#define SmartIO_1_CH0                       (0u)
#define SmartIO_1_CH1                       (1u)
#define SmartIO_1_CH2                       (2u)
#define SmartIO_1_CH3                       (3u)
#define SmartIO_1_CH4                       (4u)
#define SmartIO_1_CH5                       (5u)
#define SmartIO_1_CH6                       (6u)
#define SmartIO_1_CH7                       (7u)

/* Register set to all zeros/ones */
#define SmartIO_1_REG_ZEROS                 (0x00000000UL)
#define SmartIO_1_REG_ONES                  (0xffffffffUL)

/* SmartIO Fabric Enable/Disable */
#define SmartIO_1_FABRIC_ENABLE             ((uint32)(0x01UL << CYFLD_PRGIO_PRT_ENABLED__OFFSET))
#define SmartIO_1_FABRIC_DISABLE            ((uint32)(~(uint32)(0x01UL << CYFLD_PRGIO_PRT_ENABLED__OFFSET)))
#define SmartIO_1_FABRIC_MASK               ((uint32)(0x01UL << CYFLD_PRGIO_PRT_ENABLED__OFFSET))

/* Bypass Mask */
#define SmartIO_1_BYPASS_MASK               ((uint32)(0xffUL << CYFLD_PRGIO_PRT_BYPASS__OFFSET))
#define SmartIO_1_BYPASS_CLEAR              ((uint32)(~(uint32)(0xffUL << CYFLD_PRGIO_PRT_BYPASS__OFFSET)))

/* Clock Source Const 0, clear, mask */
#define SmartIO_1_CLOCK_CONST_ZERO          ((uint32)((uint32)SmartIO_1_CLK_GATED << CYFLD_PRGIO_PRT_CLOCK_SRC__OFFSET))
#define SmartIO_1_CLOCK_CLEAR               ((uint32)(~(uint32)(0x1fUL << CYFLD_PRGIO_PRT_CLOCK_SRC__OFFSET)))
#define SmartIO_1_CLOCK_MASK                ((uint32)(0x1fUL << CYFLD_PRGIO_PRT_CLOCK_SRC__OFFSET))

/* Hold override HSIOM/SmartIO */
#define SmartIO_1_HLD_OVR_SMARTIO           ((uint32)(0x01UL << CYFLD_PRGIO_PRT_HLD_OVR__OFFSET))
#define SmartIO_1_HLD_OVR_HSIOM             ((uint32)(~(uint32)(0x01UL << CYFLD_PRGIO_PRT_HLD_OVR__OFFSET)))

/* Pipeline Enable/Disable */
#define SmartIO_1_PIPELINE_ENABLE           ((uint32)(0x01UL << CYFLD_PRGIO_PRT_PIPELINE_EN__OFFSET))
#define SmartIO_1_PIPELINE_DISABLE          ((uint32)(~(uint32)(0x01UL << CYFLD_PRGIO_PRT_PIPELINE_EN__OFFSET)))

/* Sync control clear */
#define SmartIO_1_IO_SYNC_MASK              ((uint32)(0xffUL << CYFLD_PRGIO_PRT_IO_SYNC_EN__OFFSET))
#define SmartIO_1_DATA_SYNC_MASK            ((uint32)(0xffUL << CYFLD_PRGIO_PRT_CHIP_SYNC_EN__OFFSET))
#define SmartIO_1_IO_SYNC_CLEAR             ((uint32)(~(uint32)(0xffUL << CYFLD_PRGIO_PRT_IO_SYNC_EN__OFFSET)))
#define SmartIO_1_DATA_SYNC_CLEAR           ((uint32)(~(uint32)(0xffUL << CYFLD_PRGIO_PRT_CHIP_SYNC_EN__OFFSET)))

/* LUT inputs clear */
#define SmartIO_1_LUT_TR0_CLEAR             ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET)))
#define SmartIO_1_LUT_TR1_CLEAR             ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET)))
#define SmartIO_1_LUT_TR2_CLEAR             ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET)))
#define SmartIO_1_LUT_TR_CLEAR_ALL          (SmartIO_1_LUT_TR0_CLEAR & SmartIO_1_LUT_TR1_CLEAR & SmartIO_1_LUT_TR2_CLEAR)
#define SmartIO_1_LUT_TR0_MASK              ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_LUT_TR1_MASK              ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_LUT_TR2_MASK              ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))

/* LUT config clear */
#define SmartIO_1_LUT_MAP_CLEAR             ((uint32)(~(uint32)(0xffUL << CYFLD_PRGIO_PRT_LUT__OFFSET)))
#define SmartIO_1_LUT_OPC_CLEAR             ((uint32)(~(uint32)(0x03UL << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET)))
#define SmartIO_1_LUT_CTL_CLEAR             ((uint32)(SmartIO_1_LUT_MAP_CLEAR & SmartIO_1_LUT_OPC_CLEAR))
#define SmartIO_1_LUT_MAP_MASK              ((uint32)(0xffUL << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_LUT_OPC_MASK              ((uint32)(0x03UL << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))

/* DU inputs clear */
#define SmartIO_1_DU_TR0_CLEAR              ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR0_SEL__OFFSET)))
#define SmartIO_1_DU_TR1_CLEAR              ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR1_SEL__OFFSET)))
#define SmartIO_1_DU_TR2_CLEAR              ((uint32)(~(uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR2_SEL__OFFSET)))
#define SmartIO_1_DU_TR_CLEAR_ALL           (SmartIO_1_DU_TR0_CLEAR & SmartIO_1_DU_TR1_CLEAR & SmartIO_1_DU_TR2_CLEAR)
#define SmartIO_1_DU_TR0_MASK               ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR0_SEL__OFFSET))
#define SmartIO_1_DU_TR1_MASK               ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR1_SEL__OFFSET))
#define SmartIO_1_DU_TR2_MASK               ((uint32)(0x0fUL << CYFLD_PRGIO_PRT_DU_TR2_SEL__OFFSET))

/* DU DATA0 and DATA1 clear */
#define SmartIO_1_DU_DATA0_CLEAR            ((uint32)(~(uint32)(0x03UL << CYFLD_PRGIO_PRT_DU_DATA0_SEL__OFFSET)))
#define SmartIO_1_DU_DATA1_CLEAR            ((uint32)(~(uint32)(0x03UL << CYFLD_PRGIO_PRT_DU_DATA1_SEL__OFFSET)))
#define SmartIO_1_DU_DATA01_CLEAR_BOTH      (SmartIO_1_DU_DATA0_CLEAR & SmartIO_1_DU_DATA1_CLEAR)
#define SmartIO_1_DU_DATA0_MASK             ((uint32)(0x03UL << CYFLD_PRGIO_PRT_DU_DATA0_SEL__OFFSET))
#define SmartIO_1_DU_DATA1_MASK             ((uint32)(0x03UL << CYFLD_PRGIO_PRT_DU_DATA1_SEL__OFFSET))


/***************************************
*        Initial configuration
***************************************/

/* Bypass configuration */
#define SmartIO_1_INIT_BYPASS              ((uint32)(((SmartIO_1_BYPASS0)       | \
                                                     (SmartIO_1_BYPASS1 << SmartIO_1_CH1) | \
                                                     (SmartIO_1_BYPASS2 << SmartIO_1_CH2) | \
                                                     (SmartIO_1_BYPASS3 << SmartIO_1_CH3) | \
                                                     (SmartIO_1_BYPASS4 << SmartIO_1_CH4) | \
                                                     (SmartIO_1_BYPASS5 << SmartIO_1_CH5) | \
                                                     (SmartIO_1_BYPASS6 << SmartIO_1_CH6) | \
                                                     (SmartIO_1_BYPASS7 << SmartIO_1_CH7))  \
                                                     << CYFLD_PRGIO_PRT_BYPASS__OFFSET))

/* Clock configuration */
#define SmartIO_1_INIT_CLOCK_SRC           ((uint32)(SmartIO_1_CLOCK_SELECT << CYFLD_PRGIO_PRT_CLOCK_SRC__OFFSET))

/* Hold override configuration */
#define SmartIO_1_INIT_HLD_OVR             ((uint32)(SmartIO_1_HLD_OVR << CYFLD_PRGIO_PRT_HLD_OVR__OFFSET))

/* Disable the pipeline */
#define SmartIO_1_INIT_PIPELINE_EN         ((uint32)((uint32)0x00u << CYFLD_PRGIO_PRT_PIPELINE_EN__OFFSET))

/* Initial general control configuration */
#define SmartIO_1_INIT_CTL_CONFIG          ((uint32)(SmartIO_1_INIT_PIPELINE_EN | \
                                                    SmartIO_1_INIT_HLD_OVR     | \
                                                    SmartIO_1_INIT_CLOCK_SRC   | \
                                                    SmartIO_1_INIT_BYPASS))

/* IO Sync configuration */
#define SmartIO_1_INIT_IO_SYNC             ((uint32)(((SmartIO_1_IO_SYNC0)       | \
                                                     (SmartIO_1_IO_SYNC1 << SmartIO_1_CH1) | \
                                                     (SmartIO_1_IO_SYNC2 << SmartIO_1_CH2) | \
                                                     (SmartIO_1_IO_SYNC3 << SmartIO_1_CH3) | \
                                                     (SmartIO_1_IO_SYNC4 << SmartIO_1_CH4) | \
                                                     (SmartIO_1_IO_SYNC5 << SmartIO_1_CH5) | \
                                                     (SmartIO_1_IO_SYNC6 << SmartIO_1_CH6) | \
                                                     (SmartIO_1_IO_SYNC7 << SmartIO_1_CH7))  \
                                                     << CYFLD_PRGIO_PRT_IO_SYNC_EN__OFFSET))

/* Chip data Sync configuration */
#define SmartIO_1_INIT_DATA_SYNC           ((uint32)(((SmartIO_1_DATA_SYNC0)       | \
                                                     (SmartIO_1_DATA_SYNC1 << SmartIO_1_CH1) | \
                                                     (SmartIO_1_DATA_SYNC2 << SmartIO_1_CH2) | \
                                                     (SmartIO_1_DATA_SYNC3 << SmartIO_1_CH3) | \
                                                     (SmartIO_1_DATA_SYNC4 << SmartIO_1_CH4) | \
                                                     (SmartIO_1_DATA_SYNC5 << SmartIO_1_CH5) | \
                                                     (SmartIO_1_DATA_SYNC6 << SmartIO_1_CH6) | \
                                                     (SmartIO_1_DATA_SYNC7 << SmartIO_1_CH7))  \
                                                     << CYFLD_PRGIO_PRT_CHIP_SYNC_EN__OFFSET))

/* Initial synchronization configuration */
#define SmartIO_1_INIT_SYNC_CONFIG         ((uint32)(SmartIO_1_INIT_DATA_SYNC | \
                                                     SmartIO_1_INIT_IO_SYNC))

/* LUTs input select TR0 */
#define SmartIO_1_INIT_LUT0_TR0            ((uint32)(SmartIO_1_LUT0_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT1_TR0            ((uint32)(SmartIO_1_LUT1_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT2_TR0            ((uint32)(SmartIO_1_LUT2_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT3_TR0            ((uint32)(SmartIO_1_LUT3_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT4_TR0            ((uint32)(SmartIO_1_LUT4_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT5_TR0            ((uint32)(SmartIO_1_LUT5_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT6_TR0            ((uint32)(SmartIO_1_LUT6_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_LUT7_TR0            ((uint32)(SmartIO_1_LUT7_TR0 << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET))

/* LUTs input select TR1 */
#define SmartIO_1_INIT_LUT0_TR1            ((uint32)(SmartIO_1_LUT0_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT1_TR1            ((uint32)(SmartIO_1_LUT1_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT2_TR1            ((uint32)(SmartIO_1_LUT2_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT3_TR1            ((uint32)(SmartIO_1_LUT3_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT4_TR1            ((uint32)(SmartIO_1_LUT4_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT5_TR1            ((uint32)(SmartIO_1_LUT5_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT6_TR1            ((uint32)(SmartIO_1_LUT6_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_LUT7_TR1            ((uint32)(SmartIO_1_LUT7_TR1 << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET))

/* LUTs input select TR2 */
#define SmartIO_1_INIT_LUT0_TR2            ((uint32)(SmartIO_1_LUT0_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT1_TR2            ((uint32)(SmartIO_1_LUT1_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT2_TR2            ((uint32)(SmartIO_1_LUT2_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT3_TR2            ((uint32)(SmartIO_1_LUT3_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT4_TR2            ((uint32)(SmartIO_1_LUT4_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT5_TR2            ((uint32)(SmartIO_1_LUT5_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT6_TR2            ((uint32)(SmartIO_1_LUT6_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_LUT7_TR2            ((uint32)(SmartIO_1_LUT7_TR2 << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET))

/* Initial LUTs input selections */
#define SmartIO_1_INIT_LUT0_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT0_TR0 | \
                                                    SmartIO_1_INIT_LUT0_TR1 | \
                                                    SmartIO_1_INIT_LUT0_TR2))
#define SmartIO_1_INIT_LUT1_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT1_TR0 | \
                                                    SmartIO_1_INIT_LUT1_TR1 | \
                                                    SmartIO_1_INIT_LUT1_TR2))
#define SmartIO_1_INIT_LUT2_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT2_TR0 | \
                                                    SmartIO_1_INIT_LUT2_TR1 | \
                                                    SmartIO_1_INIT_LUT2_TR2))
#define SmartIO_1_INIT_LUT3_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT3_TR0 | \
                                                    SmartIO_1_INIT_LUT3_TR1 | \
                                                    SmartIO_1_INIT_LUT3_TR2))
#define SmartIO_1_INIT_LUT4_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT4_TR0 | \
                                                    SmartIO_1_INIT_LUT4_TR1 | \
                                                    SmartIO_1_INIT_LUT4_TR2))
#define SmartIO_1_INIT_LUT5_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT5_TR0 | \
                                                    SmartIO_1_INIT_LUT5_TR1 | \
                                                    SmartIO_1_INIT_LUT5_TR2))
#define SmartIO_1_INIT_LUT6_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT6_TR0 | \
                                                    SmartIO_1_INIT_LUT6_TR1 | \
                                                    SmartIO_1_INIT_LUT6_TR2))
#define SmartIO_1_INIT_LUT7_SEL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT7_TR0 | \
                                                    SmartIO_1_INIT_LUT7_TR1 | \
                                                    SmartIO_1_INIT_LUT7_TR2))

/* LUTs truth tables */
#define SmartIO_1_INIT_LUT0_MAP            ((uint32)(SmartIO_1_LUT0_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT1_MAP            ((uint32)(SmartIO_1_LUT1_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT2_MAP            ((uint32)(SmartIO_1_LUT2_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT3_MAP            ((uint32)(SmartIO_1_LUT3_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT4_MAP            ((uint32)(SmartIO_1_LUT4_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT5_MAP            ((uint32)(SmartIO_1_LUT5_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT6_MAP            ((uint32)(SmartIO_1_LUT6_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))
#define SmartIO_1_INIT_LUT7_MAP            ((uint32)(SmartIO_1_LUT7_MAP << CYFLD_PRGIO_PRT_LUT__OFFSET))

/* LUTs modes */
#define SmartIO_1_INIT_LUT0_MODE           ((uint32)(SmartIO_1_LUT0_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT1_MODE           ((uint32)(SmartIO_1_LUT1_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT2_MODE           ((uint32)(SmartIO_1_LUT2_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT3_MODE           ((uint32)(SmartIO_1_LUT3_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT4_MODE           ((uint32)(SmartIO_1_LUT4_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT5_MODE           ((uint32)(SmartIO_1_LUT5_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT6_MODE           ((uint32)(SmartIO_1_LUT6_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))
#define SmartIO_1_INIT_LUT7_MODE           ((uint32)(SmartIO_1_LUT7_MODE << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET))

/* Initial LUTs control config */
#define SmartIO_1_INIT_LUT0_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT0_MAP  | SmartIO_1_INIT_LUT0_MODE))
#define SmartIO_1_INIT_LUT1_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT1_MAP  | SmartIO_1_INIT_LUT1_MODE))
#define SmartIO_1_INIT_LUT2_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT2_MAP  | SmartIO_1_INIT_LUT2_MODE))
#define SmartIO_1_INIT_LUT3_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT3_MAP  | SmartIO_1_INIT_LUT3_MODE))
#define SmartIO_1_INIT_LUT4_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT4_MAP  | SmartIO_1_INIT_LUT4_MODE))
#define SmartIO_1_INIT_LUT5_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT5_MAP  | SmartIO_1_INIT_LUT5_MODE))
#define SmartIO_1_INIT_LUT6_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT6_MAP  | SmartIO_1_INIT_LUT6_MODE))
#define SmartIO_1_INIT_LUT7_CTL_CONFIG     ((uint32)(SmartIO_1_INIT_LUT7_MAP  | SmartIO_1_INIT_LUT7_MODE))

/* Initial DU selection configuration */
#define SmartIO_1_INIT_DU_TR0_SEL          ((uint32_t)(SmartIO_1_DU_TR0 << CYFLD_PRGIO_PRT_DU_TR0_SEL__OFFSET))
#define SmartIO_1_INIT_DU_TR1_SEL          ((uint32_t)(SmartIO_1_DU_TR1 << CYFLD_PRGIO_PRT_DU_TR1_SEL__OFFSET))
#define SmartIO_1_INIT_DU_TR2_SEL          ((uint32_t)(SmartIO_1_DU_TR2 << CYFLD_PRGIO_PRT_DU_TR2_SEL__OFFSET))
#define SmartIO_1_INIT_DU_DATA0_SEL        ((uint32_t)(SmartIO_1_DU_DATA0 << CYFLD_PRGIO_PRT_DU_DATA0_SEL__OFFSET))
#define SmartIO_1_INIT_DU_DATA1_SEL        ((uint32_t)(SmartIO_1_DU_DATA1 << CYFLD_PRGIO_PRT_DU_DATA1_SEL__OFFSET))

#define SmartIO_1_INIT_DU_SEL              ((uint32_t)(SmartIO_1_INIT_DU_TR0_SEL | \
                                                    SmartIO_1_INIT_DU_TR1_SEL | \
                                                    SmartIO_1_INIT_DU_TR2_SEL | \
                                                    SmartIO_1_INIT_DU_DATA0_SEL | \
                                                    SmartIO_1_INIT_DU_DATA1_SEL ))

/* Initial DU control configuration */
#define SmartIO_1_INIT_DU_SIZE             ((uint32_t)(SmartIO_1_DU_SIZE << CYFLD_PRGIO_PRT_DU_SIZE__OFFSET))
#define SmartIO_1_INIT_DU_OPC              ((uint32_t)(SmartIO_1_DU_OPCODE << CYFLD_PRGIO_PRT_DU_OPC__OFFSET))

#define SmartIO_1_INIT_DU_CTL              ((uint32_t)(SmartIO_1_INIT_DU_SIZE | \
                                                    SmartIO_1_INIT_DU_OPC ))

/* Initial DU Data register */
#define SmartIO_1_INIT_DU_DATA_REG         SmartIO_1_DU_REG


/***************************************
*        Macro Functions
***************************************/

/**
* \addtogroup group_functions
* @{
*/
/*******************************************************************************
* Function Name: SmartIO_1_Enable
****************************************************************************//**
*
* \brief Enables the component. 
*  
* Once enabled, it takes two component clock cycles for the fabric reset to
* deactivate and the fabric becomes operational. If the clock source is set to
* Asynchronous mode, it takes three SYSCLK cycles before becoming functional.
*
* \funcusage
*  \snippet SmartIO_1_SUT.c usage_SmartIO_1_Enable
*******************************************************************************/
#define SmartIO_1_Enable()           (SmartIO_1_CTL |= SmartIO_1_FABRIC_ENABLE)


/*******************************************************************************
* Function Name: SmartIO_1_Disable
****************************************************************************//**
*
* \brief Disables the component. 
*  
* The block is disabled, which places the channels into bypass mode and the
* sequential elements are reset based on the chosen clock selection.
*
* \funcusage
*  \snippet SmartIO_1_SUT.c usage_SmartIO_1_Disable
*******************************************************************************/
#define SmartIO_1_Disable()           (SmartIO_1_CTL &= SmartIO_1_FABRIC_DISABLE)


/*******************************************************************************
* Function Name: SmartIO_1_GetBypass
****************************************************************************//**
*
* \brief Returns the bypass configuration of the channels on a bit by bit basis. 
*
* Bypassed channels behave like they would as if the SmartIO component was
* not present for those particular channels. 
*
* \return
*  uint8 Bypass state of the channels on the port.
*
* \funcusage
*  \snippet SmartIO_1_SUT.c usage_SmartIO_1_GetBypass
*******************************************************************************/
#define SmartIO_1_GetBypass()        ((uint8)(SmartIO_1_CTL \
                                            & ((uint32)SmartIO_1_CHANNEL_ALL << CYFLD_PRGIO_PRT_BYPASS__OFFSET)))
/** @} functions */

#endif /* (CY_SMARTIO_SmartIO_1_H) */


/* [] END OF FILE */
