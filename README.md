# Alcohol Sensing Engine Lock System

An Arduino-based safety system that detects alcohol using an MQ-3 alcohol sensor and automatically prevents a prototype vehicle engine from running when the detected alcohol level exceeds a predefined threshold.

## Components Used

- Arduino Uno
- MQ-3 Alcohol Sensor
- 16x2 I2C LCD
- 5V Relay Module
- DC Gear Motor
- Buzzer
- Breadboard
- Jumper Wires
- Battery Supply

## How It Works

1. The MQ-3 sensor detects alcohol.
2. Arduino reads the sensor's analog output through pin A0.
3. The sensor reading is compared with a predefined threshold.
4. If the alcohol level is above the threshold, the system:
   - Activates the buzzer
   - Displays an alcohol warning on the LCD
   - Activates the relay to stop the motor
5. If the alcohol level is below the threshold, the motor is allowed to operate.

## Hardware Connections

| Component | Arduino Pin |
|---|---|
| MQ-3 Analog Output | A0 |
| Relay IN | D7 |
| Buzzer | D8 |
| LCD SDA | A4 |
| LCD SCL | A5 |

## Project Structure

```text
alcohol-sensing-engine-lock/
│
├── README.md
├── src/
│   └── alcohol_engine_lock.ino
├── circuit/
│   └── wiring_details.md
├── documentation/
└── images/
<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/cc27eee7-d347-472b-8244-6b0e46d7feaf" />
<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/1b8db559-a1b8-40cb-82ba-f8d6811c5ee0" />

