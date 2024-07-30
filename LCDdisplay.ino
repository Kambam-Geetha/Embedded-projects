#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
MyLCD.begin(16,2);
}

void loop() {
for(int k=0; k<=23; k++)
{
MyLCD.home();
for(int j=0; j<=59; j++)
{
for(int i=0; i<=59; i++){
MyLCD.print("TIME-");
MyLCD.setCursor(5, 0);
MyLCD.print(k);
MyLCD.setCursor(8, 0);
MyLCD.print(j);
MyLCD.setCursor(11, 0);
MyLCD.print(i);
//MyLCD.print("TIME-%d:%d:%d",k,j,i);

delay(1000);
MyLCD.clear();
}
}
}
MyLCD.clear();
}

