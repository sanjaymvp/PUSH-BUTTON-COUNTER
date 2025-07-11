#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust 0x27 if your LCD uses a different I2C address

const int buttonPin = 2;  // Button connected to digital pin 2
int count = 0;
int buttonState = HIGH;
int lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Internal pull-up resistor
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Press Count:");
  lcd.setCursor(0, 1);
  lcd.print(count);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Detect falling edge
  if (lastButtonState == HIGH && buttonState == LOW) {
    count++;
    lcd.setCursor(0, 1);
    lcd.print("                "); // Clear line
    lcd.setCursor(0, 1);
    lcd.print(count);
    delay(200);  // Debounce
  }

  lastButtonState = buttonState;
}
