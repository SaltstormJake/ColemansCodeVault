//=============================================================
// StrategyMain.cpp
// A demonstration of the Strategy design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include <string>
#include <iostream>

using namespace std;

#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuckie.h"
#include "DecoyDuck.h"

void main(void)
{
	cout << "=== Demonstration of the Strategy Design Pattern ===\n\n";
	cout << "=============== Welcome to Sim-U-Duck ==============\n\n";
	cout << "I will create four kinds of ducks and then tell each\n";
	cout << "one to quack and fly.\n\n\n";

	cout << "Creating a MallardDuck\n";
	MallardDuck *md = new MallardDuck();
	cout << "\tQuack MallardDuck: \n\t\t";
	md->quack();
	cout << "\tFly MallardDuck: \n\t\t";
	md->fly();
	cout << endl;

	cout << "Creating a RedheadDuck\n";
	RedheadDuck *rhd = new RedheadDuck();
	cout << "\tQuack RedheadDuck: \n\t\t";
	rhd->quack();
	cout << "\tFly RedheadDuck: \n\t\t";
	rhd->fly();
	cout << endl;

	cout << "Creating a RubberDuckie\n";
	RubberDuckie *rd = new RubberDuckie();
	cout << "\tQuack RubberDuckie: \n\t\t";
	rd->quack();
	cout << "\tFly RubberDuckie: \n\t\t";
	rd->fly();
	cout << endl;

	cout << "Creating a DecoyDuck\n";
	DecoyDuck *dd = new DecoyDuck();
	cout << "\tQuack DecoyDuck: \n\t\t";
	dd->quack();
	cout << "\tFly DecoyDuck: \n\t\t";
	dd->fly();
	cout << endl;
}

