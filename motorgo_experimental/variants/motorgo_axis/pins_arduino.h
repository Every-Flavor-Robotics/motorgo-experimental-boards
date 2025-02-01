#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

#define DRIVER_VOLTAGE_LIMIT 17.0f
#define DRIVER_CURRENT_LIMIT 20.0f

// A flag to indicate a GPIO pin is not set
#define MOTORGO_GPIO_NOT_SET 0xFF

// Built-in LED available to user
static const uint8_t LED_BUILTIN = 43;
// backward compatibility
#define BUILTIN_LED LED_BUILTIN
#define LED_BUILTIN LED_BUILTIN

// Status LED
static const uint8_t LED_STATUS = 44;
#define STATUS_LED LED_STATUS

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// SPI
static const uint8_t MOSI = 35;
static const uint8_t MISO = 48;
static const uint8_t SCK = 47;
static const uint8_t SS = 21;

// Qwiic/I2C
static const uint8_t SDA = 1;
static const uint8_t SCL = 2;
static const uint8_t QWIIC_SDA = SDA;
static const uint8_t QWIIC_SCL = SCL;

// Hidden I2C bus, for IMU
static const uint8_t HIDDEN_SDA = 13;
static const uint8_t HIDDEN_SCL = 14;

static const uint8_t ENC_SDA = 4;
static const uint8_t ENC_SCL = 5;
// Encoder uses SSI, but we still need to define MOSI
// Pin 45 is not connected to anything, so we can use it
static const uint8_t ENC_MOSI = 45;

// ch0 Motor and Encoder pins
static const uint8_t CH0_ENC_CS = 6;
static const uint8_t CH0_UH = 3;
static const uint8_t CH0_UL = 17;
static const uint8_t CH0_VH = 8;
static const uint8_t CH0_VL = 16;
static const uint8_t CH0_WH = 18;
static const uint8_t CH0_WL = 15;
static const uint8_t CH0_CURRENT_U = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH0_CURRENT_V = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH0_CURRENT_W = MOTORGO_GPIO_NOT_SET;

// ch1 Motor and Encoder pins
static const uint8_t CH1_ENC_CS = 7;
static const uint8_t CH1_UH = 41;
static const uint8_t CH1_UL = 11;
static const uint8_t CH1_VH = 42;
static const uint8_t CH1_VL = 10;
static const uint8_t CH1_WH = 12;
static const uint8_t CH1_WL = 9;
static const uint8_t CH1_CURRENT_U = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH1_CURRENT_V = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH1_CURRENT_W = MOTORGO_GPIO_NOT_SET;

static const uint8_t CURRENT_SENSE_AMP_GAIN = MOTORGO_GPIO_NOT_SET;
static const float CURRENT_SENSE_RESISTANCE_mOHM = 100000;

#endif /* Pins_Arduino_h */