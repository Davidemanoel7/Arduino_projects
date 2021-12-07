//Variável botão
int butt = 7;

// Variáveis de LEDs
int ledr = 10;
int ledg = 9;
int ledb = 8;
// Variável contador

int cont=0;



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
  //int cont = 0;
  if ((digitalRead(butt))== HIGH){
    cont++;
    Serial.println(cont);
  }
  do {
    switch(cont){
      case 1:
        digitalWrite(ledr, HIGH);
        break;
      case 2:
        digitalWrite(ledg, HIGH);
        break;
      case 3:
        digitalWrite(ledb, HIGH);
        break;
      case 4:
        cont = 0;
        break;
        }
    } while (butt!=0);
}
