#include QMK_KEYBOARD_H
#include "action_layer.h"


// TAP_DANCE
/*
enum {
	TD_STRG_ALT = 0,
	TD_ALT_STRG = 1,
};
qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_STRG_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_LALT),
	[TD_ALT_STRG] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LCTL)
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,   KC_E,     KC_R,     KC_T,    /**/          /**/          KC_Z,    KC_U,    KC_I,     KC_O,    KC_P,
    KC_A,    KC_S,   KC_D,     KC_F,     KC_G,    /**/          /**/          KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,
    KC_Y,    KC_X,   KC_C,     KC_V,     KC_B,    /**/          /**/          KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,
    KC_ESC,  TO(2),  KC_LGUI,  KC_LSFT,  KC_ENT,  KC_LCTL,      KC_LALT,      KC_SPC,  OSL(1),  KC_PSCR,  KC_F5,   KC_F12
  ),
  [1] = LAYOUT(
    KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_RPRN,  KC_LBRC,  /**/          /**/          KC_HASH,  KC_7,    KC_8,   KC_9,     KC_SLSH,
    KC_CIRC,  KC_EQL,   KC_MINS,  KC_QUOT,  KC_RBRC,  /**/          /**/          KC_AT,    KC_4,    KC_5,   KC_6,     KC_ASTR,
    KC_AMPR,  KC_PERC,  KC_GRV,   KC_BSLS,  KC_EXLM,  /**/          /**/          KC_DLR,   KC_1,    KC_2,   KC_3,     KC_MINS,
    KC_TAB,   M(100),   KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LCTL,      KC_LALT,      KC_DEL,   OSL(2),  KC_0,   KC_PDOT,  KC_PLUS
  ),
  [2] = LAYOUT(
    KC_NO,   KC_F7,   KC_F8,    KC_F9,    KC_F12,   /**/          /**/          KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,  KC_PGUP,
    KC_TAB,  KC_F4,   KC_F5,    KC_F6,    KC_F11,   /**/          /**/          KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_PGDN,
    KC_NO,   KC_F1,   KC_F2,    KC_F3,    KC_F10,   /**/          /**/          KC_INS,   KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,
    RESET,   TO(1),   KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LCTL,      KC_LALT,      KC_DEL,   M(100),   KC_NO,    KC_NO,    KC_NO
  )
};

// Macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
  case 100:
    layer_clear();
    return MACRO_NONE;
    break;
  default:
    return MACRO_NONE;
    break;
  };
};

//void oneshot_layer_changed_user(uint8_t layer) {
//  switch(layer) {
//  case 1:
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
//    rgblight_setrgb(0, 255, 0);
//    break;
//  case 2:
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
//    rgblight_setrgb(255, 0, 0);
//    break;
//  default:
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
//    rgblight_setrgb(0, 0, 255);
//    break;
//  };
//};

uint32_t layer_state_set_kb(uint32_t layer) {
  switch(layer) {
  case 2:
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(0, 255, 0);
    break;
  case 4:
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(255, 0, 0);
    break;
  default:
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(0, 0, 255);
    break;
  };
  dprintf("layer %d", layer);
  return layer;
};
