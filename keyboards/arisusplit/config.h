/* Copyright 2021 Nouvo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6E67 //ng
#define PRODUCT_ID      0x6173 //as
#define DEVICE_VER      0x0001
#define MANUFACTURER    NouvoKey
#define PRODUCT         ArisuSplit

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { D3, D2, D1, D4, C6 , F5 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3, B1, F7 } //left
//#define MATRIX_ROW_PINS_RIGHT { D3, D2, D1, D4, C6 }
//#define MATRIX_COL_PINS_RIGHT { D7, E6, B4, B5, B6, B2, B3, B1, F7 } //right

#define DIODE_DIRECTION COL2ROW

#define SPLIT_HAND_PIN F4
//#define MASTER_LEFT
//#define MASTER_RIGHT

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN F6

#define RGBLED_NUM 12    // Number of LEDs

#define RGBLED_SPLIT { 6, 6 }
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
