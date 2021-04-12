//==========================================================
// ChicagoClamPizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "ChicagoClamPizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
ChicagoClamPizza::ChicagoClamPizza()
{
}

//----------------------------------------
// Class destructor
//----------------------------------------
ChicagoClamPizza::~ChicagoClamPizza()
{
}

// Implement all required functions from PizzaInterface

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void ChicagoClamPizza::prepare()
{
	cout << "\tPreparing the Chicago clam pizza." << endl;
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void ChicagoClamPizza::bake()
{
	cout << "\tBaking the Chicago clam pizza." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void ChicagoClamPizza::cut()
{
	cout << "\tCuting the Chicago clam pizza." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void ChicagoClamPizza::box()
{
	cout << "\tBoxing the Chicago clam pizza." << endl;
}