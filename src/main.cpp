#include <Arduino.h>

#define BUTTON_PIN button_pin

// variable for storing the pushbutton status
int buttonState = 0;

void setup() {
    Serial.begin(MONITOR_SPEED);
    pinMode(BUTTON_PIN, INPUT);
}

void loop() {

    // read the state of the pushbutton value
    buttonState = digitalRead(BUTTON_PIN);
    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH
    if (buttonState == HIGH) {
        Serial.print("buttonState: ");
        Serial.println(buttonState);
    } else {
        Serial.print("buttonState: ");
        Serial.println(buttonState);
    }
    delay(300);

}
