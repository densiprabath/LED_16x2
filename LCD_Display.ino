// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("  Love n Peace  ");
  lcd.setCursor(5, 2);
  lcd.print("REGGAE");
//  delay(1000);
}

void loop() {
//      lcd.scrollDisplayLeft();
//    delay(250);
}
