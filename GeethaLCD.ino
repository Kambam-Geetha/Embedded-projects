#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
MyLCD.begin(16,2);
MyLCD.home();
MyLCD.print("My Name IsGeetha");
MyLCD.setCursor(16,1);
MyLCD.print("16x2LCD");


}

void loop()
{
}  
