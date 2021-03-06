/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1509
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set T0CKI aliases
#define T0CKI_TRIS               TRISA2
#define T0CKI_LAT                LATA2
#define T0CKI_PORT               RA2
#define T0CKI_WPU                WPUA2
#define T0CKI_ANS                ANSA2
#define T0CKI_SetHigh()    do { LATA2 = 1; } while(0)
#define T0CKI_SetLow()   do { LATA2 = 0; } while(0)
#define T0CKI_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define T0CKI_GetValue()         RA2
#define T0CKI_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define T0CKI_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define T0CKI_SetPullup()    do { WPUA2 = 1; } while(0)
#define T0CKI_ResetPullup()   do { WPUA2 = 0; } while(0)
#define T0CKI_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define T0CKI_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set T1G aliases
#define T1G_TRIS               TRISA4
#define T1G_LAT                LATA4
#define T1G_PORT               RA4
#define T1G_WPU                WPUA4
#define T1G_ANS                ANSA4
#define T1G_SetHigh()    do { LATA4 = 1; } while(0)
#define T1G_SetLow()   do { LATA4 = 0; } while(0)
#define T1G_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define T1G_GetValue()         RA4
#define T1G_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define T1G_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define T1G_SetPullup()    do { WPUA4 = 1; } while(0)
#define T1G_ResetPullup()   do { WPUA4 = 0; } while(0)
#define T1G_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define T1G_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set IO_RC0 aliases
#define IO_RC0_TRIS               TRISC0
#define IO_RC0_LAT                LATC0
#define IO_RC0_PORT               RC0
#define IO_RC0_ANS                ANSC0
#define IO_RC0_SetHigh()    do { LATC0 = 1; } while(0)
#define IO_RC0_SetLow()   do { LATC0 = 0; } while(0)
#define IO_RC0_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define IO_RC0_GetValue()         RC0
#define IO_RC0_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define IO_RC0_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define IO_RC1_TRIS               TRISC1
#define IO_RC1_LAT                LATC1
#define IO_RC1_PORT               RC1
#define IO_RC1_ANS                ANSC1
#define IO_RC1_SetHigh()    do { LATC1 = 1; } while(0)
#define IO_RC1_SetLow()   do { LATC1 = 0; } while(0)
#define IO_RC1_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define IO_RC1_GetValue()         RC1
#define IO_RC1_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define IO_RC1_SetAnalogMode()   do { ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()   do { ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define IO_RC2_TRIS               TRISC2
#define IO_RC2_LAT                LATC2
#define IO_RC2_PORT               RC2
#define IO_RC2_ANS                ANSC2
#define IO_RC2_SetHigh()    do { LATC2 = 1; } while(0)
#define IO_RC2_SetLow()   do { LATC2 = 0; } while(0)
#define IO_RC2_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define IO_RC2_GetValue()         RC2
#define IO_RC2_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define IO_RC2_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define IO_RC3_TRIS               TRISC3
#define IO_RC3_LAT                LATC3
#define IO_RC3_PORT               RC3
#define IO_RC3_ANS                ANSC3
#define IO_RC3_SetHigh()    do { LATC3 = 1; } while(0)
#define IO_RC3_SetLow()   do { LATC3 = 0; } while(0)
#define IO_RC3_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define IO_RC3_GetValue()         RC3
#define IO_RC3_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define IO_RC3_SetAnalogMode()   do { ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()   do { ANSC3 = 0; } while(0)
// get/set CLC4 aliases
#define CLC4_TRIS               TRISC4
#define CLC4_LAT                LATC4
#define CLC4_PORT               RC4
#define CLC4_SetHigh()    do { LATC4 = 1; } while(0)
#define CLC4_SetLow()   do { LATC4 = 0; } while(0)
#define CLC4_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define CLC4_GetValue()         RC4
#define CLC4_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define CLC4_SetDigitalOutput()   do { TRISC4 = 0; } while(0)


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */