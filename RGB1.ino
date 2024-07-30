const int RED=10, GREEN=11, BLUE=9;

void setup() {
  // put your setup code here, to run once:
pinMode (RED, OUTPUT);
pinMode (GREEN, OUTPUT);
pinMode (BLUE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(RED, 200);
analogWrite(GREEN, 0);
analogWrite(BLUE, 0);
delay(100);
analogWrite(RED, 0);
analogWrite(GREEN, 200);
analogWrite(BLUE, 0);
delay(100);
analogWrite(RED, 0);
analogWrite(GREEN, 0);
analogWrite(BLUE, 200);
delay(100);
analogWrite(RED, 50);
analogWrite(GREEN, 0);
analogWrite(BLUE, 200);
delay(100);
analogWrite(RED, 50);
analogWrite(GREEN, 50);
analogWrite(BLUE, 200);
delay(100);
analogWrite(RED, 50);
analogWrite(GREEN, 50);
analogWrite(BLUE, 0);
delay(100);
analogWrite(RED, 50);
analogWrite(GREEN, 0);
analogWrite(BLUE, 50);
delay(100);
analogWrite(RED, 0);
analogWrite(GREEN, 50);
analogWrite(BLUE, 50);
delay(100);
}
