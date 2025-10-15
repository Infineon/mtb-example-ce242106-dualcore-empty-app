/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for CM0+ in the the Dual core Empty 
*              Application for ModusToolbox.
*
* Related Document: See README.md
*
*
*******************************************************************************
* Copyright 2025-YEAR Cypress Semiconductor $
*******************************************************************************/

/*******************************************************************************
 * Include Header files
 *******************************************************************************/
#include "cy_pdl.h"
#include "cycfg.h"
#include "cybsp.h"

/********************************************************************************
* Function Name: main
********************************************************************************/
int main(void)
{
    /* Enable global interrupts */
    __enable_irq();
    
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }
    /* Enable CM4. CY_CORTEX_M4_APPL_ADDR must be updated if CM4 memory layout is changed. */
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR);

    for (;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
