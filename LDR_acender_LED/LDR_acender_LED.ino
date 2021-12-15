// Definimos duas variáveis para o projeto.

#define LED 7                    // Variável LED, especificando a saída (digital).
#define LDR A0                  // Variável LDR, especificando a entrada (analogica).


void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);           // Especificando o monitor e a taxa de comunicação...
}

void loop()
{
  int varLuz= analogRead(LDR); // Definindo uma variável que recebe o valor lido.
  if (varLuz < 60){            // Se o valor lido for < 60 (depende do ambiente), ligue o LED.
    digitalWrite(LED, HIGH);
    Serial.println("Valor da varLuz = ");
    Serial.println(varLuz);
    Serial.println("Ambiente está escuro...");
    delay(500);
  } else {                     // Se o valor lido for > 60, desligue o LED.
    digitalWrite(LED, LOW);
    Serial.println("Valor da varLuz = ");
    Serial.println(varLuz);
    Serial.println("Ambiente está claro...");
    delay(500);
  }
  delay(500);
}
