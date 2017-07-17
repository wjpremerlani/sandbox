// This file is part of MatrixPilot.
//
//    http://code.google.com/p/gentlenav/
//
// Copyright 2009-2011 MatrixPilot Team
// See the AUTHORS.TXT file for a list of authors of MatrixPilot.
//
// MatrixPilot is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MatrixPilot is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MatrixPilot.  If not, see <http://www.gnu.org/licenses/>.


// used for the PX4 with STM32F4xx


#define ACCEL_RANGE         4       //    4 g range

// note : it is possible to use other accelerometer ranges on the MPU6000
#define SCALEGYRO           3.0016  // 500 degree/second range
#define SCALEACCEL          1.29    // 4 g range

#define NUM_ANALOG_INPUTS   4

// A/D channels:
#define A_VOLT_BUFF         5       // V, pin label Bat Volt
#define A_AMPS_BUFF         6       // I, pin label CS Curr
#define A_RSSI_BUFF         7       // RS, pin label RSSI

#define A_VCC_BUFF          5       // V, pin label Bat Volt
#define A_5V_BUFF           6       // I, pin label CS Curr
#define A_RSSI_BUFF         7       // RS, pin label RSSI

#define analogInput1BUFF    3
#define analogInput2BUFF    4
#define analogInput3BUFF    1
#define analogInput4BUFF    2

// MPU6000 configuration
#define xrate_MPU_channel   5
#define yrate_MPU_channel   4
#define zrate_MPU_channel   6
#define temp_MPU_channel    3
#define xaccel_MPU_channel  1
#define yaccel_MPU_channel  0
#define zaccel_MPU_channel  2

#define XRATE_SIGN          -
#define YRATE_SIGN          -
#define ZRATE_SIGN          -
#define XACCEL_SIGN         +
#define YACCEL_SIGN         +
#define ZACCEL_SIGN         +

// Max inputs and outputs
#define MAX_INPUTS          6
#define MAX_OUTPUTS         6

// LED pins
#define LED_RED             0
#define LED_GREEN           1
#define LED_ORANGE          2
#define LED_BLUE            3
#define LED_TAIL_LIGHT      4

/* PX4 LED colour codes */
/*
#define LED_AMBER           1
#define LED_RED             1   // some boards have red rather than amber
#define LED_BLUE            0
#define LED_GREEN           2
#define LED_SAFETY          2
#define LED_ORANGE          3
 */
// SPI SS pin definitions
#define SPI1_SS             _LATE4
#define SPI2_SS             _LATE7
#define SPI1_TRIS           _TRISE4
#define SPI2_TRIS           _TRISE7


// Input Capture module input pins: PINX is the port pin, RPINX is used for PPS
// PINX must match RPINX for radionIn_auav3 to work properly
//#define IC_PIN1  _RD0
//#define IC_RPIN1 64
//#define IC_PIN2  _RD8
//#define IC_RPIN2 72
//#define IC_PIN3  _RD11
//#define IC_RPIN3 75
//#define IC_PIN4  _RA15
//#define IC_RPIN4 31
//#define IC_PIN5  _RA5
//#define IC_RPIN5 21
//#define IC_PIN6  _RA14
//#define IC_RPIN6 30
//#define IC_PIN7  _RA4
//#define IC_RPIN7 20
//#define IC_PIN8  _RF8
//#define IC_RPIN8 104

#define IC_PIN1  GPIOA->IDR & (1 << 0)      //PA0
#define IC_PIN2  GPIOA->IDR & (1 << 1)      //PA1
#define IC_PIN3  GPIOB->IDR & (1 << 6)      //PB6
#define IC_PIN4  GPIOB->IDR & (1 << 7)      //PB7
#define IC_PIN5  GPIOB->IDR & (1 << 8)      //PB8
#define IC_PIN6  GPIOB->IDR & (1 << 9)      //PB9

// OC1:8 PWM module output pins
// PINX must match RPINX
#define OC_PIN1  _RG0
#define OC_RPIN1 _RP112R
#define OC_PIN2  _RE0
#define OC_RPIN2 _RP80R
#define OC_PIN3  _RG13
#define OC_RPIN3 _RP125R
#define OC_PIN4  _RD7
#define OC_RPIN4 _RP71R
#define OC_PIN5  _RG14
#define OC_RPIN5 _RP126R
#define OC_PIN6  _RG1
#define OC_RPIN6 _RP113R
#define OC_PIN7  _RF13
#define OC_RPIN7 _RP109R
#define OC_PIN8  _RF12
#define OC_RPIN8 _RP108R

// UART and output port connector mappings
#define UART1_RP 0b000001
#define UART2_RP 0b000011
#define UART3_RP 0b011011
#define UART4_RP 0b011101

#define PORT1_RP 78
#define PORT2_RP 100
#define PORT3_RP 98
#define PORT4_RP 86

#define PORT1_RPI _RP79R
#define PORT2_RPI _RP101R
#define PORT3_RPI _RP99R
#define PORT4_RPI _RP85R

