//=============================================================
// SingletonMain.cpp
// A demonstration of the Singleton design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include <string>
#include <iostream>
#include "SingletonDemo.h"

using namespace std;

void main(void)
{
	cout << "=== Demonstration of the Singleton Design Pattern ===\n\n";
	// Get a reference to the single instance of SingletonDemo
	cout << "Getting a reference to the single instance of SingletonDemo\n";
	cout << "with the command: " <<
		"SingletonDemo *theSDa = SingletonDemo::getInstance();\n";
	SingletonDemo *theSDa = SingletonDemo::getInstance();
	cout << "Calling theSDa->getInstanceNumber(). Results = " << 
		theSDa->getInstanceNumber()<< "\n\n";

	// Note: the next command is commented out because it will not work.
	//       The compiler gives the error: "cannot access private member 
	//       declared in class 'SingletonDemo', i.e. we cannot create
	//       another instance of the singleton.

//	SingletonDemo *theSD2 = new SingletonDemo();
	
	cout << "Getting a second reference to the single instance of SingletonDemo\n";
	cout << "with the command: " <<
		"SingletonDemo *theSDb = SingletonDemo::getInstance();\n";
	SingletonDemo *theSDb = SingletonDemo::getInstance();
	cout << "Calling theSDb->getInstanceNumber(). Results = " << 
		theSDb->getInstanceNumber()<< "\n\n";
}

