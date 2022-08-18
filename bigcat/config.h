// Copyright 2022 nina mao (@tifosi-the-tinker)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*USB Device descriptor parameter */
#define VENDOR_ID     0X5449
#define PRODUCT_ID    0X0000
#define DEVICE_VER    0X0001
#define MANUFACTURER  tifosi
#define PRODUCT       BigCat

/*key matrix size*/
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

#define MATRIX_COL_PINS {A2, A1, A0, F6, A7, A6, A5, F4, E6, B6, B7, E1, C0, C1, C2, C3, C4, C6, C7}
#define MATRIX_ROW_PINS {E7, D5, D6, E0, B5, C5}
#define UNUSED_PINS {E3, E4, E5, F0, F1, F2, F3, F5, F7, A3, A4,  B0, B1, B2, B3, B4, D0, D4, D7}
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE  5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_lSCR instead in key map */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define LED_CAPS_LOCK_PIN D1
#define LED_NUM_LOCK_PIN D2
#define LED_SCROLL_LOCK_PIN D3

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
