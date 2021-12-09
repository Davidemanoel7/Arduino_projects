int botao = 2;
int wt = 12;
int y =  11;
int r = 10;
int g = 9;
int b = 8;
int wt2 = 7;
int y2 = 6;
int r2 = 5;
int g2 = 4;
int b2 = 3;
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
  delay(200);}
    
   //do{
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
  //}while(cont !=0);
}

void pisca1(){
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
  digitalWrite(b, LOW);
  digitalWrite(wt2, HIGH);
  delay(100);
  digitalWrite(wt2, LOW);
  digitalWrite(y2, HIGH);
  delay(100);
  digitalWrite(y2, LOW);
  digitalWrite(r2, HIGH);
  delay(100);
  digitalWrite(r2, LOW);
  digitalWrite(g2, HIGH);
  delay(100);
  digitalWrite(g2, LOW);
  digitalWrite(b2, HIGH);
  delay(100);
  digitalWrite(b2, LOW);
 }
 
 void pisca2(){
  digitalWrite(wt, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, HIGH);
  delay(100);
  digitalWrite(wt, LOW);
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  
  digitalWrite(y, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(wt2, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(b2, HIGH);
  delay(100);
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);
  digitalWrite(wt2, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(b2, LOW); 
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
  digitalWrite(wt2, HIGH);
  delay(100);
  digitalWrite(y2, HIGH);
  delay(100);
  digitalWrite(r2, HIGH);
  delay(100);
  digitalWrite(g2, HIGH);
  delay(100);
  digitalWrite(b2, HIGH);
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
  digitalWrite(wt2, LOW);
  delay(100);
  digitalWrite(y2, LOW);
  delay(100);
  digitalWrite(r2, LOW);
  delay(100);
  digitalWrite(g2, LOW);
  delay(100);
  digitalWrite(b2, LOW);
  delay(100); 
 }

 void pisca4(){
  digitalWrite(wt, HIGH);
  digitalWrite(y, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(wt2, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(b2, HIGH);
  delay(500);
  digitalWrite(wt, LOW);
  digitalWrite(y, LOW);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(wt2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(b2, LOW);
  delay(500);
 }
