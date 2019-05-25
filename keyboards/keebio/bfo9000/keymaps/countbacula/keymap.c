#include QMK_KEYBOARD_H

#define _BASE 0

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Colemak
 * ,------.      ,----------------------------------+------+------.   ,------.      ,------------------------------------------------.
 * | Esc  |      |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |   |  F6  |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | Ins  |
 * |------|      |------+------+------+------+------+------+------|   |------|      |------+------+------+------+------+------+------|
 * | PgUp |      |   `  |   1  |   2  |   3  |   4  |   5  |      |   |   6  |      |   7  |   8  |   9  |   0  |   -  |   =  |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * | PgDn | RGBM | Tab  |   A  |   R  |   S  |   T  |   D  | Del  |   | Bksp |   J  |   L  |   U  |   Y  |   ;  |   [  |   ]  |  #   |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * | RGBP |RGBRM |Shift |   Z  |   X  |   C  |   V  |   B  |Enter |   |Enter |   H  |   N  |   E  |   I  |   O  |  '   |Shift |  \   |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |RGBHU |RGBSU |Shift |   Q  |   W  |   F  |   P  |   G  |Enter |   |Enter |   K  |   M  |   ,  |   .  |   /  | Home |  Up  | End  |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |RGBHD |RGBSD | Ctrl | Ctrl |      | Win  | Alt  |Space |Space |   |Space |Space | Alt  | Win  |RGBVU |RGBVD | Left | Down | Rght |
 * `--------------------------------------------------------------'   `--------------------------------------------------------------'  
 */ 
  
  
[_BASE] = LAYOUT( \
  KC_ESC,  XXXXXXX,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  XXXXXXX,     KC_F6,   XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  \
  KC_PGUP, XXXXXXX,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   XXXXXXX,     KC_6,    XXXXXXX, KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, \
  KC_PGDN, RGB_MOD,  KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,   KC_DEL,      KC_BSPC, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_NUHS, \
  RGB_TOG, RGB_RMOD, KC_LSFT, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,   KC_ENT,      KC_ENT,  KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, KC_RSFT, KC_BSLS, \
  RGB_HUI, RGB_SAI,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_ENT,      KC_ENT,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_HOME, KC_UP,   KC_END,  \
  RGB_HUD, RGB_SAD,  KC_LCTL, KC_LCTL, XXXXXXX, KC_LGUI, KC_LALT, KC_SPC, KC_SPC,      KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI, RGB_VAI, RGB_VAD, KC_LEFT, KC_DOWN, KC_RGHT  \
)
};
