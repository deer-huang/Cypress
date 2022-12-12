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

#define ENABLE_TUNER (1u)

/* Boolean constants */
#define LED_ON						(0u)
#define LED_OFF						(1u)


/* Finite state machine for device operating states 
    SENSOR_SCAN - Sensors are scanned in this state
    WAIT_FOR_SCAN_COMPLETE - CPU is put to sleep in this state
    PROCESS_DATA - Sensor data is processed, LEDs are controlled,
                   and I2C buffer is updated in this state */
typedef enum
{
    SENSOR_SCAN = 0x01u,                
    WAIT_FOR_SCAN_COMPLETE = 0x02u,     
    PROCESS_DATA = 0x03u,               
} DEVICE_STATE;

int main(void)
{
    
    DEVICE_STATE currentState = SENSOR_SCAN;
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    EZI2C_1_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //Pin_13_Write(0x00);
    
    PWM_1_Start();
    PWM_2_Start();
    
#if ENABLE_TUNER
    
    EZI2C_1_EzI2CSetBuffer1(sizeof(CapSense_1_dsRam),\
        sizeof(CapSense_1_dsRam),(uint8 *)&CapSense_1_dsRam);
#endif
    
    CapSense_1_Start();
    
    CapSense_1_ScanAllWidgets();
    
    SmartIO_1_Start();
    for(;;)
    {
        
        /* Switch between SENSOR_SCAN->WAIT_FOR_SCAN_COMPLETE->PROCESS_DATA states */
        switch(currentState)
        {
            case SENSOR_SCAN:
	            /* Initiate new scan only if the CapSense block is idle */
                if(CapSense_1_NOT_BUSY == CapSense_1_IsBusy())
                {
                    #if ENABLE_TUNER
                        /* Update CapSense parameters set via CapSense tuner before the 
                           beginning of CapSense scan 
                        */
                        CapSense_1_RunTuner();
                    #endif
                    
                    /* Scan widget configured by CSDSetupWidget API */
                    CapSense_1_ScanAllWidgets();
                                        
                    /* Set next state to WAIT_FOR_SCAN_COMPLETE  */
                    currentState = WAIT_FOR_SCAN_COMPLETE;
                }
                break;

            case WAIT_FOR_SCAN_COMPLETE:

                /* Put the device to CPU Sleep until CapSense scanning is complete*/
                if(CapSense_1_NOT_BUSY != CapSense_1_IsBusy())
                {
                    CySysPmSleep();
                }
                /* If CapSense scanning is complete, process the CapSense data */
                else
                {
                    currentState = PROCESS_DATA;
                }
                break;
        
            case PROCESS_DATA:
                
                /* Process data on all the enabled widgets */
                CapSense_1_ProcessAllWidgets();
                
                Pin_13_Write(CapSense_1_IsWidgetActive(CapSense_1_BTN2_WDGT_ID) ? LED_ON : LED_OFF );
                /* Controls LEDs Status based on the result of Widget processing. */
             
                /* Set the device state to SENSOR_SCAN */
                currentState = SENSOR_SCAN;  
                break;  
             
            /*******************************************************************
             * Unknown power mode state. Unexpected situation.
             ******************************************************************/    
            default:
                break;
        } 
    }
}

/* [] END OF FILE */
