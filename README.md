# ESP32 LED Blink using ESP-IDF

This is a basic embedded C project that toggles an LED connected to GPIO2 on an ESP32 board. Built with the **ESP-IDF framework**, this is the classic "Hello World" for embedded systems — a perfect starting point for beginners getting into real-time OS and embedded C programming.

## 🚀 Project Overview

- **Board**: ESP32 DevKit
- **Framework**: [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/)
- **Language**: Embedded C (with FreeRTOS)
- **Function**: Blinks an onboard LED (GPIO2) at 1-second intervals

## 🛠️ How It Works

1. Initializes GPIO2 as an output pin.
2. Turns the LED ON for 1 second.
3. Turns the LED OFF for 1 second.
4. Repeats the cycle indefinitely using `vTaskDelay()` (non-blocking delay from FreeRTOS).

## Requirements
ESP32 board
USB cable
VS Code with ESP-IDF extension 



