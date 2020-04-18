/* Copyright 2018 MechMerlin
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

// stock hhkb as referenced by https://i.imgur.com/QoBTDHf.png 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    LT(3, KC_SCLN), KC_QUOT, KC_ENT,
      OSM(MOD_LSFT), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  LT(2,KC_SLSH), KC_RSFT, TT(1),
      _______, KC_LALT, KC_LGUI,                   KC_SPACE,                 KC_RGUI, KC_RALT, _______
      ),

  // HHKB mode[hhkb Fn]
  [1] = LAYOUT(
      KC_GRV,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, KC_DEL,
      KC_CAPS, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, _______, RESET,
      _______, KC_VOLU, KC_VOLD, KC_MUTE, KC_MSTP, _______, KC_ASTR, KC_SLSH, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
      _______, _______, _______, _______,  _______, _______,  KC_PLUS, KC_UNDS, KC_END, KC_PGDN, KC_DOWN, _______, _______,
      _______, KC_LALT, KC_LGUI,                   _______,                 KC_RGUI, KC_RALT, _______
      ),

  // Vi mode[slash]
  [2] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3, KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
      KC_TAB,  KC_HOME, KC_PGDN, KC_UP, KC_PGUP, KC_END,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
      KC_LCTL, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX, KC_ENT,
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX, KC_RSFT, _______,
      _______, KC_LALT, KC_LGUI,                   KC_SPACE,                 KC_RGUI, KC_RALT, _______
      ),

  // Mouse mode(IJKL)[Semicolon]
  [3] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3, KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
      KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_WH_L, KC_WH_D, KC_MS_U, KC_WH_U,  KC_WH_R, XXXXXXX, XXXXXXX, KC_BSPC,
      KC_LCTL, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, KC_ENT,
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN3, KC_BTN2, KC_BTN1, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, _______,
      _______, KC_LALT, KC_LGUI,                   KC_BTN1,                 _______, _______, _______
      ),
};



void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

