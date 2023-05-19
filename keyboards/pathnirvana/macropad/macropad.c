/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "macropad.h"

#ifdef RGB_MATRIX_ENABLE
  led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { NO_LED, 0, 1, 2 },
    { 3, 4, 5, 6 },
    { 7, 8, 9, 10 },
    { 11, 12, 13, 14 }
  }, {
    // LED Index to Physical Position
                  {  75,  0  }, { 150,  0  }, { 224,  0  }, 
    {   0,  21 }, {  75,  21 }, { 150,  21 }, { 224,  21 },
    {   0,  43 }, {  75,  43 }, { 150,  43 }, { 224,  43 },
    {   0,  64 }, {  75,  64 }, { 150,  64 }, { 224,  64 }
  }, {
    // LED Index to Flag - all are backlight
       4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4
  } };
#endif