/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#define CONFIG_EXAMPLES_DIR "Creality/CR-10 Mini/BigTreeTech SKR Mini E3 2.0"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
// #define STATUS_LOGO_Y            5
#define STATUS_SCREEN_X 88
#define STATUS_LOGO_WIDTH       40

const unsigned char status_logo_bmp[] PROGMEM = {
   B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00101100,B00000000,
  B00000000,B00000000,B00001001,B00000111,B00000000,
  B00000000,B00000000,B00010100,B00001111,B00000000,
  B00000000,B00000000,B00010001,B10111111,B10000000,
  B00000000,B00000000,B00010010,B00001111,B11000000,
  B00000000,B00000000,B00011100,B00000111,B11000000,
  B00000000,B00000000,B00010000,B00010000,B11000000,
  B00000000,B00000000,B00010000,B00001001,B11000000,
  B00000110,B00000000,B00000100,B00000011,B11000000,
  B00000000,B00000000,B00100001,B00010011,B11000000,
  B00010000,B00000000,B00100010,B00000011,B11000000,
  B00000000,B00000000,B00000010,B00000011,B10000000,
  B00010000,B00000000,B00100000,B00000011,B10000000,
  B00011010,B00000000,B00111000,B01100000,B10000000,
  B00001101,B00000000,B00100000,B00100000,B10000000,
  B10000010,B10000000,B00000011,B00000011,B00000000,
  B01110010,B11000000,B00010000,B00000100,B00000000,
  B10000110,B11111100,B00011000,B00011100,B00000000,
  B00000010,B11111111,B11111100,B00011110,B00000000,
  B01111011,B01111111,B11111011,B10111111,B10000000,
  B00000111,B01111111,B11111001,B11100111,B11000000,
  B01100111,B11111111,B11111000,B00001111,B11100000,
  B00111111,B11111111,B11111000,B00111111,B11110000,
  B00000111,B11111111,B11111000,B11111111,B11111000,
  B00000000,B00000000,B11111000,B11111111,B11111100,
  B00000000,B00000000,B11110000,B11111111,B11111100,
  B00000000,B00000000,B11110000,B11111111,B11111110,
  B00000000,B00000000,B11110001,B11111111,B11111111
};
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'vaultboysmall.png'
 */


#define STATUS_SCREEN_X 88

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
