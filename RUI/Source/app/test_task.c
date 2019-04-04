#include "board_basic.h"
#include "boards.h"
#include "nrf_delay.h"
#include "nrf_drv_rtc.h"
#include "nrf_rtc.h"
#include "FreeRTOS.h"
#include "task.h"
#include <string.h>
#include "sensor.h"
#include "itracker.h"
#include "nrf_log.h"

#ifdef LORA_TEST
extern uint8_t JOIN_FLAG;
extern lora_cfg_t g_lora_cfg_t;
int lora_send_ok = 0;
#endif

extern double gps_lat;
extern double gps_lon;  

void test_task(void * pvParameter)
{
    uint8_t gps_rsp[128] = {0};
    uint8_t gsm_rsp[128] = {0};
    uint8_t lora_data[128] = {0};
    uint8_t lora_len_acc = 0;
    uint8_t lora_len_t_h = 0;
    uint8_t lora_len_gps = 0;
    double temp = 0;
    double humidity = 0;
    double pressure = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    float magnetic_x = 0;
    float magnetic_y = 0;
    float magnetic_z = 0;
    float light = 0;
    double lat = 0;
    double lon = 0;
#ifdef LORA_TEST
    if(g_lora_cfg_t.sof == LORA_CONFIG_MAGIC)
    {
       region_init();
    }

#endif
    while(1)
    {
        NRF_LOG_INFO("++++++++++++++++test begin++++++++++++++++\r\n");
#ifdef BEM280_TEST
        itracker_function.temperature_get(&temp);
        NRF_LOG_INFO("temperature = %d\r\n",temp);
        itracker_function.humidity_get(&humidity);
        NRF_LOG_INFO("humidity = %d\r\n",humidity);
        itracker_function.pressure_get(&pressure);
        NRF_LOG_INFO("pressure = %d\r\n",pressure);
#endif

#ifdef LPS22HB_TEST
	itracker_function.pressure_get(&pressure);
        NRF_LOG_INFO("pressure = %d hPa\r\n",pressure);	
#endif
#ifdef LIS3DH_TEST
        itracker_function.acceleration_get(&x,&y,&z);
        NRF_LOG_INFO("acceleration x,y,z = %d mg,%d mg,%d mg",x,y,z);

#endif
#ifdef LIS2MDL_TEST
        itracker_function.magnetic_get(&magnetic_x,&magnetic_y,&magnetic_z);
        NRF_LOG_INFO("magnetic x,y,z = %d,%d,%d\r\n",magnetic_x,magnetic_y,magnetic_z);
#endif
#ifdef OPT3001_TEST
        itracker_function.light_strength_get(&light);
        NRF_LOG_INFO("light strength = %d\r\n",light);
#endif
#if  defined(M35_TEST) || defined(BG96_TEST)
        NRF_LOG_INFO("gsm version info = ");
        itracker_function.communicate_send("ATI");
        memset(gsm_rsp,0,128);
        itracker_function.communicate_response(gsm_rsp,128,500,GSM_TYPE_CHAR);
#endif
#if defined(L70R_TEST) ||  defined(BG96_TEST) || defined(MAX7_TEST)

        memset(gps_rsp,0,128);
        itracker_function.gps_get(gps_rsp,128);
        NRF_LOG_INFO("gps info :%s\r\n",gps_rsp);

#endif

#if defined(SHT31_TEST) || defined(SHTC3_TEST)
           itracker_function.temperature_get(&temp);
           NRF_LOG_INFO("temperature = %d\r\n",temp);
           itracker_function.humidity_get(&humidity);
           NRF_LOG_INFO("humidity = %d\r\n",humidity);
#endif

#ifdef LORA_TEST
        if(JOIN_FLAG==1)
        {
            memset(lora_data,0,128);
            lora_len_acc = 0;
            lora_len_t_h = 0;
            lora_len_gps = 0;
            lora_len_acc = sprintf(lora_data,"A:%d,%d,%d;",x,y,z);
            lora_len_t_h = sprintf(lora_data+lora_len_acc,"T:%d;H:%d;",temp,humidity);
            lora_len_gps = sprintf(lora_data+lora_len_acc+lora_len_t_h,"G:%d,%d;",gps_lat,gps_lon);            
            itracker_function.communicate_send(lora_data);
            lora_send_ok = 1; 
        }
        
#endif
#ifdef SLEEP_MODE
        power_save_open();
#endif
        NRF_LOG_INFO("++++++++++++++++test end++++++++++++++++\r\n");
        vTaskDelay(5000);
    }
}