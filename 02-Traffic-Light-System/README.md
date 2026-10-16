# ESP32-S3 Traffic Light System

This is my second project with ESP32-S3. In this project I made a simple traffic light system with 3 LEDs.

## What I used:
1. ESP32-S3 N16R8 board
2. 3x LEDs (Red, Yellow, Green) and 3x 220 ohm resistor
3. Breadboard and wires

## How it works:
Red LED is on GPIO 10, Yellow on GPIO 12 and Green on GPIO 13. 
Code turns on Red for 5 sec, then Yellow for 2 sec, then Green for 5 sec. So it works like a real traffic light in a loop.

### Connection:
- Red LED + to GPIO 10, - to Resistor to GND
- Yellow LED + to GPIO 12, - to Resistor to GND
- Green LED + to GPIO 13, - to Resistor to GND

## Code:
Code is in Traffic_Light.ino file.

## Demo Video:
Demo video is uploaded.
// Circuit Connection picture also uploaded
Thank you.
