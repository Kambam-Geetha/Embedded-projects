const int photo_diode = A0;
int inputVal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(96000);

}

void loop() {
  // put your main code here, to run repeatedly:
 inputVal = analogRead(photo_diode);
 Serial.print("Input Value: ");
 Serial.println(inputVal);
 delay(1000);
}
