#include QMK_KEYBOARD_H
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
    KC_Q,    KC_W,   KC_E,     KC_R,     KC_T,    /**/      /**/      KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,
    KC_A,    KC_S,   KC_D,     KC_F,     KC_G,    /**/      /**/      KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,
    KC_Z,    KC_X,   KC_C,     KC_V,     KC_B,    /**/      /**/      KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,
    KC_ESC,  TO(2),  KC_LGUI,  KC_LSFT,  KC_ENT,  KC_LCTL,  KC_LALT,  KC_SPC,  OSL(1),  KC_PSCR,  KC_LEAD,  KC_F12
  ),
	[1] = LAYOUT(
    KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_RPRN,  KC_LBRC,  /**/      /**/      KC_HASH,  KC_P7,   KC_P8,  KC_P9,    KC_PSLS,
    KC_TAB,   KC_EQL,   KC_MINS,  KC_QUOT,  KC_RBRC,  /**/      /**/      KC_AT,    KC_P4,   KC_P5,  KC_P6,    KC_PAST,
    KC_HOME,  KC_END,   KC_GRV,   KC_BSLS,  KC_F12,   /**/      /**/      KC_DLR,   KC_P1,   KC_P2,  KC_P3,    KC_PMNS,
    RESET,    M(100),   KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LCTL,  KC_LALT,  KC_DEL,   OSL(2),  KC_P0,  KC_PDOT,  KC_PPLS
  ),
	[2] = LAYOUT(
    KC_NO,   KC_F7,   KC_F8,    KC_F9,    KC_F12,   /**/      /**/      KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,  KC_PGUP,
    KC_TAB,  KC_F4,   KC_F5,    KC_F6,    KC_F11,   /**/      /**/      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_PGDN,
    KC_NO,   KC_F1,   KC_F2,    KC_F3,    KC_F10,   /**/      /**/      KC_NO,    KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,
    RESET,   TO(1),   KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LCTL,  KC_LALT,  KC_DEL,   M(100),   KC_NO,    KC_NO,    KC_NO
  )
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
    case 100:
      layer_clear();
      return MACRO_NONE;
      break;
    default:
      return MACRO_NONE;
      break;
  }
}
