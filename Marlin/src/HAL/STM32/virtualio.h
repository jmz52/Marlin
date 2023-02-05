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
#pragma once

#include "stdint.h"

#define VIRTUAL_PIN           0x4000
#define VP                    VIRTUAL_PIN
#define VADC                  0x6000
#define IS_VIRTUAL_PIN(IO)    (IO >= VIRTUAL_PIN)

#define VIRTUAL_WRITE         Virtual_IO::write
#define VIRTUAL_READ          Virtual_IO::read
#define VIRTUAL_TOGGLE        Virtual_IO::toggle
#define VIRTUAL_ADC           Virtual_IO::analogRead

class Virtual_IO {
  private:

  public:
    static uint32_t analogRead(int32_t pin);
    static bool read(int32_t pin);
    static void write(int32_t pin, bool state) {}
    static void toggle(int32_t pin) {}

};


#define VP00        (VIRTUAL_PIN |  0)
#define VP01        (VIRTUAL_PIN |  1)
#define VP02        (VIRTUAL_PIN |  2)
#define VP03        (VIRTUAL_PIN |  3)
#define VP04        (VIRTUAL_PIN |  4)
#define VP05        (VIRTUAL_PIN |  5)
#define VP06        (VIRTUAL_PIN |  6)
#define VP07        (VIRTUAL_PIN |  7)
#define VP08        (VIRTUAL_PIN |  8)
#define VP09        (VIRTUAL_PIN |  9)
#define VP10        (VIRTUAL_PIN | 10)
#define VP11        (VIRTUAL_PIN | 11)
#define VP12        (VIRTUAL_PIN | 12)
#define VP13        (VIRTUAL_PIN | 13)
#define VP14        (VIRTUAL_PIN | 14)
#define VP15        (VIRTUAL_PIN | 15)
#define VP16        (VIRTUAL_PIN | 16)
#define VP17        (VIRTUAL_PIN | 17)
#define VP18        (VIRTUAL_PIN | 18)
#define VP19        (VIRTUAL_PIN | 19)
#define VP20        (VIRTUAL_PIN | 20)
#define VP21        (VIRTUAL_PIN | 21)
#define VP22        (VIRTUAL_PIN | 22)
#define VP23        (VIRTUAL_PIN | 23)
#define VP24        (VIRTUAL_PIN | 24)
#define VP25        (VIRTUAL_PIN | 25)
#define VP26        (VIRTUAL_PIN | 26)
#define VP27        (VIRTUAL_PIN | 27)
#define VP28        (VIRTUAL_PIN | 28)
#define VP29        (VIRTUAL_PIN | 29)
#define VP30        (VIRTUAL_PIN | 30)
#define VP31        (VIRTUAL_PIN | 31)
#define VP32        (VIRTUAL_PIN | 32)
#define VP33        (VIRTUAL_PIN | 33)
#define VP34        (VIRTUAL_PIN | 34)
#define VP35        (VIRTUAL_PIN | 35)
#define VP36        (VIRTUAL_PIN | 36)
#define VP37        (VIRTUAL_PIN | 37)
#define VP38        (VIRTUAL_PIN | 38)
#define VP39        (VIRTUAL_PIN | 39)
