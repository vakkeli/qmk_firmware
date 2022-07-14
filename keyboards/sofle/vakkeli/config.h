#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0002
#define MANUFACTURER    Vakkeli
#define PRODUCT         Sofle

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D3
// The number of LEDs connected
#define DRIVER_LED_TOTAL 68

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, D4}
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
#define ENCODER_RESOLUTION 4
#define ENCODER_RESOLUTION_RIGHT 1
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }

#define ENCODER_DIRECTION_FLIP

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2

//
// #define SPLIT_WPM_ENABLE
// #define SPLIT_OLED_ENABLE
