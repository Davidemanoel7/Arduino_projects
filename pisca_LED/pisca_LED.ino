void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8, HIGH);
delay(1200);
digitalWrite(8, LOW);
digitalWrite(9,HIGH);
delay(600);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(1500);
digitalWrite(10, LOW);
}
