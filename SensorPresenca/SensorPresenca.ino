int sensor= 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  bool varSensor = digitalRead(sensor);
  if (varSensor) {
    Serial.println("DETECTADO");
    delay(1000);

  } else {    
    Serial.println("- - - ");
    }
  
}
