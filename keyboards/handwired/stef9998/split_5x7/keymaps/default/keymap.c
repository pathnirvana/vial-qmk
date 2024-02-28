/*
Copyright 2022 stef9998

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// You can also skip layer-names entirely and just use numbers.
enum custom_layer {
    _QWERTY,
    _FN,
    _SYM, //symbols & numbers
    _CFG, //config
};

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    FN,
    SYM,
    CONFIG,
};

// Shortcut to make keymap more readable
#define KC_FN MO(_FN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    QK_GESC ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_NO   ,                          KC_NO   ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_BSPC ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LBRC ,                          KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_BSLS ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    KC_CAPS ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_EQL  ,                          KC_MINS ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    SC_LSPO ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,SH_OS   ,                          KC_NO   ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,SC_RSPC ,
// ├────────┼────────┼────────┴─┬──────┴───┬────┴────────┼────────┤                         ├────────┼────────┴────┬───┴──────┬─┴────────┼────────┼────────┤
    KC_LCTL ,SC_LCPO ,KC_LGUI   ,KC_LALT   ,KC_SPC       ,MO(_SYM),                          MO(_SYM),KC_SPC       ,KC_RALT   ,MO(_FN)   ,SC_RCPC ,KC_RCTL
// └────────┴────────┴──────────┴──────────┴─────────────┴────────┘                         └────────┴─────────────┴──────────┴──────────┴────────┴────────┘
),

[_FN] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,KC_DEL ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,_______ ,                          _______ ,KC_PGUP ,KC_HOME ,KC_UP   ,KC_END  ,KC_PSCR ,XXXXXXX ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_HASH ,KC_DLR  ,KC_LBRC ,KC_RBRC ,KC_GRV  ,_______ ,                          _______ ,KC_PGDN ,KC_LEFT ,KC_DOWN ,KC_RIGHT,_______ ,KC_QUOT ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_PERC ,KC_CIRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ ,                          _______ ,KC_MSEL ,KC_MPLY ,KC_MPRV ,KC_MNXT ,KC_MPLY ,_______ ,
// ├────────┼────────┼────────┴─┬──────┴───┬────┴────────┼────────┤                         ├────────┼────────┴────┬───┴──────┬─┴────────┼────────┼────────┤
    _______ ,_______ ,_______   ,_______   ,_______      ,_______ ,                          _______ ,_______      ,_______   ,_______   ,_______ ,_______
// └────────┴────────┴──────────┴──────────┴─────────────┴────────┘                         └────────┴─────────────┴──────────┴──────────┴────────┴────────┘
),

[_SYM] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    KC_GRV  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,KC_F11  ,                          KC_F12  ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_DEL ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,_______ ,                          _______ ,KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LPRN ,KC_RPRN ,XXXXXXX ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,_______ ,                          _______ ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,KC_MSEL ,KC_MPLY ,XXXXXXX , KC_MPRV, KC_MNXT,_______ ,                          _______ ,KC_MSEL ,KC_MPLY , KC_MPRV, KC_MNXT,KC_MPLY ,_______ ,
// ├────────┼────────┼────────┴─┬──────┴───┬────┴────────┼────────┤                         ├────────┼────────┴────┬───┴──────┬─┴────────┼────────┼────────┤
    QK_BOOT ,_______ ,_______   ,_______   ,_______      ,TG(_CFG),                          TG(_CFG),_______      ,_______   ,_______   ,_______ ,QK_BOOT
// └────────┴────────┴──────────┴──────────┴─────────────┴────────┘                         └────────┴─────────────┴──────────┴──────────┴────────┴────────┘
),

[_CFG] = LAYOUT(
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    TG(_CFG),_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
// ├────────┼────────┼────────┴─┬──────┴───┬────┴────────┼────────┤                         ├────────┼────────┴────┬───┴──────┬─┴────────┼────────┼────────┤
    _______ ,_______ ,_______   ,_______   ,_______      ,_______ ,                          _______ ,_______      ,_______   ,_______   ,_______ ,_______
// └────────┴────────┴──────────┴──────────┴─────────────┴────────┘                         └────────┴─────────────┴──────────┴──────────┴────────┴────────┘
),
};
