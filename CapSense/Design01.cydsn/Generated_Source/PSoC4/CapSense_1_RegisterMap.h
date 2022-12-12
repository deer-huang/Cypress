/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (1u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x48000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (25u)
#define CapSense_1_SNS_STATUS1_SIZE                         (1u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x4E000019u)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (26u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xAA80001Au)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (28u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x6F80001Cu)

#define CapSense_1_BTN2_RESOLUTION_VALUE                    (CapSense_1_dsRam.wdgtList.btn2.resolution)
#define CapSense_1_BTN2_RESOLUTION_OFFSET                   (30u)
#define CapSense_1_BTN2_RESOLUTION_SIZE                     (2u)
#define CapSense_1_BTN2_RESOLUTION_PARAM_ID                 (0x8080001Eu)

#define CapSense_1_BTN2_FINGER_TH_VALUE                     (CapSense_1_dsRam.wdgtList.btn2.fingerTh)
#define CapSense_1_BTN2_FINGER_TH_OFFSET                    (32u)
#define CapSense_1_BTN2_FINGER_TH_SIZE                      (2u)
#define CapSense_1_BTN2_FINGER_TH_PARAM_ID                  (0x80800020u)

#define CapSense_1_BTN2_NOISE_TH_VALUE                      (CapSense_1_dsRam.wdgtList.btn2.noiseTh)
#define CapSense_1_BTN2_NOISE_TH_OFFSET                     (34u)
#define CapSense_1_BTN2_NOISE_TH_SIZE                       (1u)
#define CapSense_1_BTN2_NOISE_TH_PARAM_ID                   (0x44800022u)

#define CapSense_1_BTN2_NNOISE_TH_VALUE                     (CapSense_1_dsRam.wdgtList.btn2.nNoiseTh)
#define CapSense_1_BTN2_NNOISE_TH_OFFSET                    (35u)
#define CapSense_1_BTN2_NNOISE_TH_SIZE                      (1u)
#define CapSense_1_BTN2_NNOISE_TH_PARAM_ID                  (0x42800023u)

#define CapSense_1_BTN2_HYSTERESIS_VALUE                    (CapSense_1_dsRam.wdgtList.btn2.hysteresis)
#define CapSense_1_BTN2_HYSTERESIS_OFFSET                   (36u)
#define CapSense_1_BTN2_HYSTERESIS_SIZE                     (1u)
#define CapSense_1_BTN2_HYSTERESIS_PARAM_ID                 (0x49800024u)

#define CapSense_1_BTN2_ON_DEBOUNCE_VALUE                   (CapSense_1_dsRam.wdgtList.btn2.onDebounce)
#define CapSense_1_BTN2_ON_DEBOUNCE_OFFSET                  (37u)
#define CapSense_1_BTN2_ON_DEBOUNCE_SIZE                    (1u)
#define CapSense_1_BTN2_ON_DEBOUNCE_PARAM_ID                (0x4F800025u)

#define CapSense_1_BTN2_LOW_BSLN_RST_VALUE                  (CapSense_1_dsRam.wdgtList.btn2.lowBslnRst)
#define CapSense_1_BTN2_LOW_BSLN_RST_OFFSET                 (38u)
#define CapSense_1_BTN2_LOW_BSLN_RST_SIZE                   (1u)
#define CapSense_1_BTN2_LOW_BSLN_RST_PARAM_ID               (0x45800026u)

#define CapSense_1_BTN2_IDAC_MOD0_VALUE                     (CapSense_1_dsRam.wdgtList.btn2.idacMod[0u])
#define CapSense_1_BTN2_IDAC_MOD0_OFFSET                    (39u)
#define CapSense_1_BTN2_IDAC_MOD0_SIZE                      (1u)
#define CapSense_1_BTN2_IDAC_MOD0_PARAM_ID                  (0x4E000027u)

#define CapSense_1_BTN2_IDAC_GAIN_INDEX_VALUE               (CapSense_1_dsRam.wdgtList.btn2.idacGainIndex)
#define CapSense_1_BTN2_IDAC_GAIN_INDEX_OFFSET              (40u)
#define CapSense_1_BTN2_IDAC_GAIN_INDEX_SIZE                (1u)
#define CapSense_1_BTN2_IDAC_GAIN_INDEX_PARAM_ID            (0x4A800028u)

#define CapSense_1_BTN2_SNS_CLK_VALUE                       (CapSense_1_dsRam.wdgtList.btn2.snsClk)
#define CapSense_1_BTN2_SNS_CLK_OFFSET                      (42u)
#define CapSense_1_BTN2_SNS_CLK_SIZE                        (2u)
#define CapSense_1_BTN2_SNS_CLK_PARAM_ID                    (0x8E80002Au)

#define CapSense_1_BTN2_SNS_CLK_SOURCE_VALUE                (CapSense_1_dsRam.wdgtList.btn2.snsClkSource)
#define CapSense_1_BTN2_SNS_CLK_SOURCE_OFFSET               (44u)
#define CapSense_1_BTN2_SNS_CLK_SOURCE_SIZE                 (1u)
#define CapSense_1_BTN2_SNS_CLK_SOURCE_PARAM_ID             (0x4B80002Cu)

#define CapSense_1_BTN2_FINGER_CAP_VALUE                    (CapSense_1_dsRam.wdgtList.btn2.fingerCap)
#define CapSense_1_BTN2_FINGER_CAP_OFFSET                   (46u)
#define CapSense_1_BTN2_FINGER_CAP_SIZE                     (2u)
#define CapSense_1_BTN2_FINGER_CAP_PARAM_ID                 (0xA900002Eu)

#define CapSense_1_BTN2_SIGPFC_VALUE                        (CapSense_1_dsRam.wdgtList.btn2.sigPFC)
#define CapSense_1_BTN2_SIGPFC_OFFSET                       (48u)
#define CapSense_1_BTN2_SIGPFC_SIZE                         (2u)
#define CapSense_1_BTN2_SIGPFC_PARAM_ID                     (0xA3000030u)

#define CapSense_1_SLD_RESOLUTION_VALUE                     (CapSense_1_dsRam.wdgtList.sld.resolution)
#define CapSense_1_SLD_RESOLUTION_OFFSET                    (50u)
#define CapSense_1_SLD_RESOLUTION_SIZE                      (2u)
#define CapSense_1_SLD_RESOLUTION_PARAM_ID                  (0x8A810032u)

#define CapSense_1_SLD_FINGER_TH_VALUE                      (CapSense_1_dsRam.wdgtList.sld.fingerTh)
#define CapSense_1_SLD_FINGER_TH_OFFSET                     (52u)
#define CapSense_1_SLD_FINGER_TH_SIZE                       (2u)
#define CapSense_1_SLD_FINGER_TH_PARAM_ID                   (0x87810034u)

#define CapSense_1_SLD_NOISE_TH_VALUE                       (CapSense_1_dsRam.wdgtList.sld.noiseTh)
#define CapSense_1_SLD_NOISE_TH_OFFSET                      (54u)
#define CapSense_1_SLD_NOISE_TH_SIZE                        (1u)
#define CapSense_1_SLD_NOISE_TH_PARAM_ID                    (0x43810036u)

#define CapSense_1_SLD_NNOISE_TH_VALUE                      (CapSense_1_dsRam.wdgtList.sld.nNoiseTh)
#define CapSense_1_SLD_NNOISE_TH_OFFSET                     (55u)
#define CapSense_1_SLD_NNOISE_TH_SIZE                       (1u)
#define CapSense_1_SLD_NNOISE_TH_PARAM_ID                   (0x45810037u)

#define CapSense_1_SLD_HYSTERESIS_VALUE                     (CapSense_1_dsRam.wdgtList.sld.hysteresis)
#define CapSense_1_SLD_HYSTERESIS_OFFSET                    (56u)
#define CapSense_1_SLD_HYSTERESIS_SIZE                      (1u)
#define CapSense_1_SLD_HYSTERESIS_PARAM_ID                  (0x4C810038u)

#define CapSense_1_SLD_ON_DEBOUNCE_VALUE                    (CapSense_1_dsRam.wdgtList.sld.onDebounce)
#define CapSense_1_SLD_ON_DEBOUNCE_OFFSET                   (57u)
#define CapSense_1_SLD_ON_DEBOUNCE_SIZE                     (1u)
#define CapSense_1_SLD_ON_DEBOUNCE_PARAM_ID                 (0x4A810039u)

#define CapSense_1_SLD_LOW_BSLN_RST_VALUE                   (CapSense_1_dsRam.wdgtList.sld.lowBslnRst)
#define CapSense_1_SLD_LOW_BSLN_RST_OFFSET                  (58u)
#define CapSense_1_SLD_LOW_BSLN_RST_SIZE                    (1u)
#define CapSense_1_SLD_LOW_BSLN_RST_PARAM_ID                (0x4081003Au)

#define CapSense_1_SLD_IDAC_MOD0_VALUE                      (CapSense_1_dsRam.wdgtList.sld.idacMod[0u])
#define CapSense_1_SLD_IDAC_MOD0_OFFSET                     (59u)
#define CapSense_1_SLD_IDAC_MOD0_SIZE                       (1u)
#define CapSense_1_SLD_IDAC_MOD0_PARAM_ID                   (0x4B01003Bu)

#define CapSense_1_SLD_IDAC_GAIN_INDEX_VALUE                (CapSense_1_dsRam.wdgtList.sld.idacGainIndex)
#define CapSense_1_SLD_IDAC_GAIN_INDEX_OFFSET               (60u)
#define CapSense_1_SLD_IDAC_GAIN_INDEX_SIZE                 (1u)
#define CapSense_1_SLD_IDAC_GAIN_INDEX_PARAM_ID             (0x4D81003Cu)

#define CapSense_1_SLD_SNS_CLK_VALUE                        (CapSense_1_dsRam.wdgtList.sld.snsClk)
#define CapSense_1_SLD_SNS_CLK_OFFSET                       (62u)
#define CapSense_1_SLD_SNS_CLK_SIZE                         (2u)
#define CapSense_1_SLD_SNS_CLK_PARAM_ID                     (0x8981003Eu)

#define CapSense_1_SLD_SNS_CLK_SOURCE_VALUE                 (CapSense_1_dsRam.wdgtList.sld.snsClkSource)
#define CapSense_1_SLD_SNS_CLK_SOURCE_OFFSET                (64u)
#define CapSense_1_SLD_SNS_CLK_SOURCE_SIZE                  (1u)
#define CapSense_1_SLD_SNS_CLK_SOURCE_PARAM_ID              (0x4C810040u)

#define CapSense_1_SLD_FINGER_CAP_VALUE                     (CapSense_1_dsRam.wdgtList.sld.fingerCap)
#define CapSense_1_SLD_FINGER_CAP_OFFSET                    (66u)
#define CapSense_1_SLD_FINGER_CAP_SIZE                      (2u)
#define CapSense_1_SLD_FINGER_CAP_PARAM_ID                  (0xAE010042u)

#define CapSense_1_SLD_SIGPFC_VALUE                         (CapSense_1_dsRam.wdgtList.sld.sigPFC)
#define CapSense_1_SLD_SIGPFC_OFFSET                        (68u)
#define CapSense_1_SLD_SIGPFC_SIZE                          (2u)
#define CapSense_1_SLD_SIGPFC_PARAM_ID                      (0xA3010044u)

#define CapSense_1_SLD_POSITION0_VALUE                      (CapSense_1_dsRam.wdgtList.sld.position[0u])
#define CapSense_1_SLD_POSITION0_OFFSET                     (70u)
#define CapSense_1_SLD_POSITION0_SIZE                       (2u)
#define CapSense_1_SLD_POSITION0_PARAM_ID                   (0x84010046u)

#define CapSense_1_BTN2_SNS0_RAW0_VALUE                     (CapSense_1_dsRam.snsList.btn2[0u].raw[0u])
#define CapSense_1_BTN2_SNS0_RAW0_OFFSET                    (72u)
#define CapSense_1_BTN2_SNS0_RAW0_SIZE                      (2u)
#define CapSense_1_BTN2_SNS0_RAW0_PARAM_ID                  (0x88000048u)

#define CapSense_1_BTN2_SNS0_BSLN0_VALUE                    (CapSense_1_dsRam.snsList.btn2[0u].bsln[0u])
#define CapSense_1_BTN2_SNS0_BSLN0_OFFSET                   (74u)
#define CapSense_1_BTN2_SNS0_BSLN0_SIZE                     (2u)
#define CapSense_1_BTN2_SNS0_BSLN0_PARAM_ID                 (0x8400004Au)

#define CapSense_1_BTN2_SNS0_BSLN_EXT0_VALUE                (CapSense_1_dsRam.snsList.btn2[0u].bslnExt[0u])
#define CapSense_1_BTN2_SNS0_BSLN_EXT0_OFFSET               (76u)
#define CapSense_1_BTN2_SNS0_BSLN_EXT0_SIZE                 (1u)
#define CapSense_1_BTN2_SNS0_BSLN_EXT0_PARAM_ID             (0x4100004Cu)

#define CapSense_1_BTN2_SNS0_DIFF_VALUE                     (CapSense_1_dsRam.snsList.btn2[0u].diff)
#define CapSense_1_BTN2_SNS0_DIFF_OFFSET                    (78u)
#define CapSense_1_BTN2_SNS0_DIFF_SIZE                      (2u)
#define CapSense_1_BTN2_SNS0_DIFF_PARAM_ID                  (0x8500004Eu)

#define CapSense_1_BTN2_SNS0_NEG_BSLN_RST_CNT0_VALUE        (CapSense_1_dsRam.snsList.btn2[0u].negBslnRstCnt[0u])
#define CapSense_1_BTN2_SNS0_NEG_BSLN_RST_CNT0_OFFSET       (80u)
#define CapSense_1_BTN2_SNS0_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_1_BTN2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID     (0x47000050u)

#define CapSense_1_BTN2_SNS0_IDAC_COMP0_VALUE               (CapSense_1_dsRam.snsList.btn2[0u].idacComp[0u])
#define CapSense_1_BTN2_SNS0_IDAC_COMP0_OFFSET              (81u)
#define CapSense_1_BTN2_SNS0_IDAC_COMP0_SIZE                (1u)
#define CapSense_1_BTN2_SNS0_IDAC_COMP0_PARAM_ID            (0x41000051u)

#define CapSense_1_SLD_SNS0_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[0u].raw[0u])
#define CapSense_1_SLD_SNS0_RAW0_OFFSET                     (82u)
#define CapSense_1_SLD_SNS0_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS0_RAW0_PARAM_ID                   (0x83000052u)

#define CapSense_1_SLD_SNS0_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[0u].bsln[0u])
#define CapSense_1_SLD_SNS0_BSLN0_OFFSET                    (84u)
#define CapSense_1_SLD_SNS0_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS0_BSLN0_PARAM_ID                  (0x8E000054u)

#define CapSense_1_SLD_SNS0_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[0u].bslnExt[0u])
#define CapSense_1_SLD_SNS0_BSLN_EXT0_OFFSET                (86u)
#define CapSense_1_SLD_SNS0_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS0_BSLN_EXT0_PARAM_ID              (0x4A000056u)

#define CapSense_1_SLD_SNS0_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[0u].diff)
#define CapSense_1_SLD_SNS0_DIFF_OFFSET                     (88u)
#define CapSense_1_SLD_SNS0_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS0_DIFF_PARAM_ID                   (0x8D000058u)

#define CapSense_1_SLD_SNS0_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[0u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS0_NEG_BSLN_RST_CNT0_OFFSET        (90u)
#define CapSense_1_SLD_SNS0_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID      (0x4900005Au)

#define CapSense_1_SLD_SNS0_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[0u].idacComp[0u])
#define CapSense_1_SLD_SNS0_IDAC_COMP0_OFFSET               (91u)
#define CapSense_1_SLD_SNS0_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS0_IDAC_COMP0_PARAM_ID             (0x4F00005Bu)

#define CapSense_1_SLD_SNS1_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[1u].raw[0u])
#define CapSense_1_SLD_SNS1_RAW0_OFFSET                     (92u)
#define CapSense_1_SLD_SNS1_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS1_RAW0_PARAM_ID                   (0x8C00005Cu)

#define CapSense_1_SLD_SNS1_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[1u].bsln[0u])
#define CapSense_1_SLD_SNS1_BSLN0_OFFSET                    (94u)
#define CapSense_1_SLD_SNS1_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS1_BSLN0_PARAM_ID                  (0x8000005Eu)

#define CapSense_1_SLD_SNS1_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[1u].bslnExt[0u])
#define CapSense_1_SLD_SNS1_BSLN_EXT0_OFFSET                (96u)
#define CapSense_1_SLD_SNS1_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS1_BSLN_EXT0_PARAM_ID              (0x48000060u)

#define CapSense_1_SLD_SNS1_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[1u].diff)
#define CapSense_1_SLD_SNS1_DIFF_OFFSET                     (98u)
#define CapSense_1_SLD_SNS1_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS1_DIFF_PARAM_ID                   (0x8C000062u)

#define CapSense_1_SLD_SNS1_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[1u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS1_NEG_BSLN_RST_CNT0_OFFSET        (100u)
#define CapSense_1_SLD_SNS1_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS1_NEG_BSLN_RST_CNT0_PARAM_ID      (0x49000064u)

#define CapSense_1_SLD_SNS1_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[1u].idacComp[0u])
#define CapSense_1_SLD_SNS1_IDAC_COMP0_OFFSET               (101u)
#define CapSense_1_SLD_SNS1_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS1_IDAC_COMP0_PARAM_ID             (0x4F000065u)

#define CapSense_1_SLD_SNS2_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[2u].raw[0u])
#define CapSense_1_SLD_SNS2_RAW0_OFFSET                     (102u)
#define CapSense_1_SLD_SNS2_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS2_RAW0_PARAM_ID                   (0x8D000066u)

#define CapSense_1_SLD_SNS2_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[2u].bsln[0u])
#define CapSense_1_SLD_SNS2_BSLN0_OFFSET                    (104u)
#define CapSense_1_SLD_SNS2_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS2_BSLN0_PARAM_ID                  (0x82000068u)

#define CapSense_1_SLD_SNS2_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[2u].bslnExt[0u])
#define CapSense_1_SLD_SNS2_BSLN_EXT0_OFFSET                (106u)
#define CapSense_1_SLD_SNS2_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS2_BSLN_EXT0_PARAM_ID              (0x4600006Au)

#define CapSense_1_SLD_SNS2_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[2u].diff)
#define CapSense_1_SLD_SNS2_DIFF_OFFSET                     (108u)
#define CapSense_1_SLD_SNS2_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS2_DIFF_PARAM_ID                   (0x8300006Cu)

#define CapSense_1_SLD_SNS2_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[2u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS2_NEG_BSLN_RST_CNT0_OFFSET        (110u)
#define CapSense_1_SLD_SNS2_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS2_NEG_BSLN_RST_CNT0_PARAM_ID      (0x4700006Eu)

#define CapSense_1_SLD_SNS2_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[2u].idacComp[0u])
#define CapSense_1_SLD_SNS2_IDAC_COMP0_OFFSET               (111u)
#define CapSense_1_SLD_SNS2_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS2_IDAC_COMP0_PARAM_ID             (0x4100006Fu)

#define CapSense_1_SLD_SNS3_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[3u].raw[0u])
#define CapSense_1_SLD_SNS3_RAW0_OFFSET                     (112u)
#define CapSense_1_SLD_SNS3_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS3_RAW0_PARAM_ID                   (0x85000070u)

#define CapSense_1_SLD_SNS3_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[3u].bsln[0u])
#define CapSense_1_SLD_SNS3_BSLN0_OFFSET                    (114u)
#define CapSense_1_SLD_SNS3_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS3_BSLN0_PARAM_ID                  (0x89000072u)

#define CapSense_1_SLD_SNS3_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[3u].bslnExt[0u])
#define CapSense_1_SLD_SNS3_BSLN_EXT0_OFFSET                (116u)
#define CapSense_1_SLD_SNS3_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS3_BSLN_EXT0_PARAM_ID              (0x4C000074u)

#define CapSense_1_SLD_SNS3_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[3u].diff)
#define CapSense_1_SLD_SNS3_DIFF_OFFSET                     (118u)
#define CapSense_1_SLD_SNS3_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS3_DIFF_PARAM_ID                   (0x88000076u)

#define CapSense_1_SLD_SNS3_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[3u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS3_NEG_BSLN_RST_CNT0_OFFSET        (120u)
#define CapSense_1_SLD_SNS3_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS3_NEG_BSLN_RST_CNT0_PARAM_ID      (0x4F000078u)

#define CapSense_1_SLD_SNS3_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[3u].idacComp[0u])
#define CapSense_1_SLD_SNS3_IDAC_COMP0_OFFSET               (121u)
#define CapSense_1_SLD_SNS3_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS3_IDAC_COMP0_PARAM_ID             (0x49000079u)

#define CapSense_1_SLD_SNS4_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[4u].raw[0u])
#define CapSense_1_SLD_SNS4_RAW0_OFFSET                     (122u)
#define CapSense_1_SLD_SNS4_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS4_RAW0_PARAM_ID                   (0x8B00007Au)

#define CapSense_1_SLD_SNS4_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[4u].bsln[0u])
#define CapSense_1_SLD_SNS4_BSLN0_OFFSET                    (124u)
#define CapSense_1_SLD_SNS4_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS4_BSLN0_PARAM_ID                  (0x8600007Cu)

#define CapSense_1_SLD_SNS4_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[4u].bslnExt[0u])
#define CapSense_1_SLD_SNS4_BSLN_EXT0_OFFSET                (126u)
#define CapSense_1_SLD_SNS4_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS4_BSLN_EXT0_PARAM_ID              (0x4200007Eu)

#define CapSense_1_SLD_SNS4_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[4u].diff)
#define CapSense_1_SLD_SNS4_DIFF_OFFSET                     (128u)
#define CapSense_1_SLD_SNS4_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS4_DIFF_PARAM_ID                   (0x84000080u)

#define CapSense_1_SLD_SNS4_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[4u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS4_NEG_BSLN_RST_CNT0_OFFSET        (130u)
#define CapSense_1_SLD_SNS4_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS4_NEG_BSLN_RST_CNT0_PARAM_ID      (0x40000082u)

#define CapSense_1_SLD_SNS4_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[4u].idacComp[0u])
#define CapSense_1_SLD_SNS4_IDAC_COMP0_OFFSET               (131u)
#define CapSense_1_SLD_SNS4_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS4_IDAC_COMP0_PARAM_ID             (0x46000083u)

#define CapSense_1_SLD_SNS5_RAW0_VALUE                      (CapSense_1_dsRam.snsList.sld[5u].raw[0u])
#define CapSense_1_SLD_SNS5_RAW0_OFFSET                     (132u)
#define CapSense_1_SLD_SNS5_RAW0_SIZE                       (2u)
#define CapSense_1_SLD_SNS5_RAW0_PARAM_ID                   (0x85000084u)

#define CapSense_1_SLD_SNS5_BSLN0_VALUE                     (CapSense_1_dsRam.snsList.sld[5u].bsln[0u])
#define CapSense_1_SLD_SNS5_BSLN0_OFFSET                    (134u)
#define CapSense_1_SLD_SNS5_BSLN0_SIZE                      (2u)
#define CapSense_1_SLD_SNS5_BSLN0_PARAM_ID                  (0x89000086u)

#define CapSense_1_SLD_SNS5_BSLN_EXT0_VALUE                 (CapSense_1_dsRam.snsList.sld[5u].bslnExt[0u])
#define CapSense_1_SLD_SNS5_BSLN_EXT0_OFFSET                (136u)
#define CapSense_1_SLD_SNS5_BSLN_EXT0_SIZE                  (1u)
#define CapSense_1_SLD_SNS5_BSLN_EXT0_PARAM_ID              (0x4E000088u)

#define CapSense_1_SLD_SNS5_DIFF_VALUE                      (CapSense_1_dsRam.snsList.sld[5u].diff)
#define CapSense_1_SLD_SNS5_DIFF_OFFSET                     (138u)
#define CapSense_1_SLD_SNS5_DIFF_SIZE                       (2u)
#define CapSense_1_SLD_SNS5_DIFF_PARAM_ID                   (0x8A00008Au)

#define CapSense_1_SLD_SNS5_NEG_BSLN_RST_CNT0_VALUE         (CapSense_1_dsRam.snsList.sld[5u].negBslnRstCnt[0u])
#define CapSense_1_SLD_SNS5_NEG_BSLN_RST_CNT0_OFFSET        (140u)
#define CapSense_1_SLD_SNS5_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_1_SLD_SNS5_NEG_BSLN_RST_CNT0_PARAM_ID      (0x4F00008Cu)

#define CapSense_1_SLD_SNS5_IDAC_COMP0_VALUE                (CapSense_1_dsRam.snsList.sld[5u].idacComp[0u])
#define CapSense_1_SLD_SNS5_IDAC_COMP0_OFFSET               (141u)
#define CapSense_1_SLD_SNS5_IDAC_COMP0_SIZE                 (1u)
#define CapSense_1_SLD_SNS5_IDAC_COMP0_PARAM_ID             (0x4900008Du)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (142u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6800008Eu)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (143u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6E00008Fu)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (144u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x81000090u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (146u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8D000092u)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (148u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x48000094u)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (149u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x4E000095u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BTN2_PTR2SNS_FLASH_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BTN2_PTR2SNS_FLASH_OFFSET                (0u)
#define CapSense_1_BTN2_PTR2SNS_FLASH_SIZE                  (4u)
#define CapSense_1_BTN2_PTR2SNS_FLASH_PARAM_ID              (0xD1000000u)

#define CapSense_1_BTN2_PTR2WD_RAM_VALUE                    (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BTN2_PTR2WD_RAM_OFFSET                   (4u)
#define CapSense_1_BTN2_PTR2WD_RAM_SIZE                     (4u)
#define CapSense_1_BTN2_PTR2WD_RAM_PARAM_ID                 (0xD0000004u)

#define CapSense_1_BTN2_PTR2SNS_RAM_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BTN2_PTR2SNS_RAM_OFFSET                  (8u)
#define CapSense_1_BTN2_PTR2SNS_RAM_SIZE                    (4u)
#define CapSense_1_BTN2_PTR2SNS_RAM_PARAM_ID                (0xD3000008u)

#define CapSense_1_BTN2_PTR2FLTR_HISTORY_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BTN2_PTR2FLTR_HISTORY_OFFSET             (12u)
#define CapSense_1_BTN2_PTR2FLTR_HISTORY_SIZE               (4u)
#define CapSense_1_BTN2_PTR2FLTR_HISTORY_PARAM_ID           (0xD200000Cu)

#define CapSense_1_BTN2_PTR2DEBOUNCE_VALUE                  (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BTN2_PTR2DEBOUNCE_OFFSET                 (16u)
#define CapSense_1_BTN2_PTR2DEBOUNCE_SIZE                   (4u)
#define CapSense_1_BTN2_PTR2DEBOUNCE_PARAM_ID               (0xD4000010u)

#define CapSense_1_BTN2_STATIC_CONFIG_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BTN2_STATIC_CONFIG_OFFSET                (20u)
#define CapSense_1_BTN2_STATIC_CONFIG_SIZE                  (4u)
#define CapSense_1_BTN2_STATIC_CONFIG_PARAM_ID              (0xD5000014u)

#define CapSense_1_BTN2_TOTAL_NUM_SNS_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BTN2_TOTAL_NUM_SNS_OFFSET                (24u)
#define CapSense_1_BTN2_TOTAL_NUM_SNS_SIZE                  (2u)
#define CapSense_1_BTN2_TOTAL_NUM_SNS_PARAM_ID              (0x99000018u)

#define CapSense_1_BTN2_TYPE_VALUE                          (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BTN2_TYPE_OFFSET                         (26u)
#define CapSense_1_BTN2_TYPE_SIZE                           (1u)
#define CapSense_1_BTN2_TYPE_PARAM_ID                       (0x5D00001Au)

#define CapSense_1_BTN2_NUM_COLS_VALUE                      (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BTN2_NUM_COLS_OFFSET                     (27u)
#define CapSense_1_BTN2_NUM_COLS_SIZE                       (1u)
#define CapSense_1_BTN2_NUM_COLS_PARAM_ID                   (0x5B00001Bu)

#define CapSense_1_BTN2_X_RESOLUTION_VALUE                  (CapSense_1_dsFlash.wdgtArray[0].xResolution)
#define CapSense_1_BTN2_X_RESOLUTION_OFFSET                 (28u)
#define CapSense_1_BTN2_X_RESOLUTION_SIZE                   (2u)
#define CapSense_1_BTN2_X_RESOLUTION_PARAM_ID               (0x9800001Cu)

#define CapSense_1_BTN2_X_CENT_MULT_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_1_BTN2_X_CENT_MULT_OFFSET                  (32u)
#define CapSense_1_BTN2_X_CENT_MULT_SIZE                    (4u)
#define CapSense_1_BTN2_X_CENT_MULT_PARAM_ID                (0xDB000020u)

#define CapSense_1_BTN2_PTR2NOISE_ENVLP_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BTN2_PTR2NOISE_ENVLP_OFFSET              (36u)
#define CapSense_1_BTN2_PTR2NOISE_ENVLP_SIZE                (4u)
#define CapSense_1_BTN2_PTR2NOISE_ENVLP_PARAM_ID            (0xDA000024u)

#define CapSense_1_BTN2_IIR_FILTER_COEFF_VALUE              (CapSense_1_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_1_BTN2_IIR_FILTER_COEFF_OFFSET             (40u)
#define CapSense_1_BTN2_IIR_FILTER_COEFF_SIZE               (1u)
#define CapSense_1_BTN2_IIR_FILTER_COEFF_PARAM_ID           (0x5E000028u)

#define CapSense_1_SLD_PTR2SNS_FLASH_VALUE                  (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_SLD_PTR2SNS_FLASH_OFFSET                 (44u)
#define CapSense_1_SLD_PTR2SNS_FLASH_SIZE                   (4u)
#define CapSense_1_SLD_PTR2SNS_FLASH_PARAM_ID               (0xDB01002Cu)

#define CapSense_1_SLD_PTR2WD_RAM_VALUE                     (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_SLD_PTR2WD_RAM_OFFSET                    (48u)
#define CapSense_1_SLD_PTR2WD_RAM_SIZE                      (4u)
#define CapSense_1_SLD_PTR2WD_RAM_PARAM_ID                  (0xDD010030u)

#define CapSense_1_SLD_PTR2SNS_RAM_VALUE                    (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_SLD_PTR2SNS_RAM_OFFSET                   (52u)
#define CapSense_1_SLD_PTR2SNS_RAM_SIZE                     (4u)
#define CapSense_1_SLD_PTR2SNS_RAM_PARAM_ID                 (0xDC010034u)

#define CapSense_1_SLD_PTR2FLTR_HISTORY_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_SLD_PTR2FLTR_HISTORY_OFFSET              (56u)
#define CapSense_1_SLD_PTR2FLTR_HISTORY_SIZE                (4u)
#define CapSense_1_SLD_PTR2FLTR_HISTORY_PARAM_ID            (0xDF010038u)

#define CapSense_1_SLD_PTR2DEBOUNCE_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_SLD_PTR2DEBOUNCE_OFFSET                  (60u)
#define CapSense_1_SLD_PTR2DEBOUNCE_SIZE                    (4u)
#define CapSense_1_SLD_PTR2DEBOUNCE_PARAM_ID                (0xDE01003Cu)

#define CapSense_1_SLD_STATIC_CONFIG_VALUE                  (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_SLD_STATIC_CONFIG_OFFSET                 (64u)
#define CapSense_1_SLD_STATIC_CONFIG_SIZE                   (4u)
#define CapSense_1_SLD_STATIC_CONFIG_PARAM_ID               (0xDF010040u)

#define CapSense_1_SLD_TOTAL_NUM_SNS_VALUE                  (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_SLD_TOTAL_NUM_SNS_OFFSET                 (68u)
#define CapSense_1_SLD_TOTAL_NUM_SNS_SIZE                   (2u)
#define CapSense_1_SLD_TOTAL_NUM_SNS_PARAM_ID               (0x91010044u)

#define CapSense_1_SLD_TYPE_VALUE                           (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_SLD_TYPE_OFFSET                          (70u)
#define CapSense_1_SLD_TYPE_SIZE                            (1u)
#define CapSense_1_SLD_TYPE_PARAM_ID                        (0x55010046u)

#define CapSense_1_SLD_NUM_COLS_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_SLD_NUM_COLS_OFFSET                      (71u)
#define CapSense_1_SLD_NUM_COLS_SIZE                        (1u)
#define CapSense_1_SLD_NUM_COLS_PARAM_ID                    (0x53010047u)

#define CapSense_1_SLD_X_RESOLUTION_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].xResolution)
#define CapSense_1_SLD_X_RESOLUTION_OFFSET                  (72u)
#define CapSense_1_SLD_X_RESOLUTION_SIZE                    (2u)
#define CapSense_1_SLD_X_RESOLUTION_PARAM_ID                (0x92010048u)

#define CapSense_1_SLD_X_CENT_MULT_VALUE                    (CapSense_1_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_1_SLD_X_CENT_MULT_OFFSET                   (76u)
#define CapSense_1_SLD_X_CENT_MULT_SIZE                     (4u)
#define CapSense_1_SLD_X_CENT_MULT_PARAM_ID                 (0xDC01004Cu)

#define CapSense_1_SLD_PTR2NOISE_ENVLP_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_SLD_PTR2NOISE_ENVLP_OFFSET               (80u)
#define CapSense_1_SLD_PTR2NOISE_ENVLP_SIZE                 (4u)
#define CapSense_1_SLD_PTR2NOISE_ENVLP_PARAM_ID             (0xDA010050u)

#define CapSense_1_SLD_IIR_FILTER_COEFF_VALUE               (CapSense_1_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_1_SLD_IIR_FILTER_COEFF_OFFSET              (84u)
#define CapSense_1_SLD_IIR_FILTER_COEFF_SIZE                (1u)
#define CapSense_1_SLD_IIR_FILTER_COEFF_PARAM_ID            (0x5C010054u)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
