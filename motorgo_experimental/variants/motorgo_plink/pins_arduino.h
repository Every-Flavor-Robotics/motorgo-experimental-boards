#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x1001

#define DRIVER_VOLTAGE_LIMIT 15.0f
#define DRIVER_CURRENT_LIMIT 1.5f

// A flag to indicate a GPIO pin is not set
#define MOTORGO_GPIO_NOT_SET 0xFF

// Built-in LED available to user
static const uint8_t LED_BUILTIN = 42;
// backward compatibility
#define BUILTIN_LED LED_BUILTIN
#define LED_BUILTIN LED_BUILTIN

// Status LED
static const uint8_t LED_STATUS = 41;
#define STATUS_LED LED_STATUS

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// SPI
static const uint8_t MOSI = 35;
static const uint8_t MISO = 48;
static const uint8_t SCK = 47;
static const uint8_t SS = 21;

// Qwiic
static const uint8_t SDA = 1;
static const uint8_t SCL = 2;
static const uint8_t QWIIC_SDA = SDA;
static const uint8_t QWIIC_SCL = SCL;

// Hidden I2C bus, for IMU
static const uint8_t HIDDEN_SDA = 13;
static const uint8_t HIDDEN_SCL = 14;

// Encoder pins
static const uint8_t ENC_SDA = 6;
static const uint8_t ENC_SCL = 7;
// Encoder uses SSI, but we still need to define MOSI
// Pin 45 is not connected to anything, so we can use it
static const uint8_t ENC_MOSI = 45;

static const uint8_t CH1_ENC_CS = 4;
static const uint8_t M1_PH = 15;
static const uint8_t M1_EN = 16;

static const uint8_t CH2_ENC_CS = 5;
static const uint8_t M2_PH = 18;
static const uint8_t M2_EN = 17;

static const uint8_t CH3_ENC_CS = 10;
static const uint8_t M3_PH = 3;
static const uint8_t M3_EN = 8;

static const uint8_t CH4_ENC_CS = 9;
static const uint8_t M4_PH = 12;
static const uint8_t M4_EN = 11;

#endif /* Pins_Arduino_h */
