#ifndef DCMotorDriver_h
#define DCMotorDriver_h

#include <Arduino.h>

class DCMotorDriver
{
	public:
			DCMotorDriver(uint8_t enable, uint8_t input1, uint8_t input2);
			void Speed(uint8_t speedPwm);
			void Forward(uint8_t speed = 0);
			void Backward(uint8_t speed = 0);
			void Stop();
			
	private:
			void Move(uint8_t direction, uint8_t speed = 0);
			uint8_t _en;
			uint8_t _in1;
			uint8_t _in2;
			uint8_t _speedPwm;
			uint8_t _direction;
};

#endif