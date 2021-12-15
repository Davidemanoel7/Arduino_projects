#include <stdlib.h>
#include <time.h>

int botao = 7;
int wt = 12;
int y =  11;
int r = 10;
int g = 9;
int b = 8;
int cont = 0;

int randomize();
void rando();

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

  if (digitalRead(botao)){
  delay(500);    
  cont ++;  
  Serial.println(cont);  
  }
    
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
     case 5:
        rando();
        break;
     default:
       cont = 0;
       break;
  }   
}

void pisca1(){
  digitalWrite(b, LOW); 
  digitalWrite(wt,HIGH);
  delay(100);
  digitalWrite(wt, LOW);
  digitalWrite(y, HIGH);
  delay(100);
  digitalWrite(y,LOW);
  digitalWrite(r,HIGH);
  delay(100);
  digitalWrite(r,LOW);
  digitalWrite(g, HIGH);
  delay(100);
  digitalWrite(g,LOW);
  digitalWrite(b, HIGH);
  delay(100);  
 }
 
 void pisca2(){
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);
  digitalWrite(wt, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(b, HIGH);
  delay(250);
  digitalWrite(wt, LOW);
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
  digitalWrite(y, HIGH);
  digitalWrite(g, HIGH);
  delay(250);
  
}
 void pisca3(){
  digitalWrite(wt, HIGH);
  delay(100);
  digitalWrite(y, HIGH);
  delay(100);
  digitalWrite(r, HIGH);
  delay(100);
  digitalWrite(g, HIGH);
  delay(100);
  digitalWrite(b, HIGH);
  delay(100);
  digitalWrite(wt, LOW);
  delay(100);
  digitalWrite(y, LOW);
  delay(100);
  digitalWrite(r, LOW);
  delay(100);
  digitalWrite(g, LOW);
  delay(100);
  digitalWrite(b, LOW);
  delay(100);
}

 void pisca4(){
  digitalWrite(wt, HIGH);
  digitalWrite(y, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(500);
  digitalWrite(wt, LOW);
  digitalWrite(y, LOW);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(500);
 }

  void rando() {
  int n;
  n = randomize();
  switch (n)
  {
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
      break;
  }
}

  int randomize (){
    int k;
    srand(time(NULL));
    k = 1 + rand() % 4;
    printf("valor =\t %d", k);
  return k;  
 }
