//=============================================================
// SingletonDemo.h
// This class demonstrates the Singleton Design Pattern.  
//   This is a design pattern in which one and only one 
//   instance of a class is allowed in a program.
// Author: Dr. Rick Coleman
//=============================================================
#ifndef SINGLETONDEMO_H
#define SINGLETONDEMO_H
#include <iostream>

using namespace std;

class SingletonDemo
{
	private:
		int instanceNumber;			  // Counter to show only 1 instance

		SingletonDemo();			  // Private constructor
	public:
		~SingletonDemo();			  // Public destructor
		int getInstanceNumber();	  // Return the number of this instance

	    // The following function is declared as a static member.  This means
	    // that it can be called using the syntax SingletonDemo::getInstance()
	    // without having to have an instance of the class already created.
	    // It holds a single static pointer to a SingletonDemo object
		static SingletonDemo *getInstance();
};

#endif

