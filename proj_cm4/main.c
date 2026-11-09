/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for CM4 in the the Dual-core Empty 
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
#include "cybsp.h"

/********************************************************************************
* Function Name: main
********************************************************************************/
int main(void)
{
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    /* Enable global interrupts */
    __enable_irq();

    for (;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
