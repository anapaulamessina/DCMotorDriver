/*
 * Biblioteca DCMotorDriver
 * 
 * Exemplo de rotacionar dois motores DC para as direções direita/esquerda e em seu próprio eixo.
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

void ForwardRight()
{
  Motor1.Forward();
  Motor2.Stop();
}

void ForwardLeft()
{
  Motor2.Forward();
  Motor1.Stop();
}

void BackwardRight()
{
  Motor1.Backward();
  Motor2.Stop();
}

void BackwardLeft()
{
  Motor2.Backward();
  Motor1.Stop();
}

void Axis()
{
  Motor1.Forward();
  Motor2.Backward();
}

void StopMotors()
{
  Motor1.Stop();
  Motor2.Stop();
}

void ForwardMotors()
{
  Motor1.Forward();
  Motor2.Forward();
}

void BackwardMotors()
{
  Motor1.Backward();
  Motor2.Backward();
}

void setup(){  Motor1.Speed(255);  Motor2.Speed(255); }

void loop()
{
  
  ForwardMotors();
  delay(1000);
  ForwardRight();
  delay(1500);
  ForwardLeft();
  delay(1500);
  StopMotors();
  delay(2000);
  BackwardMotors();
  delay(1000);
  BackwardRight();
  delay(1500);
  BackwardLeft();
  delay(1500);
  StopMotors();
  delay(2000);
  Axis();
  delay(5000);
  StopMotors();
  delay(2000);
}
