#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
MyLCD.begin(16,2);


}

void loop() {
for(int i=0; i<=20; i++){
MyLCD.home();
MyLCD.print("COUNT:");
MyLCD.setCursor(6, 0);
MyLCD.print(i);
delay(1000);
}
MyLCD.clear();

}

