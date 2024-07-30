const int analog_ip =A0;
const int LED1=3;
const int LED2=5;
int inputVal=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  inputVal=analogRead(analog_ip);
  Serial.println(inputVal);
  analogWrite(LED1, inputVal/4);
  analogWrite(LED2, 5-inputVal/4);
  delay(500);

}
