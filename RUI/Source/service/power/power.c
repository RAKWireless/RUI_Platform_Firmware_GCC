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

#ifdef BG96_TEST
#include "bg96.h"
#endif
#ifdef BC95G_TEST
#include "bc95-g.h"
#endif
#ifdef M35_TEST
#include "m35.h"
#endif

#ifdef L70R_TEST
extern void Gps_standby(void);
#endif

void power_save_open()
{
    NRF_LOG_INFO("power save open!\r\n");

#if defined(BC95G_TEST) || defined(M35_TEST) || defined(BG96_TEST)
    Gsm_PowerDown();
#endif

#ifdef L70R_TEST
    Gps_standby();
#endif
}

void power_save_close()
{  
    NRF_LOG_INFO("power save close!\r\n");
    sensors_init();    
}