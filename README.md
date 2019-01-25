***************************************************************************************************************************************

Update log 2019.1.25
  
Add power control api for bg96 and accelerometer and the usage is shown in test_task.c. 
***************************************************************************************************************************************

Update log 2019.1.18
  
1. support nRF52840 and use s140 hex in ..\RUI\build\hex when compiling 
2. put RUI in each sdk, nRF52832 is corresponding to nRF5_SDK_15.0.0_a53641a and nRF52840 is corresponding to nRF5_SDK_15.2.0_9412b96
3. optimize compile GUI
  
***************************************************************************************************************************************

Update log 2019.1.2
  
  Solve the bug of ble connection with nRF connect. However, it should be cautious about the size of task and priority of user's task 
in FreeRTOS.
  
***************************************************************************************************************************************

# RUI_Platform_Firmware_GCC

**1.Overview**

RUI is an open platform based on nordic low power chip, including source code and compiler with gcc, designed by Rakwirelss. Besides, platform not only provides corresponding code suit for Rakwireless hardware board, but also supports user-defined board, which is the most attractive feature. A sensor drivers libraries is supplied and user just chooses the sensor they need and change the hardware pin parameter in header file. Now RUI just includes nRF52832, more chips will be added gradually. RUI support gcc compile in windows, linux, OS X, based on NRF52 SDK 15.0.0.

**2.Toolchain**

**2.1 Windows**

If compile in windows, it is necessary to install gcc compiler environment. We recommend to use Cygwin64 Terminal because of the shell command compatibility with linux(download website: https://cygwin.com/install.html). Besides, the toolchain which nordic recommends is GNU ARM Eclipse Windows Build Tools(download website: http://gnuarmeclipse.github.io/windows-build-tools/). After installation, remember to add the path to your toolchain to your OS PATH environment variable (path to install directory/GNU Tools ARM Embedded/4.9 2015q3/bin/). Adding the path makes it possible to run the toolchain executables from any directory using the terminal. To verify that path is set correctly, type the following in your terminal: arm-none-eabi-gcc --version. This will return the version of the C compiler if the executable is found in your path.

**2.2 Linux and OS X**

Linux and OS X already have the necessary shell commands, but GNU make may not be a part of the standard distro. Call "make -v" from the terminal to check whether it is installed or not. GNU make would need to be installed if it's not recognized as a command. GNU make is bundled with Xcode tools if working on OS X. On Linux it may be different ways to obtain GNU make depending on your distro, if not installed already. On Ubuntu you can get by entering this command: sudo apt-get install build-essential checkinstall.

**3.Compile**

**3.1 Download SDK** 

Download SDK 15.0.0 from http://developer.nordicsemi.com/, or our github: https://github.com/RAKWireless/nRF5SDK15.0.0. 

**3.2 Toolchain config**

To build an example in the SDK you first need to set the toolchain path in makefile.windows or makefile.posix depending on platform you are using. That is, the .posix should be edited if your are working on either Linux or OS X. These files are located in: SDK/components/toolchain/gcc/Makefile.posix(or Makefile.windows). Open the file in a text editor, and make sure that the GNU_INSTALL_ROOT variable is pointing to your Gnu tools for ARM embedded Processors install directory like below(modify the file just for your OS):

GNU_INSTALL_ROOT := $(PROGFILES)/GNU Tools ARM Embedded/4.9 2015q3/bin/  
GNU_VERSION := 4.9.3  
GNU_PREFIX := arm-none-eabi

**3.3 Compile**

After config, enter to SDK/RUI/build/ and execute: make help. The details of RUI will show and you can choose to compile.

**4.Burn**

First burn SDK hex(SDK/RUI/build/hex) to board with nEFgo Studio.

Second burn app hex(SDK/RUI/build/_build/nrf52_xxaa.hex) to board with nEFgo Studio.

**5.Debug**

Log will be show with Jlink RTT viewer.
