int botao = 7;
int wt = 12;
int y =  11;
int r = 10;
int g = 9;
int b = 8;
int cont = 0;


void setup() {
  pinMode(botao, INPUT);
  pinMode(wt, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(cont) == HIGH){
    cont ++;
    Serial.println(cont);
    delay(500);
  }
//  switch (cont) {
//    case 1:
      
  }
  
