
const int BUTTON1=2;
const int BUTTON2=4;
const int LED1=5;
const int LED2=3;
int BUTTONState1=0, BUTTONState2=0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(BUTTON1, INPUT);
pinMode(LED2, OUTPUT);
pinMode(BUTTON2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
BUTTONState1=digitalRead(BUTTON1);
BUTTONState2=digitalRead(BUTTON2);
if (BUTTONState1 == HIGH)
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
}
else{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
}

if (BUTTONState2 == HIGH)
{
  
}
else{
  
}


}