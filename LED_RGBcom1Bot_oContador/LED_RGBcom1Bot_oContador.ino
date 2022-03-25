//Variável botão
int butt = 7;

// Variáveis de LEDs

int ledr = 10; // LED Vermelho
int ledg = 9; // LED Verde
int ledb = 8; // LED Azul

// Variável contador

int cont = 0;



void setup() {
  // Especificando que butt é uma entrada.
  pinMode(butt, INPUT);
  
  // Especificando que o LED RGB terá 3 saídas (3 pinos).
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  cont = digitalRead(butt);
  if (cont == HIGH){
    delay(150);
    cont++;
    Serial.println(cont);
  }
  switch(cont){
    case 1:
      piscavermelho();
      break;
    case 2:
      piscaverde();
      break;
    case 3:
      piscaazul();
      break;
    default:
      cont =  0;
      break;
  }          
}

void piscavermelho(void){
  digitalWrite(ledr, HIGH);
  delay(500);
  digitalWrite(ledr, LOW);
  delay(500);
}

void piscaverde(void){
  digitalWrite(ledg, HIGH);
  delay(500);
  digitalWrite(ledg, LOW); 
  delay(500); 
}

void piscaazul(void){
  digitalWrite(ledb, HIGH);
  delay(500);
  digitalWrite(ledb, LOW);
  delay(500);
}
