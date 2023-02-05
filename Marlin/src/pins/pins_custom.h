/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define ALLOW_STM32DUINO

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "Black STM32F407ZE supports up to 2 hotends / E steppers."
#endif

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "Black STM32F407ZE"
#endif

#define DEFAULT_MACHINE_NAME "STM32F407ZET6"

//
// Limit Switches
//
#define X_MIN_PIN                           VP00
#define Y_MIN_PIN                           VP01
#define Z_MIN_PIN                           VP02

//
// Steppers
//
#define X_STEP_PIN                          VP03
#define X_DIR_PIN                           VP04
#define X_ENABLE_PIN                        VP05

#define Y_STEP_PIN                          VP06
#define Y_DIR_PIN                           VP07
#define Y_ENABLE_PIN                        VP08

#define Z_STEP_PIN                          VP09
#define Z_DIR_PIN                           VP10
#define Z_ENABLE_PIN                        VP11

#define E0_STEP_PIN                         VP12
#define E0_DIR_PIN                          VP13
#define E0_ENABLE_PIN                       VP14

#define E1_STEP_PIN                         VP15
#define E1_DIR_PIN                          VP16
#define E1_ENABLE_PIN                       VP17

//
// Temperature Sensors
//
#define TEMP_0_PIN                          VADC+0x900   // T0
#define TEMP_1_PIN                          VADC+0x980   // T1
#define TEMP_BED_PIN                        VADC+0xc80   // TB
#define TEMP_CHAMBER_PIN                    VADC+0xa00   // TC

//
// Heaters / Fans
//
#define HEATER_0_PIN                        VP18   // Heater0
#define HEATER_1_PIN                        VP19   // Heater1
#define HEATER_BED_PIN                      VP20   // Hotbed

#define FAN_PIN                             VP21   // Fan0

//
// Misc. Functions
//
//#define LED_PIN                             PF9
#define LED_PIN                             PF10


#define BTN_ENC                             -1
#define BTN_EN1                             -1
#define BTN_EN2                             -1


#define TFT_CS_PIN                          PG12
#define TFT_RS_PIN                          PF12
#define TFT_BACKLIGHT_PIN                   PB15

#define TOUCH_INT_PIN                       PB1
#define TOUCH_MISO_PIN                      PB2
#define TOUCH_MOSI_PIN                      PF11
#define TOUCH_SCK_PIN                       PB0
#define TOUCH_CS_PIN                        PC13

#define TFT_BUFFER_SIZE                     1440  // 480 * 30


//
// Onboard SD support
//
#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION              ONBOARD
#endif

#if SD_CONNECTION_IS(ONBOARD)
  #define SDIO_SUPPORT                            // Use SDIO for onboard SD
  #if DISABLED(SDIO_SUPPORT)
    #define SOFTWARE_SPI                          // Use soft SPI for onboard SD
    #define SDSS                            PC11
    #define SD_SCK_PIN                      PC12
    #define SD_MISO_PIN                     PC8
    #define SD_MOSI_PIN                     PD2
  #endif
#endif
