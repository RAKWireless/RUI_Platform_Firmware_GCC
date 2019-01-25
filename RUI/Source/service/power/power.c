#include <stdbool.h>
#include "nrf_assert.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "board_basic.h"
#include <stddef.h>
#include <string.h>
#include "app_error.h"
#include "nrf_soc.h"
#include "sensor.h"


#ifdef LIS3DH_TEST
#include "Lis3dh.h"
#endif

#ifdef BG96_TEST
#include "bg96.h"
#endif

void power_save_open()
{
    NRF_LOG_INFO("power save open!\r\n");
#ifdef LIS3DH_TEST
    (void)LIS3DH_SetMode(LIS3DH_POWER_DOWN);
#endif

#ifdef BG96_TEST
    Gsm_PowerDown();
#endif
}

void power_save_close()
{  
    NRF_LOG_INFO("power save close!\r\n");
    sensors_init();    
}