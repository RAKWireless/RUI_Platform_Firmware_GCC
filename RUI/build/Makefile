#RUI Version:2.0
#numbers of supported mcu is from 1 to 9
#numbers of supported connectivity chips is from 1-9,a-z,A-Z, at most 61
#numbers of supported sensors is from 1-9,a-z,A-Z, at most 61

include Makefile_Custome

PROJECT_NAME     := RUI
TARGETS          := nrf52_xxaa
OUTPUT_DIRECTORY := _build
P :=
NUM := $(words $(P))
SDK_ROOT := ../..

ifeq (1, $(word 1, $(P)))
$(OUTPUT_DIRECTORY)/nrf52_xxaa.out: \
  LINKER_SCRIPT  := rui_gcc_nrf52832.ld
else ifeq (2, $(word 1, $(P)))
$(OUTPUT_DIRECTORY)/nrf52_xxaa.out: \
  LINKER_SCRIPT  := rui_gcc_nrf52840.ld
endif
# Source files common to all targets



ifeq (1, $(REGION))
  CFLAGS += -DREGION_AS923
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionAS923.c
else ifeq (2, $(REGION))
  CFLAGS += -DREGION_AU915
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionAU915.c
else ifeq (3, $(REGION))
  CFLAGS += -DREGION_CN470
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionCN470.c
else ifeq (4, $(REGION))
  CFLAGS += -DREGION_CN779
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionCN779.c
else ifeq (5, $(REGION))
  CFLAGS += -DREGION_EU433
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionEU433.c
else ifeq (6, $(REGION))
  CFLAGS += -DREGION_EU868
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionEU868.c
else ifeq (7, $(REGION))
  CFLAGS += -DREGION_IN865
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionIN865.c
else ifeq (8, $(REGION))
  CFLAGS += -DREGION_KR920
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionKR920.c
else ifeq (9, $(REGION))
  CFLAGS += -DREGION_US915
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionUS915.c
else ifeq (10, $(REGION))
  CFLAGS += -DREGION_US915_Hybrid
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionUS915-Hybrid.c
endif


