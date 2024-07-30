const int Transistor = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(Transistor, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Transistor, HIGH);
  delay(1000);
  digitalWrite(Transistor, LOW);
  delay(1000);



}
