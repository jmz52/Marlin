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

#include "../../inc/MarlinConfigPre.h"

#include "tft_color.h"

#if ENABLED(UI_THEME_BLACK)
  #undef COLOR_BACKGROUND
  #undef COLOR_SELECTION_BG
  #undef COLOR_WEBSITE_URL

  #undef COLOR_INACTIVE
  #undef COLOR_COLD
  #undef COLOR_HOTEND
  #undef COLOR_HEATED_BED
  #undef COLOR_CHAMBER
  #undef COLOR_COOLER
  #undef COLOR_FAN

  #undef COLOR_AXIS_HOMED
  #undef COLOR_AXIS_NOT_HOMED

  #undef COLOR_RATE_100
  #undef COLOR_RATE_ALTERED

  #undef COLOR_PRINT_TIME

  #undef COLOR_PROGRESS_FRAME
  #undef COLOR_PROGRESS_BAR
  #undef COLOR_PROGRESS_BG

  #undef COLOR_STATUS_MESSAGE

  #undef COLOR_CONTROL_ENABLED
  #undef COLOR_CONTROL_DISABLED
  #undef COLOR_CONTROL_CANCEL
  #undef COLOR_CONTROL_CONFIRM
  #undef COLOR_BUSY

  #undef COLOR_MENU_TEXT
  #undef COLOR_MENU_VALUE

  #undef COLOR_SLIDER
  #undef COLOR_SLIDER_INACTIVE

  #undef COLOR_UBL

  #undef COLOR_TOUCH_CALIBRATION

  #undef COLOR_KILL_SCREEN_BG
  #undef COLOR_KILL_SCREEN_TEXT

  #define COLOR_BACKGROUND        COLOR_BLACK
  #define COLOR_SELECTION_BG      0x9930  // #992380
  #define COLOR_WEBSITE_URL       0x03B7  // #0075BD

  #define COLOR_INACTIVE          COLOR_GREY
  #define COLOR_COLD              COLOR_WHITE
  #define COLOR_HOTEND            COLOR_SCARLET
  #define COLOR_HEATED_BED        COLOR_DARK_ORANGE
  #define COLOR_CHAMBER           COLOR_DARK_ORANGE
  #define COLOR_COOLER            COLOR_DARK_ORANGE
  #define COLOR_FAN               COLOR_WHITE

  #define COLOR_AXIS_HOMED        COLOR_WHITE
  #define COLOR_AXIS_NOT_HOMED    COLOR_YELLOW

  #define COLOR_RATE_100          COLOR_VIVID_GREEN
  #define COLOR_RATE_ALTERED      COLOR_YELLOW

  #define COLOR_PRINT_TIME        COLOR_AQUA

  #define COLOR_PROGRESS_FRAME    COLOR_WHITE
  #define COLOR_PROGRESS_BAR      COLOR_BLUE
  #define COLOR_PROGRESS_BG       COLOR_BLACK

  #define COLOR_STATUS_MESSAGE    COLOR_WHITE

  #define COLOR_CONTROL_ENABLED   COLOR_WHITE
  #define COLOR_CONTROL_DISABLED  COLOR_GREY
  #define COLOR_CONTROL_CANCEL    COLOR_SCARLET
  #define COLOR_CONTROL_CONFIRM   COLOR_VIVID_GREEN
  #define COLOR_BUSY              COLOR_SILVER

  #define COLOR_MENU_TEXT         COLOR_YELLOW
  #define COLOR_MENU_VALUE        COLOR_WHITE

  #define COLOR_SLIDER            COLOR_WHITE
  #define COLOR_SLIDER_INACTIVE   COLOR_GREY

  #define COLOR_UBL               COLOR_WHITE

  #define COLOR_TOUCH_CALIBRATION COLOR_WHITE

  #define COLOR_KILL_SCREEN_BG    COLOR_MAROON
  #define COLOR_KILL_SCREEN_TEXT  COLOR_WHITE

#endif