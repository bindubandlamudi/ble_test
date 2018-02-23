/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F18875
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

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

// get/set BLE2_Conn aliases
#define BLE2_Conn_TRIS               TRISAbits.TRISA2
#define BLE2_Conn_LAT                LATAbits.LATA2
#define BLE2_Conn_PORT               PORTAbits.RA2
#define BLE2_Conn_WPU                WPUAbits.WPUA2
#define BLE2_Conn_OD                ODCONAbits.ODCA2
#define BLE2_Conn_ANS                ANSELAbits.ANSA2
#define BLE2_Conn_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define BLE2_Conn_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define BLE2_Conn_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define BLE2_Conn_GetValue()           PORTAbits.RA2
#define BLE2_Conn_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define BLE2_Conn_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define BLE2_Conn_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define BLE2_Conn_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define BLE2_Conn_SetPushPull()    do { ODCONAbits.ODCA2 = 0; } while(0)
#define BLE2_Conn_SetOpenDrain()   do { ODCONAbits.ODCA2 = 1; } while(0)
#define BLE2_Conn_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define BLE2_Conn_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()    do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()   do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()   do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()         PORTCbits.RC0
#define RC0_SetDigitalInput()   do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()  do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()     do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()   do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode() do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set BLE2_Cmd_Mldp aliases
#define BLE2_Cmd_Mldp_TRIS               TRISDbits.TRISD1
#define BLE2_Cmd_Mldp_LAT                LATDbits.LATD1
#define BLE2_Cmd_Mldp_PORT               PORTDbits.RD1
#define BLE2_Cmd_Mldp_WPU                WPUDbits.WPUD1
#define BLE2_Cmd_Mldp_OD                ODCONDbits.ODCD1
#define BLE2_Cmd_Mldp_ANS                ANSELDbits.ANSD1
#define BLE2_Cmd_Mldp_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define BLE2_Cmd_Mldp_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define BLE2_Cmd_Mldp_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define BLE2_Cmd_Mldp_GetValue()           PORTDbits.RD1
#define BLE2_Cmd_Mldp_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define BLE2_Cmd_Mldp_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define BLE2_Cmd_Mldp_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define BLE2_Cmd_Mldp_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define BLE2_Cmd_Mldp_SetPushPull()    do { ODCONDbits.ODCD1 = 0; } while(0)
#define BLE2_Cmd_Mldp_SetOpenDrain()   do { ODCONDbits.ODCD1 = 1; } while(0)
#define BLE2_Cmd_Mldp_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define BLE2_Cmd_Mldp_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set BLE2_Wake aliases
#define BLE2_Wake_TRIS               TRISDbits.TRISD2
#define BLE2_Wake_LAT                LATDbits.LATD2
#define BLE2_Wake_PORT               PORTDbits.RD2
#define BLE2_Wake_WPU                WPUDbits.WPUD2
#define BLE2_Wake_OD                ODCONDbits.ODCD2
#define BLE2_Wake_ANS                ANSELDbits.ANSD2
#define BLE2_Wake_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define BLE2_Wake_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define BLE2_Wake_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define BLE2_Wake_GetValue()           PORTDbits.RD2
#define BLE2_Wake_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define BLE2_Wake_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define BLE2_Wake_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define BLE2_Wake_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define BLE2_Wake_SetPushPull()    do { ODCONDbits.ODCD2 = 0; } while(0)
#define BLE2_Wake_SetOpenDrain()   do { ODCONDbits.ODCD2 = 1; } while(0)
#define BLE2_Wake_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define BLE2_Wake_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

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