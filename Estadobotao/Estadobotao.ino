void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);

}

void loop() {
 
int butt;
butt = digitalRead(7);

digitalWrite(10, butt);
digitalWrite(9, !butt);

}