ifeq (2, $(word 1, $(P)))
  SRC_FILES += $(SDK_ROOT)/modules/nrfx/mdk/system_nrf52840.c
  SRC_FILES += $(SDK_ROOT)/modules/nrfx/mdk/gcc_startup_nrf52840.S
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_frontend.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_rtt.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_uart.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_backend_serial.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_str_formatter.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/log/src/nrf_log_default_backends.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/memobj/nrf_memobj.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/ringbuf/nrf_ringbuf.c
endif
ifeq (1, $(word 1, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/build/RTE/Device/nRF52832_xxAA/system_nrf52.c
  SRC_FILES += $(SDK_ROOT)/modules/nrfx/mdk/gcc_startup_nrf52.S
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_frontend.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_rtt.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_uart.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_serial.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_str_formatter.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_default_backends.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/experimental_memobj/nrf_memobj.c
  SRC_FILES += $(SDK_ROOT)/components/ble/peer_manager/pm_mutex.c
endif

ifeq (1, $(DFU_SUPPORT))
  SRC_FILES += $(SDK_ROOT)/components/ble/ble_services/ble_dfu/ble_dfu.c
  SRC_FILES += $(SDK_ROOT)/components/ble/ble_services/ble_dfu/ble_dfu_unbonded.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/bootloader/dfu/nrf_dfu_svci.c
  SRC_FILES += $(SDK_ROOT)/components/libraries/pwr_mgmt/nrf_pwr_mgmt.c
endif

SRC_FILES += \
  $(SDK_ROOT)/RUI/Source/main.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uart.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uarte.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_clock.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_twim.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_twi.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_gpiote.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spim.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs/nrfx_prs.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_clock.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_power.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_spi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_swi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_twi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_uart.c \
  $(SDK_ROOT)/external/freertos/portable/GCC/nrf52/port.c \
  $(SDK_ROOT)/external/freertos/source/tasks.c \
  $(SDK_ROOT)/external/freertos/source/croutine.c \
  $(SDK_ROOT)/external/freertos/source/event_groups.c \
  $(SDK_ROOT)/external/freertos/source/list.c \
  $(SDK_ROOT)/external/freertos/source/queue.c \
  $(SDK_ROOT)/external/freertos/source/stream_buffer.c \
  $(SDK_ROOT)/external/freertos/source/timers.c \
  $(SDK_ROOT)/external/freertos/source/portable/MemMang/heap_1.c \
  $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52/port_cmsis_systick.c \
  $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52/port_cmsis.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf.c \
  $(SDK_ROOT)/external/fprintf/nrf_fprintf_format.c \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager/ble_link_ctx_manager.c \
  $(SDK_ROOT)/components/ble/peer_manager/peer_id.c \
  $(SDK_ROOT)/components/ble/peer_manager/pm_buffer.c \
  $(SDK_ROOT)/components/ble/peer_manager/security_dispatcher.c \
  $(SDK_ROOT)/components/ble/peer_manager/security_manager.c \
  $(SDK_ROOT)/components/ble/peer_manager/peer_data_storage.c \
  $(SDK_ROOT)/components/ble/peer_manager/peer_database.c \
  $(SDK_ROOT)/components/ble/peer_manager/gatts_cache_manager.c \
  $(SDK_ROOT)/components/ble/peer_manager/gatt_cache_manager.c \
  $(SDK_ROOT)/components/ble/peer_manager/id_manager.c \
  $(SDK_ROOT)/components/ble/peer_manager/peer_manager.c \
  $(SDK_ROOT)/components/ble/common/ble_srv_common.c \
  $(SDK_ROOT)/RUI/Source/service/sensor/sensor.c \
  $(SDK_ROOT)/RUI/Source/service/power/power.c \
  $(SDK_ROOT)/components/ble/common/ble_advdata.c \
  $(SDK_ROOT)/components/libraries/experimental_section_vars/nrf_section_iter.c \
  $(SDK_ROOT)/components/libraries/strerror/nrf_strerror.c \
  $(SDK_ROOT)/components/libraries/fstorage/nrf_fstorage_sd.c \
  $(SDK_ROOT)/components/libraries/util/app_error_weak.c \
  $(SDK_ROOT)/components/libraries/util/app_error.c \
  $(SDK_ROOT)/components/libraries/fifo/app_fifo.c \
  $(SDK_ROOT)/components/libraries/balloc/nrf_balloc.c \
  $(SDK_ROOT)/components/libraries/util/app_util_platform.c \
  $(SDK_ROOT)/components/libraries/fstorage/nrf_fstorage.c \
  $(SDK_ROOT)/components/libraries/atomic/nrf_atomic.c \
  $(SDK_ROOT)/components/libraries/atomic_flags/nrf_atflags.c \
  $(SDK_ROOT)/components/libraries/atomic_fifo/nrf_atfifo.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp.c \
  $(SDK_ROOT)/components/boards/boards.c \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt/nrf_ble_gatt.c \
  $(SDK_ROOT)/components/libraries/timer/app_timer_freertos.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh_freertos.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh_soc.c \
  $(SDK_ROOT)/components/softdevice/common/nrf_sdh_ble.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_params.c \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus/ble_nus.c \
  $(SDK_ROOT)/modules/nrfx/hal/nrf_nvmc.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp_btn_ble.c \
  $(SDK_ROOT)/components/libraries/fds/fds.c \
  $(SDK_ROOT)/components/ble/ble_advertising/ble_advertising.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_state.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_Syscalls_GCC.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c \
  $(SDK_ROOT)/RUI/Source/board/board_basic.c \
  $(SDK_ROOT)/RUI/Source/board/itracker_basic.c \
  $(SDK_ROOT)/components/libraries/uart/app_uart_fifo.c \
  $(SDK_ROOT)/RUI/Source/external/utilities.c \
  $(SDK_ROOT)/RUI/Source/external/utils.c \
  $(SDK_ROOT)/RUI/Source/hal/hal_gpio.c \
  $(SDK_ROOT)/RUI/Source/hal/hal_i2c.c \
  $(SDK_ROOT)/RUI/Source/hal/hal_spi.c \
  $(SDK_ROOT)/RUI/Source/hal/hal_uart.c \
  $(SDK_ROOT)/components/boards/boards.c \
  $(SDK_ROOT)/components/libraries/util/app_error.c \
  $(SDK_ROOT)/components/libraries/util/app_error_handler_gcc.c \
  $(SDK_ROOT)/components/libraries/util/app_error_weak.c \
  $(SDK_ROOT)/components/libraries/util/app_util_platform.c \
  $(SDK_ROOT)/components/libraries/util/nrf_assert.c \
  $(SDK_ROOT)/components/libraries/strerror/nrf_strerror.c \



ifeq (1, $(word 2, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bc95-g.c
else ifeq (2, $(word 2, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bg96.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/service/sensor/gps.c
else ifeq (3, $(word 2, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/m35.c
else ifeq (4, $(word 2, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/sx1276_lora.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio/sx1276/sx1276.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/Region.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/LoRaMac.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/LoRaMacCrypto.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto/aes.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto/cmac.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionCommon.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/service/lora/app_lora.c
else ifeq (5, $(word 2, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/sx1276_lora.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio/sx1276/sx1276.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/Region.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/LoRaMac.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/LoRaMacCrypto.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto/aes.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto/cmac.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region/RegionCommon.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/service/lora/app_lora.c
endif

ifeq (1, $(findstring 1, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bme280.c
endif
ifeq (2, $(findstring 2, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/l70_gps.c
endif
ifeq (3, $(findstring 3, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/lis2mdl.c
endif
ifeq (4, $(findstring 4, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/lis3dh.c
endif
ifeq (5, $(findstring 5, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/opt3001.c
endif
ifeq (6, $(findstring 6, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/sht31.c
endif
ifeq (7, $(findstring 7, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/gps_max7.c
  SRC_FILES += $(SDK_ROOT)/RUI/Source/service/sensor/gps.c
endif
ifeq (8, $(findstring 8, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/shtc3.c
endif
ifeq (9, $(findstring 9, $(wordlist 3, $(NUM), $(P))))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/lps22hb.c
endif

ifeq (1, $(BSP_MODE))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/app/test_task.c
endif

ifeq (1, $(ACCESS_NET_TEST))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/app/hologram_task.c
endif



# Include folders common to all targets

ifeq (2, $(word 1, $(P)))
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/log
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/ringbuf  
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/log/src
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/memobj
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/mutex  
  INC_FOLDERS += $(SDK_ROOT)/components/softdevice/s140/headers
  INC_FOLDERS += $(SDK_ROOT)/components/softdevice/s140/headers/nRF52
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/config/52840_board 
else ifeq (1, $(word 1, $(P)))
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/experimental_log
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/experimental_log/src
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/experimental_memobj
  INC_FOLDERS += $(SDK_ROOT)/components/softdevice/s132/headers
  INC_FOLDERS += $(SDK_ROOT)/components/softdevice/s132/headers/nRF52
endif

ifeq (1, $(word 1, $(P)))
	ifeq (4, $(word 2, $(P)))
    		INC_FOLDERS += $(SDK_ROOT)/RUI/Source/config/52832_board/lora815
	else ifeq (5, $(word 2, $(P)))
        INC_FOLDERS += $(SDK_ROOT)/RUI/Source/config/52832_board/lora4600
  else
        INC_FOLDERS += $(SDK_ROOT)/RUI/Source/config/52832_board/itracker
  endif
endif


ifeq (4, $(word 2, $(P)))
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio/sx1276
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system
  INC_FOLDERS += $(SDK_ROOT)/modules/nrfx/drivers/include
endif

ifeq (5, $(word 2, $(P)))
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/mac/region
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/radio/sx1276
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system/crypto
  INC_FOLDERS += $(SDK_ROOT)/RUI/Source/external/LoRaWAN/system
  INC_FOLDERS += $(SDK_ROOT)/modules/nrfx/drivers/include
endif

ifeq (1, $(DFU_SUPPORT))
  INC_FOLDERS += $(SDK_ROOT)/components/ble/ble_services/ble_dfu 
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/bootloader 
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/bootloader/ble_dfu 
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/bootloader/dfu 
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/pwr_mgmt 
  INC_FOLDERS += $(SDK_ROOT)/components/libraries/svc 
endif

INC_FOLDERS += \
  $(SDK_ROOT)/components \
  $(SDK_ROOT)/integration/nrfx/legacy \
  $(SDK_ROOT)/components/libraries/experimental_section_vars \
  $(SDK_ROOT)/components/libraries/strerror \
  $(SDK_ROOT)/components/libraries/fstorage \
  $(SDK_ROOT)/components/softdevice/common \
  $(SDK_ROOT)/components/libraries/util/ \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager \
  $(SDK_ROOT)/components/libraries/atomic/ \
  $(SDK_ROOT)/components/libraries/atomic_flags \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt \
  $(SDK_ROOT)/components/libraries/balloc \
  $(SDK_ROOT)/components/boards \
  $(SDK_ROOT)/components/ble/peer_manager \
  $(SDK_ROOT)/components/softdevice/common \
  $(SDK_ROOT)/components/ble/common \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus \
  $(SDK_ROOT)/components/ble/ble_services/ble_nus \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager \
  $(SDK_ROOT)/components/ble/ble_advertising \
  $(SDK_ROOT)/components/libraries/atomic_flags \
  $(SDK_ROOT)/components/libraries/timer \
  $(SDK_ROOT)/components/libraries/fds \
  $(SDK_ROOT)/components/libraries/fifo \
  $(SDK_ROOT)/components/libraries/atomic \
  $(SDK_ROOT)/components/libraries/atomic_fifo \
  $(SDK_ROOT)/components/libraries/uart \
  $(SDK_ROOT)/components/libraries/fstorage \
  $(SDK_ROOT)/components/libraries/crc32 \
  $(SDK_ROOT)/components/libraries/sha256 \
  $(SDK_ROOT)/components/libraries/crypto \
  $(SDK_ROOT)/components/libraries/crypto/backend/cc310 \
  $(SDK_ROOT)/components/libraries/crypto/backend/cc310_bl \
  $(SDK_ROOT)/components/libraries/crypto/backend/nrf_sw \
  $(SDK_ROOT)/components/libraries/crypto/backend/mbedtls \
  $(SDK_ROOT)/components/libraries/crypto/backend/oberon \
  $(SDK_ROOT)/components/libraries/crypto/backend/micro_ecc \
  $(SDK_ROOT)/components/libraries/bootloader/dfu \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt \
  $(SDK_ROOT)/components/libraries/uart/ \
  $(SDK_ROOT)/modules/nrfx/mdk \
  $(SDK_ROOT)/RUI/build/RTE \
  $(SDK_ROOT)/modules/nrfx/hal \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs \
  $(SDK_ROOT)/components/libraries/balloc \
  $(SDK_ROOT)/components/libraries/delay \
  $(SDK_ROOT)/integration/nrfx \
  $(SDK_ROOT)/components/libraries/bsp \
  $(SDK_ROOT)/components/drivers_nrf/nrf_soc_nosd \
  $(SDK_ROOT)/external/segger_rtt \
  $(SDK_ROOT)/RUI/Source \
  $(SDK_ROOT)/RUI/Source/include \
  $(SDK_ROOT)/RUI/Source/external/micro-ecc \
  $(SDK_ROOT)/components/libraries/strerror \
  $(SDK_ROOT)/components/boards \
  $(SDK_ROOT)/components/toolchain/cmsis/include \
  $(SDK_ROOT)/modules/nrfx \
  $(SDK_ROOT)/components/libraries/util \
  $(SDK_ROOT)/external/freertos/portable/GCC/nrf52/ \
  $(SDK_ROOT)/external/freertos/portable/CMSIS/nrf52 \
  $(SDK_ROOT)/external/freertos/source/include \
  $(SDK_ROOT)/external/fprintf \
  $(SDK_ROOT)/external/segger_rtt \
  $(SDK_ROOT)/modules/nrfx/drivers/include \
  $(SDK_ROOT)/components/libraries/util \
  $(SDK_ROOT)/components/ble/ble_advertising \
  $(SDK_ROOT)/components/libraries/fds \
  $(SDK_ROOT)/components/libraries/button \
  $(SDK_ROOT)/components/libraries/bsp \
  $(SDK_ROOT)/modules/nrfx/drivers/include \
  $(SDK_ROOT)/modules/nrfx/hal/ \
  
# Libraries common to all targets
LIB_FILES += $(SDK_ROOT)/RUI/Source/external/micro-ecc/micro_ecc_lib_nrf52.lib

# Optimization flags
OPT = -O3 -g3
# Uncomment the line below to enable link time optimization
#OPT += -flto

# C flags common to all targets
ifeq (1, $(word 2, $(P)))
  CFLAGS += -DBC95G_TEST
endif
ifeq (2, $(word 2, $(P)))
  CFLAGS += -DBG96_TEST
endif
ifeq (3, $(word 2, $(P)))
  CFLAGS += -DM35_TEST
endif
ifeq (4, $(word 2, $(P)))
  CFLAGS += -DLORA_81x_TEST
endif
ifeq (5, $(word 2, $(P)))
  CFLAGS += -DLORA_4600_TEST
endif

ifeq (1, $(findstring 1, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DBEM280_TEST
endif
ifeq (2, $(findstring 2, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DL70R_TEST
endif
ifeq (3, $(findstring 3, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DLIS2MDL_TEST
endif
ifeq (4, $(findstring 4, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DLIS3DH_TEST
endif
ifeq (5, $(findstring 5, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DOPT3001_TEST
endif
ifeq (6, $(findstring 6, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DSHT31_TEST
endif
ifeq (7, $(findstring 7, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DMAX7_TEST
endif
ifeq (8, $(findstring 8, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DSHTC3_TEST
endif
ifeq (9, $(findstring 9, $(wordlist 3, $(NUM), $(P))))
  CFLAGS += -DLPS22HB_TEST
endif


CFLAGS += $(OPT)
ifeq (2, $(word 1, $(P)))
  CFLAGS += -DBOARD_PCA10056
  CFLAGS += -DS140
  CFLAGS += -DCONFIG_GPIO_AS_PINRESET
  CFLAGS += -DFLOAT_ABI_HARD
  CFLAGS += -DNRF52840_XXAA
  CFLAGS += -DNRF_SD_BLE_API_VERSION=6
else ifeq (1, $(word 1, $(P)))
   CFLAGS += -DBOARD_PCA10040
   CFLAGS += -DNRF_SD_BLE_API_VERSION=5 
   CFLAGS += -DNRF52832_XXAA
   CFLAGS += -DNRF52_PAN_74
   CFLAGS += -DNRF52
   CFLAGS += -DDEBUG
   CFLAGS += -DS132
   CFLAGS += -DCONFIG_NFCT_PINS_AS_GPIOS
endif

ifeq (1, $(SLEEP_MODE))
   CFLAGS += -DSLEEP_MODE
endif
ifeq (1, $(ACCESS_NET_TEST))
   CFLAGS += -DACCESS_NET_TEST
endif
ifeq (1, $(BLE_SUPPORT))
   CFLAGS += -DBLE_SUPPORT
endif
ifeq (1, $(BSP_MODE))
   CFLAGS += -DBSP_MODE
endif


ifeq (1, $(DFU_SUPPORT))
  CFLAGS += -DDFU_SUPPORT
  CFLAGS += -DBL_SETTINGS_ACCESS_ONLY
  CFLAGS += -DNRF_DFU_SVCI_ENABLED
  CFLAGS += -DNRF_DFU_TRANSPORT_BLE=1
endif

CFLAGS += -DSOFTDEVICE_PRESENT
CFLAGS += -DSWI_DISABLE0
CFLAGS += -mcpu=cortex-m4
CFLAGS += -mthumb -mabi=aapcs
CFLAGS += -w
CFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# keep every function in a separate section, this allows linker to discard unused ones
CFLAGS += -ffunction-sections -fdata-sections -fno-strict-aliasing
CFLAGS += -fno-builtin -fshort-enums

# C++ flags common to all targets
CXXFLAGS += $(OPT)

# Assembler flags common to all targets
ASMFLAGS += -g3
ASMFLAGS += -mcpu=cortex-m4
ASMFLAGS += -mthumb -mabi=aapcs
ASMFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
ASMFLAGS += -DCONFIG_GPIO_AS_PINRESET
ASMFLAGS += -DFLOAT_ABI_HARD
ASMFLAGS += -DSOFTDEVICE_PRESENT

ifeq (1, $(SLEEP_MODE))
   ASMFLAGS += -DSLEEP_MODE
endif


ifeq (2, $(word 1, $(P)))
  ASMFLAGS += -DBOARD_PCA10056
  ASMFLAGS += -DNRF52840_XXAA
  ASMFLAGS += -DNRF_SD_BLE_API_VERSION=6
  ASMFLAGS += -DS140
  ASMFLAGS += -DSWI_DISABLE0
else ifeq (1, $(word 1, $(P)))
  ASMFLAGS += -DBOARD_PCA10040
  ASMFLAGS += -DBSP_DEFINES_ONLY
  ASMFLAGS += -DNRF52
  ASMFLAGS += -DNRF52832_XXAA
  ASMFLAGS += -DNRF52_PAN_74
  ASMFLAGS += -DS132
endif

# Linker flags
LDFLAGS += $(OPT)
LDFLAGS += -mthumb -mabi=aapcs -L$(SDK_ROOT)/modules/nrfx/mdk -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
LDFLAGS += -u _printf_float
# let linker dump unused sections
LDFLAGS += -Wl,--gc-sections
# use newlib in nano version
LDFLAGS += --specs=nano.specs

nrf52_xxaa: CFLAGS += -D__HEAP_SIZE=8192
nrf52_xxaa: CFLAGS += -D__STACK_SIZE=8192
nrf52_xxaa: ASMFLAGS += -D__HEAP_SIZE=8192
nrf52_xxaa: ASMFLAGS += -D__STACK_SIZE=8192

# Add standard libraries at the very end of the linker input, after all objects
# that may need symbols provided by these libraries.
LIB_FILES += -lc -lnosys -lm


.PHONY: default help

# Default target - first one defined
default: nrf52_xxaa

# Print all targets that can be built
help:
	@echo	-e	\
"  ************************************************************************\n \
 *        \033[33;1m*****   *   *   *\033[0m                                             *\n  \
*        \033[33;1m*   *   *   *   *\033[0m                                             *\n  \
*        \033[33;1m*****   *   *   * \033[0m                                            *\n  \
*       \033[33;1m * *     *   *   *   Rakwirelss Unified Interface\033[0m              *\n  \
*        \033[33;1m*  *    *   *   *           Expanding Customization !!\033[0m        *\n  \
*        \033[33;1m*   *   *****   *                           ---From 2018\033[0m      *\n  \
************************************************************************\n  \
*  \033[32m1. Overview   \033[0m                                                      *\n  \
*  RUI is an open platform based on nordic low power chip, including   *\n  \
*  source code and compiler with gcc, designed by Rakwirelss. Besides, *\n  \
*  platform not only provides corresponding code suit for Rakwireless  *\n  \
*  hardware board, but also supports user-defined board, which is the  *\n  \
*  most attractive feature. A sensor drivers libraries is supplied and *\n  \
*  user just chooses the sensor they need and change the hardware pin  *\n  \
*  parameter in header file. Now RUI just includes nRF52832, more chip *\n  \
*  will be added gradually. RUI support gcc compile in windows,linux,  *\n  \
*  OS X, based SDK 15.0.0. So it is important to install toolchain and *\n  \
*  more details in README.                                             *\n  \
*                                                                      *\n  \
*  \033[32m2. How to use\033[0m                                                       *\n  \
*  Download SDK, put RUI in the root directory of sdk, then enter to   *\n  \
*   ../RUI/build/ and choose chip and sensor supplied below            *\n  \
*                                                                      *\n  \
*  \033[36mComputing\033[0m      * \033[35mConnectivity\033[0m    * \033[33mSensor\033[0m                           *\n  \
*                 *                 *                                  *\n  \
*  \033[36m1. nRF52832\033[0m    * \033[35m1. bc95-g\033[0m       * \033[33m1. bme280   2. L_70_R\033[0m            *\n  \
*  \033[36m2. nRF52840\033[0m    * \033[35m2. bg96\033[0m         * \033[33m3. lis2mdl  4. lis3dh\033[0m            *\n  \
*                 * \033[35m3. m35\033[0m          * \033[33m5. opt3001\033[0m  \033[33m6. sht31\033[0m             *\n  \
*                 * \033[35m4. sx1276(81x)\033[0m  * \033[33m7. ublox-max7  8. shtc3\033[0m          * \n  \
*                 * \033[35m5. sx1276(4600)\033[0m * \033[33m9. lps22hb\033[0m                       * \n  \
*                                                                      *\n  \
*  \033[32m3. Compile command  \033[0m                                                *\n  \
*                                                                      *\n  \
*  -- \033[31mmake clean\033[0m  -- clean all targets                                 *\n  \
*                                                                      *\n  \
*  -- \033[31mmake P=\"1 2 3 5\"\033[0m  -- mcu(1) commu(2) sensor(3 5 ...)             *\n  \
*  eg Rak_8212 compile cmd \033[31mmake P=\"1 2 1 3 4 5\"\033[0m                        *\n  \
*  choose the corresponding sensor and remember to change pin number   *\n  \
*  in RUI/Source/config/XXXX_board/pin_define.h                        *\n  \
*                                                                      *\n  \
*  -- \033[31mmake help\033[0m -- show RUI description                                *\n  \
*                                                                      *\n  \
*  \033[32m4. Custome\033[0m                                                          *\n  \
*  LoRaWAN and sleep mode for all products have been added in RUI.     *\n  \
*  More features will be added further, so users can change in the     *\n  \
*  \033[31mMakefile_Custome\033[0m according to need. More details in RUI\doc\        *\n  \
************************************************************************"   \

TEMPLATE_PATH := $(SDK_ROOT)/components/toolchain/gcc


include $(TEMPLATE_PATH)/Makefile.common

$(foreach target, $(TARGETS), $(call define_target, $(target)))

.PHONY: flash erase



