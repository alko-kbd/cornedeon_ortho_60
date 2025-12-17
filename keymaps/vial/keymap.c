#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------.    ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
     KC_GRAVE,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,KC_LEFT,KC_RIGHT, KC_LALT, TL_LOWR,  KC_SPC,        KC_SPC, TL_UPPR, KC_RGUI,   KC_UP,  KC_DOWN, KC_RCTL
  //`------------------------------------------------------'   `-----------------------------------------------------'
  ),
  [1] = LAYOUT(
  //,-----------------------------------------------------.    ,-----------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
       KC_TAB, KC_TILD, KC_LPRN, KC_RPRN, KC_PAST,KC_SLASH,      KC_HOME, XXXXXXX, KC_PGUP, XXXXXXX,  KC_INS,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
     KC_GRAVE, XXXXXXX, KC_LBRC, KC_RBRC, KC_PLUS,KC_MINUS,       KC_END,   KC_UP, KC_PGDN, XXXXXXX, KC_UNDS, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, KC_LCBR, KC_RCBR,   KC_LT,   KC_GT,      KC_LEFT, KC_DOWN,KC_RIGHT, XXXXXXX, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_HOME,  KC_END, KC_LALT, TL_LOWR,  KC_ENT,       KC_ENT, TL_UPPR, KC_RGUI, KC_PGUP, KC_PGDN, KC_RCTL
  //`-----------------------------------------------------'    `-----------------------------------------------------'
  ),
  [2] = LAYOUT(
  //,-----------------------------------------------------.    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9,       KC_F10,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PAST, KC_PSLS,  KC_KP_4, KC_KP_5, KC_KP_6,       KC_F7,   KC_F8,   KC_F9, XXXXXXX, KC_PSCR,  KC_BRK,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PPLS, KC_PMNS, KC_KP_1, KC_KP_2, KC_KP_3,        KC_F4,   KC_F5,   KC_F6, XXXXXXX,  KC_NUM, KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, KC_PEQL, KC_KP_1, KC_KP_0, KC_PDOT,        KC_F1,   KC_F2,   KC_F3, XXXXXXX,  KC_APP, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_HOME,  KC_END, KC_CALC, KC_TRNS, KC_PENT,       KC_ENT, KC_TRNS, KC_CAPS, KC_PGUP, KC_PGDN, KC_RCTL
  //`-----------------------------------------------------'    `-----------------------------------------------------'
  ),
  [3] = LAYOUT(
  //,-----------------------------------------------------.    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, KC_CALC, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS, XXXXXXX,      XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //`-----------------------------------------------------'    `-----------------------------------------------------'
  )
};

