//====================================================================
// SecuritySystem.h
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

class SecuritySystem
{
	public:
		SecuritySystem();
		~SecuritySystem();
		void on();
		void off();
};

#endif