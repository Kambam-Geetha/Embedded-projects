#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);
int LM_35=A0;
int input_val=0;
const int LED=7;
float temp=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);

}

void loop()
{
input_val = analogRead(LM_35);
temp = (5.0 * input_val * 100.0) / 1024 ;
MyLCD.begin(16,2);
MyLCD.home();
MyLCD.print("Temperature:");
MyLCD.setCursor(12,0);
MyLCD.print(temp);
if(temp>50){
digitalWrite(LED, HIGH);
}
else{
digitalWrite(LED, LOW);
}
delay(1000);
}