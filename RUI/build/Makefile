PROJECT_NAME     := RUI
TARGETS          := nrf52832_xxaa
OUTPUT_DIRECTORY := _build
P := 0
SDK_ROOT := ../..

$(OUTPUT_DIRECTORY)/nrf52832_xxaa.out: \
  LINKER_SCRIPT  := rui_gcc_nrf52.ld

# Source files common to all targets
SRC_FILES += \
  $(SDK_ROOT)/RUI/build/RTE/Device/nRF52832_xxAA/system_nrf52.c \
  $(SDK_ROOT)/modules/nrfx/mdk/gcc_startup_nrf52.S \
  $(SDK_ROOT)/RUI/Source/service/sensor/sensor.c \
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
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uart.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_uarte.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_clock.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_twim.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_gpiote.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/nrfx_spim.c \
  $(SDK_ROOT)/modules/nrfx/drivers/src/prs/nrfx_prs.c \
  $(SDK_ROOT)/components/ble/peer_manager/pm_mutex.c \
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
  $(SDK_ROOT)/RUI/Source/main.c \
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_frontend.c \
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_rtt.c \
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_uart.c \
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_backend_serial.c \
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_str_formatter.c \
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
  $(SDK_ROOT)/components/libraries/experimental_memobj/nrf_memobj.c \
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
  $(SDK_ROOT)/components/libraries/experimental_log/src/nrf_log_default_backends.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_clock.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_power.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_spi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_swi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_twi.c \
  $(SDK_ROOT)/integration/nrfx/legacy/nrf_drv_uart.c \
  $(SDK_ROOT)/modules/nrfx/hal/nrf_nvmc.c \
  $(SDK_ROOT)/components/libraries/bsp/bsp_btn_ble.c \
  $(SDK_ROOT)/components/libraries/fds/fds.c \
  $(SDK_ROOT)/components/ble/ble_advertising/ble_advertising.c \
  $(SDK_ROOT)/components/ble/common/ble_conn_state.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_Syscalls_GCC.c \
  $(SDK_ROOT)/external/segger_rtt/SEGGER_RTT_printf.c \
  $(SDK_ROOT)/RUI/Source/app/test_task.c \
  $(SDK_ROOT)/RUI/Source/board/board_basic.c \
  $(SDK_ROOT)/RUI/Source/board/itracker_basic.c \
  $(SDK_ROOT)/components/libraries/uart/app_uart_fifo.c \
  $(SDK_ROOT)/RUI/Source/external/utilities.c \
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

