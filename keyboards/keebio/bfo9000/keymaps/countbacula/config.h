#pragma once

/* Use I2C or Serial, not both */

// #define USE_I2C
#define USE_SERIAL

/* Select hand configuration */

// #define MASTER_RIGHT
// #define EE_HANDS
#define MASTER_LEFT


/* RGB LED config */

#define RGBLIGHT_ENABLE
#define RGBLIGHT_ANIMATIONS

#undef RGBLED_NUM
#define RGBLED_NUM 14
