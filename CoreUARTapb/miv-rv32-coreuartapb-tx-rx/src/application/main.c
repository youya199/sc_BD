/*******************************************************************************
 * Copyright 2019-2021 Microchip FPGA Embedded Systems Solutions.
 *
 * SPDX-License-Identifier: MIT
 *
 * Application demonstrating the use of CoreUARTapb driver. Please see the
 * README.md for more details.
 */
#include <drivers/fpga_ip/CoreGPIO/core_gpio.h>
#include <drivers/fpga_ip/CoreUARTapb/core_uart_apb.h>
#include "fpga_design_config/hw_platform.h"
#include "miv_rv32_hal/miv_rv32_hal.h"
#include <stdio.h>
#include "../boards/avalanche-board/fpga_design_config/hw_platform.h"

#define MAX_RX_DATA_SIZE    256
UART_instance_t g_uart;

uint8_t g_message[] =
"\n\r\n\r\n\rThis example demonstrates CoreUARTapb polled transmit and receiver APIs.\n\r";

uint8_t end_message[] =
"\n\rMemory Read has reached its due length\n\r";

uint8_t newline[] ="\n";

uint8_t end_flag = 0;//set to 1 when Memory Read has reached its due length
// delay

#define APB_BUS_WIDTH   GPIO_APB_32_BITS_BUS
#define RX_BUFF_SIZE    64U
#define HIGH            1u
#define LOW             0U

gpio_instance_t g_gpio;

static void delay(void)
{
 volatile uint32_t delay_count = SYS_CLK_FREQ / 10000u;
 while(delay_count > 0u)
 {
 --delay_count;
 }
}

void main( void )
{
	GPIO_init(&g_gpio, COREGPIO_OUT_BASE_ADDR, APB_BUS_WIDTH);

    uint8_t rx_data[MAX_RX_DATA_SIZE];
    size_t rx_size;
    UART_init( &g_uart, COREUARTAPB0_BASE_ADDR, BAUD_VALUE_115200, (DATA_8_BITS | NO_PARITY) );
    UART_polled_tx_string( &g_uart, g_message);



    volatile uint32_t *memory_address = (uint32_t*)0x60000000;
	uint8_t str[32];
	const uint32_t readlen = 0x3FF;




	volatile uint8_t k = 0;

    while(1)
    {
    	uint32_t readinx = 0;
       GPIO_set_output(&g_gpio, GPIO_0, HIGH );
	   GPIO_set_output(&g_gpio, GPIO_0, LOW );

	   do
	   {



		   k++;
	   }while(GPIO_get_inputs(&g_gpio) == 0);//while alle 4 pins low sind




	   for(readinx = 0; readinx < readlen; readinx++){

	  		   			uint32_t data = *(memory_address + readinx);
	  		   			sprintf(str, "%08x", data);
	  		   			UART_polled_tx_string( &g_uart, str);
	  		   			UART_polled_tx_string( &g_uart, newline);
	  		   			delay();

    }
    }
}







