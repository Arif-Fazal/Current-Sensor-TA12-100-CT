# AC 5A Non-invasive Current Sensor (TA12-100) – Arduino Code

This repository contains tested Arduino code for interfacing and calibrating the **AC 5A Non-invasive Current Transformer Sensor (Model: TA12-100)**. The sensor is used to measure alternating current (AC) by clamping around a single live wire without direct electrical contact.

## Description

- The code reads analog input values from the sensor and calculates the AC current based on calibrated parameters.
- Calibration values have been derived using the sensor's datasheet and verified through testing.
- An average of multiple readings is used in the code to improve accuracy.
- The `calibration_factor` can be fine-tuned by comparing readings against a trusted source, such as a clamp meter.

## Features

- Non-invasive AC current measurement
- Adjustable calibration factor
- Averaging for noise reduction and improved accuracy
- Based on specifications provided in the sensor datasheet

## Files

- `circuit_image.png` — Ciruit Diagram 
- `TA12_100_AC_Current.ino` — Main Arduino code with calibration and reading logic

## Datasheet

You can access the sensor's datasheet for detailed technical specifications here:  
[TA12-100 Datasheet – alldatasheet.com](https://www.alldatasheet.com/datasheet-pdf/download/1159415/YHDC/TA12-100.html)

## Calibration Note

To ensure accurate readings:
- Use a clamp meter to measure actual current.
- Adjust the `calibration_factor` in the code accordingly to match the sensor's output to real-world values.

## Purpose

This project is intended for educational and practical use in basic AC current monitoring applications, energy projects, and IoT-based power tracking systems.

## License

This code is released under the MIT License. Feel free to use, modify, and share it with proper attribution.
