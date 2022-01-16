
#include <LiquidCrystal.h>

int contrast = 75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  analogWrite(6, contrast);
  lcd.begin(16, 2);
}

// the loop routine runs over and over again forever:
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Jai Hind Sir!");
}
