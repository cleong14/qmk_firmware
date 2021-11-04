/* Copyright 2021 JasonRen(biu)
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
#define VENDOR_ID       0xAA96
#define PRODUCT_ID      0xAAAB
#define DEVICE_VER      0x0001
#define MANUFACTURER    JasonRen biu
#define PRODUCT         boy40ble

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

//                        0    1    2    3   4   5   6   7   8   9   10  11  12  13
#define MATRIX_COL_PINS { A4,  B15, B14, B13,B12,C13, B9, B8, B5,B4,  B3, A15}
#define MATRIX_ROW_PINS { B10, A8, A5, C14}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL


// enable the nkro when using the VIA.
#define FORCE_NKRO

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define TAP_CODE_DELAY 15

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 4

// rgb switch
#define RGB_BLE_SW A6

// USB Power
// #define USB_PWR_READ

// ADC SETTING
#define SAMPLE_BATTERY

#define BATTERY_LEVEL_SW_PIN A2

// disable rgb when using ble
#define RGB_ONLY_ON_WHEN_USB

#define BIUNRF52WKPin A3
