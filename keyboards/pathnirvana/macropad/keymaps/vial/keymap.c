/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,          KC_7, KC_8, KC_9, 
        QK_BOOTLOADER,  KC_4, KC_5, KC_6, 
        QK_REBOOT,      KC_1, KC_2, KC_3, 
        RGB_TOG,        KC_0, KC_3, KC_4
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //[1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)  },
    //[2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)  },
    //[3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
};
#endif

void keyboard_post_init_user(void) {
    // Initialize RGB to static black
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_WHITE);
    //rgblight_mode_noeeprom(RGBLIGHT_MODE_SNAKE);
}