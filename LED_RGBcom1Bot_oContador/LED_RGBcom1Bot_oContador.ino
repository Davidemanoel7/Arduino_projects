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
    //cont++;
    Serial.println(cont);
  }
  //do {
    switch(cont){
      case 1:
        piscavermelho();
        cont++;
        break;
      case 2:
        piscaverde();
        cont++;
        break;
      case 3:
        piscaazul();
        cont++;
        break;
      case 4:
        cont = 0;
        break;
        }
    //} while (butt!=0);
}

void piscavermelho(void){
  digitalWrite(ledr, HIGH);
  delay(2000);
  digitalWrite(ledr, LOW);
  delay(2000);
}

void piscaverde(void){
  digitalWrite(ledg, HIGH);
  delay(2000);
  digitalWrite(ledg, LOW); 
  delay(2000); 
}

void piscaazul(void){
  digitalWrite(ledb, HIGH);
  delay(2000);
  digitalWrite(ledb, LOW);
  delay(2000);
}
