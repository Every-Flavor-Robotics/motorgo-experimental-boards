/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Ha Thach (tinyusb.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "esp32-hal-gpio.h"
#include "pins_arduino.h"

extern "C"
{
  // Initialize variant/board, called before setup()
  void initVariant(void)
  {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(LED_STATUS, OUTPUT);

    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_STATUS, LOW);

    // Set motor pins
    pinMode(M1_PH, OUTPUT);
    pinMode(M1_EN, OUTPUT);
    pinMode(M2_PH, OUTPUT);
    pinMode(M2_EN, OUTPUT);
    pinMode(M3_PH, OUTPUT);
    pinMode(M3_EN, OUTPUT);
    pinMode(M4_PH, OUTPUT);
    pinMode(M4_EN, OUTPUT);

    // Set all to LOW
    digitalWrite(M1_PH, LOW);
    digitalWrite(M1_EN, LOW);
    digitalWrite(M2_PH, LOW);
    digitalWrite(M2_EN, LOW);
    digitalWrite(M3_PH, LOW);
    digitalWrite(M3_EN, LOW);
    digitalWrite(M4_PH, LOW);
    digitalWrite(M4_EN, LOW);
  }
}