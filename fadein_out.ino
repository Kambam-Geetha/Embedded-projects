const int LED_ao=3;
void setup() {
  // put your setup code here, to run once:
pinMode (LED_ao, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int brightness=1; brightness<=255; brightness++)
{
  analogWrite (LED_ao, brightness);
  delay(5);
}
for (int brightness=255; brightness>0; brightness--)
{
  analogWrite (LED_ao, brightness);
  delay(5);
}
}
