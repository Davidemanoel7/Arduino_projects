// Programa que conta de 0 até 9

int a = 9;
int b = 8;
//int dp = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int butt = 11;
int cont = 0;




void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  //pinMode(dp, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(butt, INPUT);
  Serial.begin(9600);
}

void loop() {
 cont = digitalRead(butt);
 if (digitalRead(butt)==HIGH){
  cont++;
  Serial.println(cont);
  delay(200);
 }

 do {
  switch (cont){
    case 0:
      num0(); // o () é opicional...
      break;
    case 1:
      num1;
      break;
    case 2:
      num2;
      break;
    case 3:
      num3;
      break;
    case 4:
      num4;
      break;
    case 5:
      num5;
      break;
    case 6:
      num6;
      break;
    case 7:
      num7;
      break;
    case 8:
      num8;
      break;
    case 9:
      num9;
      cont = 0;
      break;
    }
 } while (cont != 10);
}

void num0 (void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);
 }

 void num1(void){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp,HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);  
 }

 void num2(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  //digitalWrite(dp, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(1000);
 }

 void num3(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(1000);
 }
 void num4(void){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
 }
  void num5(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  //digitalWrite(dp,HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  }

  void num6(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  //digitalWrite(dp, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);  
  }

  void num7(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp,HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
  }

  void num8(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp,HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000); 
  }

  void num9(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(dp,HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  }
