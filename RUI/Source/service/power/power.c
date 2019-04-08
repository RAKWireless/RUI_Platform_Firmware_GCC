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

#ifdef LORA_TEST
extern void SX1276SetSleep( void );
extern int lora_send_ok;
#endif
int POWER_SAVE_ON  =  0;
void power_save_open()
{
    NRF_LOG_INFO("power save open!\r\n");
    POWER_SAVE_ON = 1;
#if defined(BC95G_TEST) || defined(M35_TEST) || defined(BG96_TEST)
    Gsm_PowerDown();
#endif

#ifdef L70R_TEST
    Gps_standby();
#endif

#ifdef MAX7_TEST
    gps_poweroff();
#endif

#ifdef LORA_TEST
    if(lora_send_ok == 1)
    {
   	 SX1276SetSleep( );
    }
#endif
}
void power_save_close()
{
	if(POWER_SAVE_ON == 1)
	{
    	NRF_LOG_INFO("power save close!\r\n");
#if defined(BC95G_TEST) || defined(M35_TEST) || defined(BG96_TEST)
    	Gsm_Init();
#endif
#ifdef L70R_TEST
       Gps_Init();
#endif

#ifdef MAX7_TEST
       max_init();
       gps_setup();
#endif
        POWER_SAVE_ON = 0;
    }
}

void power_release_gpio()
{
#if defined(BC95G_TEST) || defined(M35_TEST) || defined(BG96_TEST)
    nrf_gpio_cfg_default(GSM_TXD_PIN);
    nrf_gpio_cfg_default(GSM_RXD_PIN);
#endif  
#ifdef L70R_TEST
    nrf_gpio_cfg_default(GPS_TXD_PIN);
    nrf_gpio_cfg_default(GPS_RXD_PIN);
#endif
}