#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

// #define EXTERNAL_NUM_INTERRUPTS 46
// #define NUM_DIGITAL_PINS 48
// #define NUM_ANALOG_INPUTS 20

#define analogInputToDigitalPin(p) \
  (((p) < 20) ? (analogChannelToDigitalPin(p)) : -1)
#define digitalPinToInterrupt(p) (((p) < 48) ? (p) : -1)
#define digitalPinHasPWM(p) (p < 46)

#define DRIVER_VOLTAGE_LIMIT 17.0f
#define DRIVER_CURRENT_LIMIT 20.0f

// A flag to indicate a GPIO pin is not set
#define MOTORGO_GPIO_NOT_SET 0xFF

// Built-in LED available to user
static const uint8_t LED_BUILTIN = 38;

// Status LED
static const uint8_t LED_STATUS = 47;
#define BUILTIN_LED LED_BUILTIN  // backward compatibility
#define LED_BUILTIN LED_BUILTIN

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 2;
static const uint8_t SCL = 1;
static const uint8_t QWIIC_SDA = SDA;
static const uint8_t QWIIC_SCL = SCL;

static const uint8_t ENC_SDA = 35;
static const uint8_t ENC_SCL = 36;
// Encoder uses SSI, but we still need to define MOSI
// Pin 45 is not connected to anything, so we can use it
static const uint8_t ENC_MOSI = 45;

// ch0 Motor and Encoder pins
static const uint8_t CH0_ENC_CS = 48;
static const uint8_t CH0_UH = 9;
static const uint8_t CH0_UL = 17;
static const uint8_t CH0_VH = 8;
static const uint8_t CH0_VL = 16;
static const uint8_t CH0_WH = 18;
static const uint8_t CH0_WL = 15;
static const uint8_t CH0_CURRENT_U = 5;
static const uint8_t CH0_CURRENT_V = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH0_CURRENT_W = 4;

// ch1 Motor and Encoder pins
static const uint8_t CH1_ENC_CS = 37;
static const uint8_t CH1_UH = 21;
static const uint8_t CH1_UL = 12;
static const uint8_t CH1_VH = 14;
static const uint8_t CH1_VL = 11;
static const uint8_t CH1_WH = 13;
static const uint8_t CH1_WL = 10;
static const uint8_t CH1_CURRENT_U = 6;
static const uint8_t CH1_CURRENT_V = MOTORGO_GPIO_NOT_SET;
static const uint8_t CH1_CURRENT_W = 7;

static const uint8_t CURRENT_SENSE_AMP_GAIN = 50;
static const uint8_t CURRENT_SENSE_RESISTANCE_mOHM = 1;

static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;


#endif /* Pins_Arduino_h */