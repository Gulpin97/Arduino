#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  lcd.print("Macie to w");
  lcd.setCursor(0,1);
  lcd.print("Polsce?!");
}

void loop() {
  
}
