#include <LiquidCrystal.h>

// Preparação do Arduino, este código irá rodar uma única vez
void setup()
{
  // Colocamos o pino 12 do Arduino como OUTPUT (saída)
  pinMode(10, OUTPUT);
}

// Este código é chamado automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop()
{
  // Ativamos o pino 12 (colocando 5v nele)  
  digitalWrite(10, HIGH);

  // Aguardamos 1 segundo
  delay(1000);

  // Desligamos o pino 12
  digitalWrite(10, LOW);

  // Aguardamos mais um segundo
  delay(1000);

  // Este código irá se repetir eternamente
}
