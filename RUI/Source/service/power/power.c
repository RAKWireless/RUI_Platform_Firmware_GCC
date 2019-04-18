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
#ifdef BEM280_TEST
    bme280_spi_init();
    _bme280_sleep_init();
#endif

#ifdef OPT3001_TEST
    opt3001_twi_init();
    sensorOpt3001Enable(0);
#endif

#ifdef LIS2MDL_TEST
    lis2mdl_twi_init();
    lis2mdl_sleep_init();
#endif
#ifdef LIS3DH_TEST  
    lis3dh_twi_init();
    lis3dh_sleep_init();
#endif
#ifdef SHTC3_TEST
    SHTC3_Init();
    SHTC3_Sleep();
#endif

#ifdef LORA_TEST
    if(lora_send_ok == 1)
    {
   	 SX1276SetSleep( );
    }
#endif
	app_uart_close();
    *(volatile uint32_t *)0x40002FFC = 0;
}
void power_save_close()
{
	if(POWER_SAVE_ON == 1)
	{
	 *(volatile uint32_t *)0x40002FFC = 1;
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
       sensors_init();
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