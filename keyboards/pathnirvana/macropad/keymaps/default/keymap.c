/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO, KC_2, KC_3, QK_BOOTLOADER, 
        KC_NO, KC_2, KC_3, QK_REBOOT, 
        KC_NO, KC_2, KC_3, KC_4, 
        KC_NO, KC_2, KC_3, KC_4
    )
};
