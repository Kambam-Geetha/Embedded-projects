const int LM_35=A0;
int input_val=0;
float temp=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  input_val = analogRead(LM_35);
  temp = (5.0 * input_val * 100.0) / 1024 ;
  Serial.print("Temperature is : ");
  Serial.println(temp);
  delay(2000);

}
