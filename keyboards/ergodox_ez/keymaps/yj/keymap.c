#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
};

// Reversed ergodox layer
#define LAYOUT_xodogre(                         \
  k00,k01,k02,k03,k04,k05,k06,                  \
  k10,k11,k12,k13,k14,k15,k16,                  \
  k20,k21,k22,k23,k24,k25,                      \
  k30,k31,k32,k33,k34,k35,k36,                  \
  k40,k41,k42,k43,k44,                          \
                      k55,k56,                  \
                          k66,                  \
                  k74,k75,k76,                  \
  k07,k08,k09,k0A,k0B,k0C,k0D,                  \
  k17,k18,k19,k1A,k1B,k1C,k1D,                  \
      k28,k29,k2A,k2B,k2C,k2D,                  \
  k37,k38,k39,k3A,k3B,k3C,k3D,                  \
          k49,k4A,k4B,k4C,k4D,                  \
  k57,k58,                                      \
  k67,                                          \
  k77,k78,k79 )                                 \
  LAYOUT_ergodox                                \
 (                                              \
  k0D,k0C,k0B,k0A,k09,k08,k07,                  \
  k1D,k1C,k1B,k1A,k19,k18,k17,                  \
  k2D,k2C,k2B,k2A,k29,k28,                      \
  k3D,k3C,k3B,k3A,k39,k38,k37,                  \
  k4D,k4C,k4B,k4A,k49,                          \
                      k58,k57,                  \
                          k67,                  \
                  k79,k78,k77,                  \
  k06,k05,k04,k03,k02,k01,k00,                  \
  k16,k15,k14,k13,k12,k11,k10,                  \
      k25,k24,k23,k22,k21,k20,                  \
  k36,k35,k34,k33,k32,k31,k30,                  \
          k44,k43,k42,k41,k40,                  \
  k56,k55,                                      \
  k66,                                          \
  k76,k75,k74 )

  
                 
                  

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_xodogre
(
 // Left hand
 KC_ESCAPE,       KC_1,       KC_2,       KC_3,      KC_4,     KC_5,     TG(1),
 KC_GRAVE,        KC_Q,       KC_W,       KC_E,      KC_R,     KC_T,     MO(1),
 LCTL_T(KC_CAPS), KC_A,       KC_S,       KC_D,      KC_F,     KC_G,     
 KC_LSHIFT,       KC_Z,       KC_X,       KC_C,      KC_V,     KC_B,     KC_LBRACKET,  
 KC_LGUI,         KC_F1,      KC_F2,      KC_F3,     KC_LALT,
 // Left thumb
                                                               KC_HOME,  KC_END,
                                                                         KC_PGUP,
                                                     KC_TAB,   KC_ENTER, KC_PGDOWN,
 

 // Right hand
 TG(1),           KC_6,       KC_7,              KC_8,             KC_9,         KC_0,       KC_MINUS,
 MO(1),           KC_Y,       KC_U,              KC_I,             KC_O,         KC_P,       KC_EQUAL,
                  KC_H,       KC_J,              KC_K,             KC_L,         KC_SCOLON,  RCTL_T(KC_QUOTE),
 KC_RBRACKET,     KC_N,       KC_M,              KC_COMMA,         KC_DOT,       KC_SLASH,   RSFT_T(KC_BSLASH),
                              RALT_T(KC_LEFT),   KC_UP,            KC_DOWN,      KC_RIGHT,   KC_RGUI,

 // Right thumb
 KC_INSERT,       KC_DELETE,    
 RSFT(RALT(KC_TAB)),
 RALT(KC_TAB),    KC_BSPACE,  KC_SPACE
 ),

  [1] = LAYOUT_xodogre
(
 // Left
 KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,
 KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                              KC_TRNS, KC_TRNS,
                                                       KC_TRNS,
                                     KC_TRNS, KC_TRNS, KC_TRNS,

 // Right
 KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_TRNS,
 KC_TRNS, KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,   KC_TRNS,
          KC_TRNS, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
