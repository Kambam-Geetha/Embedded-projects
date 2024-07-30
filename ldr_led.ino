const int LDR = A0;
const int LED = 3;
int input_val = 0;
int ledbrightness = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  input_val = analogRead(LDR);
  ledbrightness = map(input_val, 0, 1023, 255, 0);
  analogWrite(LED, ledbrightness);
  Serial.print("LDR value  : ");
  Serial.print(input_val);
  Serial.print("- LED brightness: ");
  Serial.println(ledbrightness);
  delay(1000);
}
