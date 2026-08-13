# arduino-led-blinking
# 💡 Arduino LED Blinking

A basic Embedded Systems project that demonstrates how to control an LED using an Arduino digital GPIO pin.

## 📌 Project Overview

This project is a simple LED blinking application developed using an Arduino.

The LED is connected to a digital GPIO pin. The Arduino turns the LED **ON for 500 ms** and **OFF for 500 ms**, creating a continuous blinking effect.

This project helps understand the fundamentals of:

- GPIO / Digital Output
- pinMode()
- digitalWrite()
- Timing using delay()
- Basic Arduino programming

## 🛠️ Components Required

- Arduino Uno
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard
- USB Cable

## 🔌 Circuit Connection

| Component | Arduino |
|---|---|
| LED Anode (+) | Digital Pin 8 |
| LED Cathode (-) | GND |
| 220Ω Resistor | In series with LED |

### Circuit

text
Arduino Uno

Digital Pin 8 ──── 220Ω ────►|LED|──── GND
                              
