/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (c) 2017 Victor Perez
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

#include "../../inc/MarlinConfig.h"

//#ifdef USE_VIRTUAL_IO

#include "virtualio.h"
#include "../../module/motion.h"
#include "../../libs/numtostr.h"
#include "../../pins/pins.h"

bool Virtual_IO::read(int32_t pin) {
  switch(pin) {
    case X_MIN_PIN:  return axis_should_home(X_AXIS) || (current_position.x == 0);
    case Y_MIN_PIN:  return axis_should_home(Y_AXIS) || (current_position.y == 0);
    case Z_MIN_PIN:  return axis_should_home(Z_AXIS) || (current_position.z == 0);
  }
  return false;
}

uint32_t Virtual_IO::analogRead(int32_t pin) {
  return (pin >= VADC) ? (pin & 0x0fff) : 0x0fff;
}
//#endif // USE_VIRTUAL_IO