ifeq (a, $(findstring a, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bc95-g.c
endif
ifeq (b, $(findstring b, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bg96.c
endif
ifeq (c, $(findstring c, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/m35.c
endif
ifeq (d, $(findstring d, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/bme280.c
endif
ifeq (e, $(findstring e, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/l70_gps.c
endif
ifeq (f, $(findstring f, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/lis2mdl.c
endif
ifeq (g, $(findstring g, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/lis3dh.c
endif
ifeq (h, $(findstring h, $(P)))
  SRC_FILES += $(SDK_ROOT)/RUI/Source/driver/opt3001.c
endif
# Include folders common to all targets
INC_FOLDERS += \
  $(SDK_ROOT)/components \
  $(SDK_ROOT)/components/libraries/experimental_memobj \
  $(SDK_ROOT)/components/libraries/experimental_section_vars \
  $(SDK_ROOT)/components/softdevice/s132/headers \
  $(SDK_ROOT)/components/softdevice/s132/headers/nRF52 \
  $(SDK_ROOT)/components/libraries/strerror \
  $(SDK_ROOT)/components/libraries/fstorage \
  $(SDK_ROOT)/components/libraries/experimental_memobj \
  $(SDK_ROOT)/components/softdevice/common \
  $(SDK_ROOT)/components/libraries/util/ \
  $(SDK_ROOT)/components/ble/ble_link_ctx_manager \
  $(SDK_ROOT)/components/libraries/atomic/ \
  $(SDK_ROOT)/components/libraries/atomic_flags \
  $(SDK_ROOT)/components/ble/nrf_ble_gatt \
  $(SDK_ROOT)/components/libraries/balloc \
  $(SDK_ROOT)/components/boards \
  $(SDK_ROOT)/components/ble/peer_manager \
  $(SDK_ROOT)/integration/nrfx/legacy \
  $(SDK_ROOT)/components/libraries/experimental_log \
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
  $(SDK_ROOT)/components/libraries/experimental_log \
  $(SDK_ROOT)/components/libraries/experimental_log/src \
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
  $(SDK_ROOT)/integration/nrfx/legacy \
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
ifeq (a, $(findstring a, $(P)))
  CFLAGS += -DBC95G_TEST
endif
ifeq (b, $(findstring b, $(P)))
  CFLAGS += -DBG96_TEST
endif
ifeq (c, $(findstring c, $(P)))
  CFLAGS += -DM35_TEST
endif
ifeq (d, $(findstring d, $(P)))
  CFLAGS += -DBEM280_TEST
endif
ifeq (e, $(findstring e, $(P)))
  CFLAGS += -DL70R_TEST
endif
ifeq (f, $(findstring f, $(P)))
  CFLAGS += -DLIS2MDL_TEST
endif
ifeq (g, $(findstring g, $(P)))
  CFLAGS += -DLIS3DH_TEST
endif
ifeq (h, $(findstring h, $(P)))
  CFLAGS += -DOPT3001_TEST
endif
CFLAGS += $(OPT)
CFLAGS += -DBOARD_PCA10040
CFLAGS += -DDENUG
CFLAGS += -DCONFIG_NFCT_PINS_AS_GPIOS
CFLAGS += -DSOFTDEVICE_PRESENT
CFLAGS += -DNRF52
CFLAGS += -DSWI_DISABLE0
CFLAGS += -DNRF_SD_BLE_API_VERSION=5 
CFLAGS += -DNRF52832_XXAA
CFLAGS += -DNRF52_PAN_74
CFLAGS += -mcpu=cortex-m4
CFLAGS += -mthumb -mabi=aapcs
CFLAGS += -Wall
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
ASMFLAGS += -DBOARD_PCA10040
ASMFLAGS += -DBSP_DEFINES_ONLY
ASMFLAGS += -DCONFIG_GPIO_AS_PINRESET
ASMFLAGS += -DFLOAT_ABI_HARD
ASMFLAGS += -DNRF52
ASMFLAGS += -DNRF52832_XXAA
ASMFLAGS += -DNRF52_PAN_74

# Linker flags
LDFLAGS += $(OPT)
LDFLAGS += -mthumb -mabi=aapcs -L$(SDK_ROOT)/modules/nrfx/mdk -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
# let linker dump unused sections
LDFLAGS += -Wl,--gc-sections
# use newlib in nano version
LDFLAGS += --specs=nano.specs

nrf52832_xxaa: CFLAGS += -D__HEAP_SIZE=8192
nrf52832_xxaa: CFLAGS += -D__STACK_SIZE=8192
nrf52832_xxaa: ASMFLAGS += -D__HEAP_SIZE=8192
nrf52832_xxaa: ASMFLAGS += -D__STACK_SIZE=8192

# Add standard libraries at the very end of the linker input, after all objects
# that may need symbols provided by these libraries.
LIB_FILES += -lc -lnosys -lm


.PHONY: default help

# Default target - first one defined
default: nrf52832_xxaa
#color "\033[41;37m TonyZhang \033[0m"
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
*  First download SDK, and put RUI in the root directory of sdk.       *\n  \
*  Second enter to ../RUI/build/ and choose chip and sensor like       *\n  \
*  make 1bdgh and it will compile.                                     *\n  \
*                                                                      *\n  \
*  Chip and sensor supplied below                                      *\n  \
* \033[36m please choose chip       \033[0m                                           *\n  \
*                                                                      *\n  \
*  \033[36m1. nRF52832   2. nRF52840  \033[0m                                         *\n  \
*                                                                      *\n  \
*  \033[35mplease choose sensor      \033[0m                                          *\n  \
*                                                                      *\n  \
*  \033[35ma. bc95-g    b. bg96    c. m35   \033[0m                                   *\n  \
*  \033[35md. bme280    e. L_70_R  f. lis2mdl   \033[0m                               *\n  \
*  \033[35mg. lis3dh    h. opt3001          \033[0m                                   *\n  \
*                                                                      *\n  \
*  \033[32m3. Compile command  \033[0m                                                *\n  \
*                                                                      *\n  \
*  3.1 \033[31mmake clean\033[0m  -- clean all targets                                *\n  \
*                                                                      *\n  \
*  3.2 \033[31mmake P=chip+sensor\033[0m like below                                   *\n  \
*  Rakwirelss board                                                    *\n  \
*  8212 -- \033[31mmake P=1bdfgh\033[0m              8212_M -- \033[31mmake P=1bg\033[0m             *\n  \
*  8211_G -- \033[31mmake P=1cdefgh\033[0m           8211_NB -- \033[31mmake P=1adefgh\033[0m        *\n  \
*  User designed board                                                 *\n  \
*  choose the corresponding sensor and remeber to change pin number in *\n  \
*  RUI\Source\include\board_basic.h                                       *\n  \
*                                                                      *\n  \
*  3.3 \033[31mmake help\033[0m -- show RUI description                               *\n  \
*                                                                      *\n  \
************************************************************************"   \

TEMPLATE_PATH := $(SDK_ROOT)/components/toolchain/gcc


include $(TEMPLATE_PATH)/Makefile.common

$(foreach target, $(TARGETS), $(call define_target, $(target)))

.PHONY: flash erase

# Flash the program
flash: $(OUTPUT_DIRECTORY)/nrf52832_xxaa.hex
	@echo Flashing: $<
	nrfjprog -f nrf52 --program $< --sectorerase
	nrfjprog -f nrf52 --reset

erase:
	nrfjprog -f nrf52 --eraseall

SDK_CONFIG_FILE := $(SDK_ROOT)/RUI/Source/sdk_config.h
CMSIS_CONFIG_TOOL := $(SDK_ROOT)/external_tools/cmsisconfig/CMSIS_Configuration_Wizard.jar
sdk_config:
	java -jar $(CMSIS_CONFIG_TOOL) $(SDK_CONFIG_FILE)
