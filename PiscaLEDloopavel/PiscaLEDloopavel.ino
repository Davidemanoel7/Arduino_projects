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
//  if (digitalRead(botao) == HIGH){
//  cont ++;
  Serial.println(cont);
  //delay(1000);
  
  do{
   if (digitalRead(botao) == HIGH){
   cont ++; }
   
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
       pisca5();
       break;
     case 6:
       cont =0;
       break;
     }
  } while (cont != 0);
  

}



void pisca1(){
  digitalWrite(y, LOW);
  digitalWrite(wt,HIGH);
  delay(125);
  digitalWrite(wt, LOW);
  digitalWrite(y, HIGH);
  delay(125);
  digitalWrite(y,LOW);
  digitalWrite(r,HIGH);
  delay(125);
  digitalWrite(r,LOW);
  digitalWrite(g, HIGH);
  delay(125);
  digitalWrite(g,LOW);
  digitalWrite(b, HIGH);
  delay(125);
  digitalWrite(b, LOW);
  digitalWrite(g,HIGH);
  delay(125);
  digitalWrite(g,LOW);
  digitalWrite(r, HIGH);
  delay(125);
  digitalWrite(r, LOW);
  digitalWrite(y, HIGH);
  delay(125);
    
 }
 void pisca2(){
  digitalWrite(wt, LOW);
  digitalWrite(b, HIGH);
  delay(125);
  digitalWrite(b,LOW);
  digitalWrite(g,HIGH);
  delay(125);
  digitalWrite(g,LOW);
  digitalWrite(r, HIGH);
  delay(125);
  digitalWrite(r,LOW);
  digitalWrite(y, HIGH);
  delay(125);
  digitalWrite(y, LOW);
  digitalWrite(wt, HIGH);
  delay(125);
  digitalWrite(wt,LOW);  
 }
 void pisca3(){
  
  digitalWrite(b, LOW);
  digitalWrite(wt, HIGH);
  digitalWrite(y,HIGH); 
  delay(125);
  digitalWrite(wt, LOW);
  digitalWrite(r,HIGH);
  delay(125);
  digitalWrite(y, LOW);
  digitalWrite(g,HIGH);
  delay(125);
  digitalWrite(r, LOW);
  digitalWrite(b,HIGH);
  delay(125);
  digitalWrite(g, LOW);
  delay(125);
  digitalWrite(b, LOW);   
 }

 void pisca4(){
  
  digitalWrite(wt,HIGH);
  digitalWrite(y,HIGH);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
  delay(125);
  digitalWrite(wt, LOW);
  delay(125);
  digitalWrite(y, LOW);
  delay(125);
  digitalWrite(r, LOW);
  delay(125);
  digitalWrite(g, LOW);
  delay(125);
  digitalWrite(b, LOW);
  delay(125);  
 }

 void pisca5(){
  digitalWrite(wt, HIGH);
  digitalWrite(r, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);  
  delay(100);
  digitalWrite(wt, LOW);
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
  digitalWrite(y, HIGH);
  digitalWrite(g, HIGH);
  delay(100);
    
 }
