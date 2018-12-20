#include "board_basic.h"
#include "nrf52.h"
#include "boards.h"
#include "nrf_delay.h"
#include "nrf_drv_rtc.h"
#include "nrf_rtc.h"
#include "nrf_drv_gpiote.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> 
#include "hal_uart.h"


GSM_RECIEVE_TYPE g_type = GSM_TYPE_CHAR;

void rui_printf(char *format)
{
	rak_uart_init(LOG_USE_UART, LOG_RXD_PIN, LOG_TXD_PIN, UARTE_BAUDRATE_BAUDRATE_Baud115200);
	while(*format)
	app_uart_put(*format++);
	rak_uart_init(GSM_USE_UART, GSM_RXD_PIN, GSM_TXD_PIN, UARTE_BAUDRATE_BAUDRATE_Baud115200);
}







