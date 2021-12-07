int led = 3;
int sensor = 10;
int buzz = 7;

//#define led  3
//#define sensor  10



void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool valorSensor = digitalRead(sensor);
  if (digitalRead(valorSensor) == HIGH){
    digitalWrite(led, HIGH);
    tone(buzz, 1500);
    Serial.print(sensor);
    delay(2000);
    }
  else{
    digitalWrite(led, LOW);
    noTone(buzz);
  }
}
