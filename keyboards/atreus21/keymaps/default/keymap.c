#include QMK_KEYBOARD_H
#include "action_layer.h"


// layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,   KC_E,     KC_R,         KC_T,     /**/      /**/      KC_Z,    KC_U,         KC_I,     KC_O,    KC_P,
    KC_A,    KC_S,   KC_D,     LT(2, KC_F),  KC_G,     /**/      /**/      KC_H,    LT(2, KC_J),  KC_K,     KC_L,    KC_SCLN,
    KC_Y,    KC_X,   KC_C,     KC_V,         KC_B,     /**/      /**/      KC_N,    KC_M,         KC_COMM,  KC_DOT,  KC_SLSH,
    KC_ESC,  KC_NO,  KC_LGUI,  KC_LSFT,      KC_BSPC,  KC_LALT,  KC_LCTL,  KC_SPC,  OSL(1),       KC_TAB,   KC_DEL,  KC_ENT
  ),
  [1] = LAYOUT(
    KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_RPRN,  KC_LBRC,  /**/      /**/      KC_HASH,  KC_7,     KC_8,   KC_9,    KC_SLSH,
    KC_CIRC,  KC_EQL,   KC_MINS,  KC_QUOT,  KC_RBRC,  /**/      /**/      KC_AT,    KC_4,     KC_5,   KC_6,    KC_ASTR,
    KC_AMPR,  KC_PERC,  KC_GRV,   KC_BSLS,  KC_EXLM,  /**/      /**/      KC_DLR,   KC_1,     KC_2,   KC_3,    KC_MINS,
    KC_ESC,   KC_NO,    KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LALT,  KC_LCTL,  KC_DEL,   KC_TRNS,  KC_0,   KC_DOT,  KC_ENT
  ),
  [2] = LAYOUT(
    KC_NO,   KC_F7,    KC_F8,    KC_F9,    KC_F12,   /**/      /**/      KC_HOME,  KC_END,   KC_PGDN,  KC_PGUP,  KC_NO,
    KC_NO,   KC_F4,    KC_F5,    KC_F6,    KC_F11,   /**/      /**/      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_NO,
    KC_NO,   KC_F1,    KC_F2,    KC_F3,    KC_F10,   /**/      /**/      KC_INS,   KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,
    RESET,   KC_NO,    KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_LALT,  KC_LCTL,  KC_DEL,   KC_TRNS,  KC_TAB,   KC_DEL,   KC_ENT
 ),
  [3] = LAYOUT(
    KC_NO,  KC_NO,       KC_NO,       KC_NO,       KC_NO,  /**/    /**/    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_MS_BTN2,  KC_MS_BTN3,  KC_MS_BTN1,  KC_NO,  /**/    /**/    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,       KC_NO,       KC_NO,       KC_NO,  /**/    /**/    KC_NO,  RGB_TOG,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,       KC_NO,       KC_NO,       KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO
  )
};

// afterboot
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
