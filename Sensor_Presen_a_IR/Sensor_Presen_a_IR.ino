int sensor = A2;  // Cria uma variável inteira chamada "sensor" e que corresponde ao pino analógico 2;
int valor = 0;  // Cria uma variável inteira chamada "valor" e que tem valor igual a 0 (Zero);
int led = 12;  // Cria uma variável inteira chamada "led" e que corresponde ao pino digital 12;
int st = 0; // Cria uma variável inteira chamada "st" e que tem valor igual a 0 (Zero);

const int buzzer = 11; // Cria uma variável inteira chamada "buzzer" e que corresponde ao pino digital 11;

void buzina();

void setup() {
  pinMode(led, OUTPUT); // Declara que o "led" é uma saída    
  pinMode(sensor, INPUT); // Declara que o"sensor" é uma entrada
  pinMode(buzzer,OUTPUT);  // Declara que o "buzzer" é uma saída
  Serial.begin(9600);  // Taxa de comunicação da porta serial
}

void loop() {
  valor = 0;  // Variável recebe o valor zero 
  valor = analogRead(sensor); //Valor recebe o valor lido pela porta analógica definida em "sensor" (A2)
  if (valor < 100) { // Se valor for menor que 100, faça: - OBS: Esse valor da variável pode ser alterado.
    digitalWrite(led, HIGH); // Comando para acender o led.
    buzina(); // Executa o método "buzina()"
  }
  else{ // Senão, faça:
    digitalWrite(led, LOW); // Comando para apagar o led.
    noTone(buzzer); // buzzer(piezo) não toca.
  }
}

void buzina() { // Método "buzina()"
  tone(buzzer,1500); // Valor de frequência referente ao som emitido pelo buzzer.
  delay(500);  // Intervalo de tempo em milissegundos
  noTone(buzzer);  // buzzer não toca
  delay(300); // Intervalo de tempo em milissegundos
}
