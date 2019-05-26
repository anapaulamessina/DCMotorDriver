# Biblioteca DCMotorDriver

Controle para motores DC utilizando as plataformas Arduino e NodeMCU.

## Incluindo na IDE Arduino
Para adicionar esta biblioteca na IDE oficial do Arduino, faça o download do arquivo .ZIP deste repositório. Abra a IDE e na aba ***Sketch > Incluir Biblioteca > Adicionar Biblioteca .ZIP*** 

## Como utilizar
Adicione o header `<DCMotorDriver.h>` em seu Sketch e instancie a classe chamando o construtor, informando os parâmetros `Enable`, `Input1` e `Input2` do driver Ponte H utilizado, como por exemplo os circuitos integrados L293D ou L298N.

    DCMotorDriver Motor1(ENA, IN1, IN2);

## Lista de métodos

    DCMotorDriver(int enable, int input1, int input2) : Construtor da classe.
	void Speed(int speedPwm) : Define a velocidade do motor.
	void Forward(int speed /*=0*/) : Define a direção do motor para Forward, a velocidade é opcional.
	void Backward(int speed /*=0*/) : Define a direção do motor para Backward, a velocidade é opcional.
	void Stop() : Para o motor.

## Exemplos
Acesse a pasta `examples` para consultar Sketches com exemplos de código utilizando a biblioteca DCMotorDriver.

 - [DCMotorLeftRight](https://github.com/anapaulamessina/DCMotorDriver/blob/master/examples/DCMotorLeftRight/DCMotorLeftRight.ino)
 - [DCMotorSpeedRamp](https://github.com/anapaulamessina/DCMotorDriver/blob/master/examples/DCMotorSpeedRamp/DCMotorSpeedRamp.ino)
 - [TwoDCMotors](https://github.com/anapaulamessina/DCMotorDriver/blob/master/examples/TwoDCMotors/TwoDCMotors.ino)
 - [DCMotorSpeedRampV_NodeMCU](https://github.com/anapaulamessina/DCMotorDriver/blob/master/examples/DCMotorSpeedRampV_NodeMCU/DCMotorSpeedRampV_NodeMCU.ino)
