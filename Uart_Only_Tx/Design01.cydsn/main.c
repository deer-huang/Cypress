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
#include <stdio.h>
#define ENABLE_TUNER (1u)

/* Boolean constants */
#define LED_ON						(0u)
#define LED_OFF						(1u)
/*Defining step size for LED control based on centroid position of slider*/
#define STEP_SIZE (CapSense_1_SLD_X_RESOLUTION/CapSense_1_SLD_NUM_SENSORS) 


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
/****************************************************** PWM *****************************************************/
    PWM_1_Start();
    PWM_2_Start();
    
    SmartIO_1_Start();
    
/*************************************************** CapSense ***************************************************/
#if ENABLE_TUNER
    
    EZI2C_1_EzI2CSetBuffer1(sizeof(CapSense_1_dsRam),\
        sizeof(CapSense_1_dsRam),(uint8 *)&CapSense_1_dsRam);
#endif
    
    CapSense_1_Start();
    
    CapSense_1_ScanAllWidgets();
    
/***************************************************** Uart *****************************************************/
    
    
    /* Start the SW_Tx_UART Component */
    SW_Tx_UART_Start();
    
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
                Pin_13_Write(CapSense_1_IsWidgetActive(CapSense_1_BTN2_WDGT_ID)?LED_ON:LED_OFF);
                
                
                if(CapSense_1_IsWidgetActive(CapSense_1_SLD_WDGT_ID))
                {
                    uint32 centroid = CapSense_1_GetCentroidPos(CapSense_1_SLD_WDGT_ID);
                    
                    Pin_5_Write( LED_ON );
                    //Pin_5_Write(CapSense_1_IsWidgetActive(CapSense_1_SLD_WDGT_ID)?LED_ON:LED_OFF);
                    Pin_6_Write( ( centroid > ( 1 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
                    Pin_7_Write( ( centroid > ( 2 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
                    Pin_8_Write( ( centroid > ( 3 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
                    Pin_9_Write( ( centroid > ( 4 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
                    Pin_10_Write( ( centroid > ( 5 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
                    
                    char8 test_str[50];
                    sprintf((char *)test_str, "centroid: %ld", centroid);
                    SW_Tx_UART_PutString(test_str);
                    SW_Tx_UART_PutCRLF();
                }
                else
                {
                    Pin_5_Write(LED_OFF);
                    Pin_6_Write(LED_OFF);
                    Pin_7_Write(LED_OFF);
                    Pin_8_Write(LED_OFF);
                    Pin_9_Write(LED_OFF);
                    Pin_10_Write(LED_OFF);
                }
                CapSense_1_Sleep();
                
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
