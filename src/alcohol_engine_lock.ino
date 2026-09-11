#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define MQ3_A A0
#define RELAY 7
#define BUZZER 8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    pinMode(MQ3_A, INPUT);
    pinMode(RELAY, OUTPUT);
    pinMode(BUZZER, OUTPUT);

    // Safe condition initially
    digitalWrite(RELAY, LOW);   // Motor ON
    noTone(BUZZER);             // Buzzer OFF

    Serial.begin(9600);

    lcd.init();
    lcd.backlight();

    lcd.setCursor(0, 0);
    lcd.print(" Alcohol Test ");
    delay(2000);
}

void loop() {

    int alcoholLevel = analogRead(MQ3_A);

    // Display alcohol level on Serial Monitor
    Serial.print("Alcohol Level: ");
    Serial.println(alcoholLevel);

    lcd.clear();
    lcd.setCursor(0, 0);

    if (alcoholLevel > 700) {

        // ALCOHOL DETECTED
        lcd.print("Alcohol Detect");
        lcd.setCursor(0, 1);
        lcd.print("Vehicle Stop");

        Serial.println("Status: Alcohol Detected!");

        digitalWrite(RELAY, HIGH);  // Motor OFF

        tone(BUZZER, 1000);         // Buzzer ON (1000 Hz sound)
    }

    else {

        // NO ALCOHOL - SAFE
        lcd.print("No Alcohol");
        lcd.setCursor(0, 1);
        lcd.print("Safe Driving");

        Serial.println("Status: Safe");

        digitalWrite(RELAY, LOW);   // Motor ON

        noTone(BUZZER);             // Buzzer OFF
    }

    Serial.println("---------------------");

    delay(1000);
}
