/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //Pin_13_Write(0x00);
    
    PWM_1_Start();
    PWM_2_Start();
    
    
    EZI2C_1_Start();
    
    EZI2C_1_EzI2CSetBuffer1(sizeof(CapSense_1_dsRam),\
        sizeof(CapSense_1_dsRam),(uint8 *)&CapSense_1_dsRam);
    
    CapSense_1_Start();
    
    CapSense_1_ScanAllWidgets();
    
    SmartIO_1_Start();
    for(;;)
    {
        /* Do this only when a scan is done */
        if(CapSense_1_NOT_BUSY == CapSense_1_IsBusy())
        {
            CapSense_1_ProcessAllWidgets(); /* Process all widgets */
            CapSense_1_RunTuner(); /* To sync with Tuner application */
            if (CapSense_1_IsAnyWidgetActive()) /* Scan result verification */
            {
            /* add custom tasks to execute when touch detected */
                Pin_13_Write(0);
            }
            CapSense_1_ScanAllWidgets(); /* Start next scan */
        }
        Pin_13_Write(1);
    }
}

/* [] END OF FILE */
