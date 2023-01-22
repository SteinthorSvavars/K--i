#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int buttonPin = 8;  
                          
int buttonState = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(buttonPin, INPUT);
  lcd.begin(16, 2);
  lcd.print("Hurd er: ");
}

void loop() {
  buttonState = digitalRead(buttonPin);
  lcd.setCursor(0, 1);
  if (buttonState == HIGH) {
    lcd.print("Open");
  } else {
    lcd.print("Closed");
  }
}