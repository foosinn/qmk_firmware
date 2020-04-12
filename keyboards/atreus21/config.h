#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0x1209
#define PRODUCT_ID      0xA1E5
#define DEVICE_VER      0x0008
#define MANUFACTURER    foosinn
#define PRODUCT         Atreus21
#define DESCRIPTION     QMK keyboard firmware for Atreus21

#define MATRIX_ROWS 8
#define MATRIX_COLS 12
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// split
#define EE_HANDS
#define SOFT_SERIAL_PIN D3
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

// backlight
#define RGB_DI_PIN D2
#define RGBLED_NUM 12
#define RGBLED_SPLIT { 6, 6 }
#define RGBLIGHT_LIMIT_VAL 10
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

