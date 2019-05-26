/*
 * Biblioteca DCMotorDriver
 * 
 * Exemplo de Rampa para acelerar e desacelerar um motor DC (Versão NodeMCU ESP-12e)
 * 
 * Autora: Ana Paula Messina - anamessina.apm@gmail.com
 * https://www.tecdicas.com/
 * 
 * 26/05/2019
 * 
 * MIT
 */

#include <DCMotorDriver.h>

// Pinagem do Motor 1 NodeMCU
#define ENA 14 // D5
#define IN1 5  // D1
#define IN2 4  // D2

// Instância do motor
DCMotorDriver Motor1(ENA, IN1, IN2);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  // Utilze o Plotter Serial.
  for(int x=0; x<1023; x++)
  {
    Motor1.Forward(x);
    Serial.println(x);
    delay(10);
  }

  for(int x=1023; x>0; x--)
  {
    Motor1.Forward(x);
    Serial.println(x);
    delay(10);
  }
}
