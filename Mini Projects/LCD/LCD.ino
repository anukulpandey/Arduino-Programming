#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12,11,5,4,3,2);


void setup() {
  // put your setup code here, to run once:
  analogWrite(6,Contrast);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0, 0);
lcd.print("Anukul Pandey");
lcd.setCursor(0, 1);
lcd.print("");
}
