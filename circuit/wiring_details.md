# Circuit Wiring Details

## Components

- Arduino Uno
- MQ-3 Alcohol Sensor
- 16x2 I2C LCD
- 5V Relay Module
- 5V DC Gear Motor
- Buzzer
- Breadboard
- Jumper Wires
- Battery Supply

## Connections

| Component | Arduino Connection |
|---|---|
| MQ-3 AO | A0 |
| Relay IN | D7 |
| Buzzer | D8 |
| LCD SDA | A4 |
| LCD SCL | A5 |
| LCD VCC | 5V |
| LCD GND | GND |
| MQ-3 VCC | 5V |
| MQ-3 GND | GND |

The DC gear motor is used as a small-scale representation of the vehicle engine.

The MQ-3 sensor measures alcohol concentration. When the detected value exceeds the programmed threshold, the Arduino activates the warning system and controls the relay to stop the motor.
