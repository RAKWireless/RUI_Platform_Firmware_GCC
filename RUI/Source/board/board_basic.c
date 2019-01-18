#include "board_basic.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "hal_uart.h"


GSM_RECEIVE_TYPE g_type = GSM_TYPE_CHAR;

void delay_ms(uint32_t ms)
{
    nrf_delay_ms(ms);
}







