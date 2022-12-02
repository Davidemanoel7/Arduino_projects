// Variáveis de LEDs
#define ldr A0
int ledr = 10; // LED Vermelho
int ledy = 9; // LED Amarelo
int ledg = 8; // LED Verde

// Variável contador

void setup() {
// Especificando que o LED RGB terá 3 saídas (3 pinos).
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledy, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (analogRead(ldr) > 80){ // Neste caso, quando tiver muita luz, o led verde irá ascender
    Serial.println(analogRead(ldr));
    vd();
  }
  else if ((analogRead(ldr) <= 80) && (analogRead(ldr) >= 30)){ // Neste caso, quando tiver luz média, o led amarelo irá ascender
    Serial.println(analogRead(ldr));
    am();
  }else{ // Neste caso, quando tiver pouca luz, o led vermelho irá ascender
    Serial.println(analogRead(ldr));
    vm();
  }
}

void vm(void){
  digitalWrite(ledr, HIGH);
  delay(500);
  digitalWrite(ledr, LOW);
  delay(500);
}

void vd(void){
  digitalWrite(ledg, HIGH);
  delay(500);
  digitalWrite(ledg, LOW); 
  delay(500); 
}

void am(void){
  digitalWrite(ledy, HIGH);
  delay(500);
  digitalWrite(ledy, LOW);
  delay(500);
}
