
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("How you feel?");
  lcd.setCursor(0, 1);
  lcd.print("Detecting Face");
}

void loop() {
  lcd.setCursor(14, 1);
  lcd.setCursor(14, 1);
  lcd.print("*.");
  delay(300);
  lcd.setCursor(14, 1);
  lcd.print(".*");
  delay(300);
}
 
