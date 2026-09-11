# Project Overview

## Alcohol Sensing Engine Lock System

This project is an Arduino-based safety system designed to detect alcohol and prevent a vehicle engine from operating when the detected alcohol level exceeds a predefined threshold.

The system uses an MQ-3 alcohol sensor to detect alcohol concentration. Arduino Uno processes the sensor reading and controls a relay, buzzer, and LCD display.

A DC gear motor is used as a prototype representation of a vehicle engine.

## Main Features

- Alcohol detection using MQ-3 sensor
- Real-time alcohol level monitoring
- LCD status display
- Audible warning using buzzer
- Automatic engine lock using relay
- Low-cost hardware implementation

## Working Principle

1. The MQ-3 sensor detects alcohol.
2. The sensor provides an analog output to Arduino.
3. Arduino converts the sensor output using its ADC.
4. The measured value is compared with a predefined threshold.
5. If the alcohol level is above the threshold:
   - The LCD displays an alcohol detection warning.
   - The buzzer is activated.
   - The relay disables the motor.
6. If the alcohol level is below the threshold, the system allows the motor to operate.

## Applications

- Vehicle alcohol detection systems
- Driver safety systems
- Vehicle ignition interlock prototypes
- Student IoT and embedded systems projects

## Future Improvements

- GSM/GPS-based emergency notification
- Mobile application integration
- Data logging
- More accurate alcohol concentration calibration
- Fingerprint or RFID driver authentication
- Real vehicle ignition integration
