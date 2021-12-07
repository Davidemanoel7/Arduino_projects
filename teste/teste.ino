//Semáforo com botão de pedestre

//Vamos dar um nome para as portas.
int red = 10;
int yel = 9;
int gre = 8;
int butt = 12;

void setup() {
  //Especificando que essas portas são saídas...
 pinMode(red, OUTPUT);
 pinMode(yel, OUTPUT);
 pinMode(gre, OUTPUT);
  // O botão será uma entrada...
 pinMode(butt, INPUT);

 digitalWrite(red, LOW);
 digitalWrite(yel, LOW);
 digitalWrite(gre, HIGH);
}

void loop() {
  //(Se a porta digital ler "1" na variável botão)
  if (digitalRead(butt) == HIGH){
    delay(2000);
    semaforo();
  }
}
void semaforo(){
  
  //Amarelo acende.

  digitalWrite(red, LOW);
  digitalWrite(yel, HIGH);
  digitalWrite(gre, LOW);

  //esperamos um tempo

  delay(200);

  //Vermelho acende.

  digitalWrite(red, HIGH);
  digitalWrite(yel, LOW);
  
  delay(500);

  //verde acende.

  digitalWrite(red, LOW);
  digitalWrite(gre, HIGH);

  delay(500);
  
}
