#include <Servo.h>
Servo servo_1;
void setup() {
  // put your setup code here, to run once:
servo_1.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<=180; i++)
{
servo_1.write(i);
delay(100);
}

}
