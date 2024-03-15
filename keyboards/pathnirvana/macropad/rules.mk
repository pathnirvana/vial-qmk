# Build Options
#   change yes to no to disable
#
TAP_DANCE_ENABLE = yes
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# SLEEP_LED_ENABLE = no      # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# RGBLIGHT_DRIVER = WS2812
UNICODE_ENABLE = yes         # Unicode
VIAL_INSECURE = yes

WS2812_DRIVER = vendor
VIALRGB_ENABLE = yes