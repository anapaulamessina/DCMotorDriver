#include "DCMotorDriver.h"

DCMotorDriver::DCMotorDriver(uint8_t enable, uint8_t input1, uint8_t input2)
{
	_en = enable;
	_in1 = input1;
	_in2 = input2;
	_speedPwm = 0;
	
	pinMode(enable, OUTPUT);
	pinMode(input1, OUTPUT);
	pinMode(input2, OUTPUT); 
}

void DCMotorDriver::Speed(uint8_t speedPwm)
{
	_speedPwm = speedPwm;
}

void DCMotorDriver::Move(uint8_t direction, uint8_t speed = 0 )
{
	if (speed != 0) _speedPwm = speed;
	
	_direction = direction;
	
	
	switch (_direction)
	{
		case 1:
			digitalWrite(_in1, 0);
			digitalWrite(_in2, 1);
			analogWrite(_en, _speedPwm);
			break;
		
		case 2:
			digitalWrite(_in1, 1);
			digitalWrite(_in2, 0);  
			analogWrite(_en, _speedPwm);
			break;
			
		case 3:
			analogWrite(_en, 0);
			break;
	}
}

void DCMotorDriver::Forward(uint8_t speed = 0)
{
	this->Move(1, speed);
}

void DCMotorDriver::Backward(uint8_t speed = 0)
{
	this->Move(2,speed);
}

void DCMotorDriver::Stop()
{
	this->Move(3);
}


