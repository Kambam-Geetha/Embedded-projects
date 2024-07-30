const int LED1=2,LED2=4;
void setup() {
  // put your setup code here, to run once:
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
for (int brightness=1; brightness<=255; brightness++)
{
  analogWrite (LED1, brightness);
  delay(10);
}
for (int brightness=255; brightness>0; brightness--)
{
  analogWrite (LED1, brightness);
  delay(10);
}
for (int brightness=255; brightness>=1; brightness--)
{
  analogWrite(LED2, brightness);
  delay(10);
}
for (int brightness=0; brightness<255; brightness++)
{
  analogWrite(LED2, brightness);
  delay(10);
}
}