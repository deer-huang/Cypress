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
    Pin_13_Write(0x00);
    
    PWM_1_Start();
    PWM_2_Start();
    
    SmartIO_1_Start();
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
