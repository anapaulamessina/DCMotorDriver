/*
 * Biblioteca DCMotorDriver
 * 
 * Exemplo para controlar dois motores DC.
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

// Pinagem do Motor 2
#define ENB 5
#define IN3 6
#define IN4 7

// Instâncias dos motores
DCMotorDriver Motor1(ENA, IN1, IN2);
DCMotorDriver Motor2(ENB, IN3, IN4);

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Motor1.Speed(255);
  Motor1.Forward();
  delay(1000);
  Motor1.Stop();
  delay(1000);

  Motor2.Speed(100);
  Motor2.Backward();
  delay(1000);
  Motor2.Stop();
  delay(1000);
}
