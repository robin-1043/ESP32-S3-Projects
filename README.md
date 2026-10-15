# ESP32-S3 Potentiometer LED Control

This is my first project with ESP32-S3. In this project I controlled LED brightness using a potentiometer.

## What I used:
1. ESP32-S3 N16R8 board
2. 10k Potentiometer
3. LED and 220 ohm resistor
4. Breadboard and wires

## How it works:
Potentiometer is connected to GPIO 4. I read analog value (0-4095) from it. Then I convert it to 0-255 and send PWM to LED on GPIO 5. So when I rotate pot, LED brightness changes.

### Connection:
 Pot middle pin to GPIO 4
 Pot other one pin in 3.3V and and another one to GND
 LED + to GPIO 5
 LED - to Resistor to GND
 

## Code:
Code is in main.ino file.

## Demo Video:
Demo video is uploaded.
// Circuit Connection picture also uploaded
Thank you.
