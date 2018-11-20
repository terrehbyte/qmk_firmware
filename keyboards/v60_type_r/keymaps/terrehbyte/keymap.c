/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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

/* This is the default ANSI layout provided by the KBP V60 Type R
* as depicted in their manual and on the stock keycaps.
*/
#include QMK_KEYBOARD_H

#define KC_LSUP KC_LALT
#define KC_RSUP KC_RALT
#define KC_AL_L KC_LGUI
#define KC_AL_R KC_RGUI

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap 0: Default Layer (Qwerty)
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Fn0    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space              |Fn0 |Gui |App|Ctrl|
   * `-----------------------------------------------------------'
   */
  [0] = LAYOUT_60_ansi(
         KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
         MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  \
         KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,   \
         KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,                                      MO(2),   KC_RGUI, KC_APP,  KC_RCTL),

  /* Keymap 1: Arrow Layer (replaces bottom right)
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |  |   |      |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |    |    |   |   |   |   |   Up   |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |Left|Down|Rigt|
   * `-----------------------------------------------------------'
   */
  [1] = LAYOUT_60_ansi(
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,          \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_UP,  \
        KC_TRNS,     KC_TRNS,  KC_TRNS,            KC_TRNS,                                                           KC_TRNS,  KC_LEFT, KC_DOWN, KC_RIGHT),

  /* Keymap 2: FN Layer
   * Backlight keys are swapped as firmware is backwards
   * ,-----------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
   * |-----------------------------------------------------------|
   * |Caps |   |Up |RGB|HUD|SAI|VAI|RFW|Prt|Scl|Pau|  |   | Ins  |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|HUD|SAD|VAD|   |Hme|PgU|   |   | Tog F1 |
   * |-----------------------------------------------------------|
   * |        |BLD|BLT|BLI|   |VolD|VolU|Mut|End|PgD|Men|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  [2] = LAYOUT_60_ansi(
         KC_GRV,      KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL, \
         KC_CAPS,     KC_TRNS,  KC_UP,    RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_VAI,   RGB_MOD, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,    KC_TRNS,          KC_INS, \
         KC_TRNS,     KC_LEFT,  KC_DOWN,  KC_RIGHT, RGB_HUD,  RGB_SAD,  RGB_VAD,   KC_TRNS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS,          TG(1),          \
         KC_TRNS,     BL_INC,   BL_STEP,  BL_DEC,  KC_TRNS,  KC_VOLD,   KC_VOLU, KC_MUTE, KC_END,  KC_PGDN,  KC_APP,           KC_TRNS,  \
         KC_TRNS,     KC_TRNS,  KC_TRNS,            KC_TRNS,                                                           KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),


  /* Keymap X: Blank Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |  |   |      |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |    |    |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  /*
  [X] = LAYOUT_60_ansi(
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,          \
        KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,  \
        KC_TRNS,     KC_TRNS,  KC_TRNS,            KC_TRNS,                                                           KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),
  */


};

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
      // output low
      DDRE  |=  (1<<PE6);
      PORTE &= ~(1<<PE6);
  }
  else {
      // Hi-Z
      DDRE  &= ~(1<<PE6);
      PORTE &= ~(1<<PE6);
  }
}
