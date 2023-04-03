/* Copyright 2021 Borna Vincek
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

#include QMK_KEYBOARD_H

//#include "quantum/keymap_extras/keymap_croatian.h"

#define KC_MEN KC_MEDIA_PREV_TRACK
#define KC_MES KC_MEDIA_PLAY_PAUSE
#define KC_MEP KC_MEDIA_NEXT_TRACK

// enum layer_names {
//     _BASE,
//     _FN
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,          KC_BSPC,  KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,         KC_BSLS,  KC_DEL,  KC_END,  KC_PGDN,
        KC_LCAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                           KC_RSFT,            KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_RGUI, KC_RCTL,  KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_tkl_ansi(
        RESET,      KC_MUTE, KC_VOLU, KC_VOLD, KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MEN,  KC_MES,      KC_MEP,                                    KC_PSCR, NK_ON,   NK_OFF,
        KC_NUMLOCK, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_KP_MINUS,  KC_KP_PLUS,         KC_BSPC,               KC_F13,  KC_F14, KC_F15,
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_KP_1, KC_KP_2,      KC_KP_3,        KC_NONUS_BSLASH,           KC_F16,  KC_F17, EEPROM_RESET,
        KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_KP_4, KC_KP_5, KC_KP_6,      KC_KP_ENTER,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_KP_7, KC_KP_8, KC_KP_9, KC_RSFT,                                                          KC_BRIGHTNESS_UP,
        KC_LCTL,    AG_NORM, KC_LALT,                            KC_SPC,                             KC_RALT, AG_SWAP,      KC_RGUI, KC_RCTL,                          KC_LEFT, KC_BRIGHTNESS_DOWN, KC_RGHT
    ),
};


/*  referecne
 Layer 0: Default Layer
     * ,-------------------------------------------------------------------------------------------------.
     * |Esc|   | F1| F2| F3| F4| | F5| F6| F7| F8| | F9|F10|F11|F12|    |PSc|ScL| Ps|                    |
     * |                                                                                                 |
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    BSp|    |Ins|Hom|PgU|    |Num|  /|  *|  -|
     * |-----------------------------------------------------------|    |-----------|    |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|    |Del|End|PgD|    |  7|  8|  9|   |
     * |-----------------------------------------------------------|                     |-----------|   |
     * |CapsLk|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|Ent |                     |  4|  5|  6|  +|
     * |-----------------------------------------------------------|                     |---------------|
     * |Shift|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift    |        | Up|        |  1|  2|  3|   |
     * |-----------------------------------------------------------|        |---|        |-----------|   |
     * |Ctrl |   |Alt  |           Space          |Alt Gr|   |Ctrl |    | Lt| Dn| Rt|    |      0|  ,|Ent|
     * `-------------------------------------------------------------------------------------------------'
     
    [_BL] = LAYOUT_all(
      KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,                                 KC_P4,   KC_P5,   KC_P6,
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,            KC_UP,              KC_P1,   KC_P2,   KC_P3,   KC_PENT,
      KC_LCTL,          KC_LALT,                            KC_SPC,                                      KC_RALT,          KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT,   KC_P0,            KC_PDOT),



*/



