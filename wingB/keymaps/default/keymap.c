#include QMK_KEYBOARD_H
#include "wingB.h"


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_GRV ,    KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9   , KC_0    ,KC_EQL,
     KC_TAB ,    KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O   , KC_P    ,KC_MINS,
     MO(_LOWER), KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L   , KC_SCLN ,KC_QUOT,
     KC_LSFT ,   KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_B  , KC_N  , KC_M  , KC_COMM, KC_DOT  ,KC_SLSH,
     KC_ESC ,    KC_LCTL , KC_CAPS , KC_LOPT, KC_LCMD,KC_SPC,                  KC_SPC , KC_RCMD , KC_LEFT ,KC_DOWN ,KC_UP ,KC_RGHT ,
                                              KC_ENT, KC_BSPC,                 KC_BSPC, KC_ENT
  ),
  [_LOWER] = LAYOUT(
     KC_F1 , KC_F2 ,  KC_F3  , KC_F4 , KC_F5 , KC_F6 ,                      KC_F7,   KC_F8 , KC_F9 , KC_F10 ,KC_F11 ,KC_F12 ,
     KC_TILD,KC_ESC, KC_UP ,KC_RGHT,KC_LBRC ,KC_PERC,                        KC_RPRN, KC_RBRC  , KC_7  , KC_8   ,KC_9   ,KC_DEL,
     _______,KC_LEFT,KC_DOWN,KC_RGHT,KC_LCBR,KC_LPRN,                        KC_RPRN, KC_RCBR  , KC_4  , KC_5   ,KC_6   ,KC_PLUS,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_1  , KC_1  , KC_2   ,KC_3   ,KC_PIPE,
     _______,_______,_______,_______,_______,_______,                        KC_0,    KC_0  , KC_P2 , KC_P3  ,KC_EQL ,KC_UNDS,
                                    KC_PSCR, _______,                       _______, KC_P0

  )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
