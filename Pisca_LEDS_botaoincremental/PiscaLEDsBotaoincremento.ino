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
  if (digitalRead(botao) == HIGH){
  cont ++;
  Serial.println(cont);
  delay(1000);
  
  
   switch (cont){
     case 1:
       pisca1();
       break;
     case 2:
       pisca2();
       break;
     case 3:
       pisca3();
       break;
     case 4:
       pisca4();
       break;
     default:
       cont = 0;
       break;
    }
  

  }
}

void pisca1(){
  digitalWrite(wt,HIGH);
  delay(500);
  digitalWrite(wt, LOW);
  digitalWrite(y, HIGH);
  delay(500);
  digitalWrite(y,LOW);
  digitalWrite(r,HIGH);
  delay(500);
  digitalWrite(r,LOW);
  digitalWrite(g, HIGH);
  delay(500);
  digitalWrite(g,LOW);
  digitalWrite(b, HIGH);
  delay(500);
  digitalWrite(b, LOW);
  delay(500);  
 }
 void pisca2(){
  digitalWrite(wt, LOW);
  digitalWrite(b, HIGH);
  delay(500);
  digitalWrite(b,LOW);
  digitalWrite(g,HIGH);
  delay(500);
  digitalWrite(g,LOW);
  digitalWrite(r, HIGH);
  delay(500);
  digitalWrite(r,LOW);
  digitalWrite(y, HIGH);
  delay(500);
  digitalWrite(y, LOW);
  digitalWrite(wt, HIGH);
  delay(500);
  digitalWrite(wt,LOW);  
 }
 void pisca3(){
  digitalWrite(b, LOW);
  digitalWrite(wt, HIGH);
  digitalWrite(y,HIGH); 
  delay(500);
  digitalWrite(wt, LOW);
  digitalWrite(r,HIGH);
  delay(500);
  digitalWrite(y, LOW);
  digitalWrite(g,HIGH);
  delay(500);
  digitalWrite(r, LOW);
  digitalWrite(b,HIGH);
  delay(500);
  digitalWrite(g, LOW);
  delay(500);
  digitalWrite(b, LOW);
  
   
 }

 void pisca4(){
  digitalWrite(wt,HIGH);
  digitalWrite(y,HIGH);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(wt, LOW);
  delay(500);
  digitalWrite(y, LOW);
  delay(500);
  digitalWrite(r, LOW);
  delay(500);
  digitalWrite(g, LOW);
  delay(500);
  digitalWrite(b, LOW);
  delay(500);  
 }
