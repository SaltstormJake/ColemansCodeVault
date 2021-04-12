//=============================================================
// AdapterMain.cpp
// A demonstration of the Adapter design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include <iostream>

using namespace std;

#include "TurkeyAdapter.h"
#include "Turkey.h"
void main(void)
{
	cout << "=== Demonstration of the Adapter Design Pattern ===\n\n";
	cout << "=============== Welcome to Sim-U-Duck ==============\n\n";
	cout << "The original Sim-U-Duck but with a new foul on the block.\n\n\n";

	cout << "Creating a Turkey\n";
	Turkey *t = new Turkey();
	cout << "\tbut, giving it a TurkeyAdapter so it appears to be a duck.\n\n";
	TurkeyAdapter *ta = new TurkeyAdapter(t);
	cout << endl;
	cout << "Calling TurkeyAdapter::quack.  Quack you turkey: \n\n";
	ta->quack();
	cout << endl;
	cout << "Calling TurkeyAdapter::fly.  Fly you turkey: \n\n";
	ta->fly();
	cout << endl;

	cout << "You know, that Turkey sure acts like a duck.\n";
	cout << endl;
}

