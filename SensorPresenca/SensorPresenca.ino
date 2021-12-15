
#define sensor 10
#define LED 7
#define buzz 12

void setup() {
  pinMode(sensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int varSensor = digitalRead(sensor);
  if ((varSensor)==1) {
    Serial.println("DETECTADO");
    digitalWrite(LED, HIGH);
    tone(buzz, 2500);
    delay(1000);
    digitalWrite(LED, LOW);

  } else {    
    Serial.println("- - - ");
    delay(1500);
    noTone(buzz);
    digitalWrite(LED, LOW);
    }
}
