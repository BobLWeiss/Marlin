/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Marlin.pde"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Configuration.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ConfigurationStore.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ConfigurationStore.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Configuration_adv.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\DOGMbitmaps.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\LiquidCrystalRus.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\LiquidCrystalRus.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Marlin.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\MarlinSerial.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\MarlinSerial.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Marlin_main.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Sd2Card.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Sd2Card.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Sd2PinMap.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdBaseFile.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdBaseFile.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdFatConfig.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdFatStructs.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdFatUtil.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdFile.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdFile.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdVolume.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\SdVolume.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Servo.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\Servo.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\cardreader.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\cardreader.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\dogm_font_data_marlin.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\dogm_lcd_implementation.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\fastio.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\language.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\motion_control.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\motion_control.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\pins.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\planner.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\planner.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\speed_lookuptable.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\stepper.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\stepper.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\temperature.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\temperature.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\thermistortables.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ultralcd.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ultralcd.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ultralcd_implementation_hitachi_HD44780.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\ultralcd_st7920_u8glib_rrd.h"
#include "E:\Dropbox\GitHub\Marlin\Marlin\watchdog.cpp"
#include "E:\Dropbox\GitHub\Marlin\Marlin\watchdog.h"
