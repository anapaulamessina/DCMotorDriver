/*
 * Biblioteca DCMotorDriver
 * 
 * Autora: Ana Paula Messina - anapaula@tecdicas.com
 * https://www.tecdicas.com/
 * 
 * 10/11/2018
 * 
 * MIT
 */
 
#ifndef DCMotorDriver_h
#define DCMotorDriver_h

#include <Arduino.h>

class DCMotorDriver
{
	public:
			DCMotorDriver(int enable, int input1, int input2);
			void Speed(int speedPwm);
			void Forward(int speed = 0);
			void Backward(int speed = 0);
			void Stop();
			
	private:
			void Move(int direction, int speed = 0);
			int _en;
			int _in1;
			int _in2;
			int _speedPwm;
			int _direction;
};

#endif