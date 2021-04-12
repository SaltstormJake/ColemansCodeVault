//=================================================================
// CaffeineBeverage.cpp
// Implementation class defining a parent class for a demonstration of
//   the Template Method Design Pattern
// Author:  Dr. Rick Coleman
//=================================================================
#include "CaffeineBeverage.h"
#include <iostream>

using namespace std;

//---------------------------------
// Class constructor
//---------------------------------
CaffeineBeverage::CaffeineBeverage()
{
}

//---------------------------------
// Class destructor
//---------------------------------
CaffeineBeverage::~CaffeineBeverage()
{
}
		 
//---------------------------------
// Prepare the beverage.  Same
//   basic algorithm for all
//   subclasses.
//---------------------------------
void CaffeineBeverage::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	addCondiments();
}
		 
//---------------------------------
// Same for all beverages
//--------------------------------- 
void CaffeineBeverage::boilWater()
{
	cout << "\tBoiling the water.\n";
}
		 
//-----------------------------------
// This part of the algorithm varies
//   so each subclass must handle it
//   in a different way.
//-----------------------------------
void CaffeineBeverage::brew()
{
	cout << "\tSubclasses must handle brewing.\n";
}
		 
//---------------------------------
// Same for all beverages
//---------------------------------
void CaffeineBeverage::pourInCup()
{
	cout << "\tPouring beverage into a cup.\n";
}
		 
//---------------------------------
// This part of the algorithm varies
//   so each subclass must handle it
//   in a different way.
//---------------------------------
void CaffeineBeverage::addCondiments()
{
	cout << "\tSubclasses must handle adding condiments.\n";
}

