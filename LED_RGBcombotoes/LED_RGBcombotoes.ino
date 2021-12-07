int br = 7;
int bg = 6;
int bb = 5;

int ledr = 10;
int ledg = 9;
int ledb = 8;



void setup() {
  // Entrada dos boteõs.
  pinMode(br, INPUT);
  pinMode(bg, INPUT);
  pinMode(bb, INPUT);
  // Saídas LED RGB;
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);

}

void loop() {
  // condições p led vermelho.
  if ((digitalRead(br)) == HIGH){
    digitalWrite(ledr, HIGH);
  } else {
    digitalWrite(ledr, LOW);
  }
  // condições p led verde.

  if ((digitalRead(bg)) == HIGH){
    digitalWrite(ledg, HIGH);
  } else {
    digitalWrite(ledg, LOW);
  }
  // condições p led azul.

  if ((digitalRead(bb)) == HIGH){
    digitalWrite(ledb, HIGH);
  } else {
    digitalWrite(ledb, LOW);
  }

}
