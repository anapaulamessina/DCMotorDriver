# Biblioteca DCMotorDriver

Controle para motores DC utilizando a plataforma Arduino.

## Incluindo na IDE Arduino
Para adicionar esta biblioteca na IDE oficial do Arduino, faça o download do arquivo .ZIP deste repositório. Abra a IDE e na aba ***Sketch > Incluir Biblioteca > Adicionar Biblioteca .ZIP*** 

## Como utilizar
Adicione a biblioteca `<DCMotorDriver.h>` em seu Sketch e instancie a classe chamando o construtor, informando os parâmetros `Enable`, `Input1` e `Input2` do driver Ponte H utilizado, como por exemplo os circuitos integrados L293D ou L298N.

## Lista de métodos

    DCMotorDriver(uint8_t enable, uint8_t input1, uint8_t input2) : Construtor da classe.
	void Speed(uint8_t speedPwm) : Define a velocidade do motor.
	void Forward(uint8_t speed = 0) : Define a direção do motor para Forward, a velocidade é opcional.
	void Backward(uint8_t speed = 0) : Define a direção do motor para Backward, a velocidade é opcional.
	void Stop() : Para o motor.
