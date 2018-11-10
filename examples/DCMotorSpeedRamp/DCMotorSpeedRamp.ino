/*
 * Biblioteca DCMotorDriver
 * 
 * Exemplo de Rampa para acelerar e desacelerar um motor DC.
 * 
 * Autora: Ana Paula Messina - anapaula@tecdicas.com
 * https://www.tecdicas.com/
 * 
 * 10/11/2018
 * 
 * MIT
 */

#include <DCMotorDriver.h>

// Pinagem do Motor 1
#define ENA 3
#define IN1 2
#define IN2 4

// Instância do motor
DCMotorDriver Motor1(ENA, IN1, IN2);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Utilze o Plotter Serial.
  for(int x=0; x<255; x++)
  {
    Motor1.Forward(x);
    Serial.println(x);
    delay(50);
  }

  for(int x=255; x>0; x--)
  {
    Motor1.Forward(x);
    Serial.println(x);
    delay(50);
  }
}
