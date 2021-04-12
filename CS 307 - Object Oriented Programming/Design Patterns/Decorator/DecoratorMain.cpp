//=============================================================
// DecoratorMain.cpp
// A demonstration of the Decorator design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include <string>
#include <iostream>

#include "Beverage.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "Whip.h"
#include "Mocha.h"
#include "Soy.h"
#include "Milk.h"

using namespace std;

void main()
{
	Beverage *bev, *deco, *beverage;

	cout << "Welcome to StarBuzz.  May I take your order?\n\n";
	cout << "\tI'll have a dark roast...\n";
	bev = new DarkRoast();							// Create a DarkRoast
	cout << "\t\twith whipped cream\n\n";
	deco = new Whip();								// Create a Whip
	deco->setDecoratee(bev);						// Make it the beverage's decorator
	beverage = deco;								// Set a pointer to the composite beverage
	cout.precision(2);								// Output all costs with 2 decimal places
	cout << "That will be $" << fixed << beverage->getCost() << " for a " <<
		beverage->getDescription() << " please.\n\n";
	delete bev;

	cout << "Welcome to StarBuzz.  May I take your order?\n\n";
	cout << "\tI'll have a house blend...\n";
	bev = new HouseBlend();							// Create a HouseBlend
	cout << "\t\twith milk\n";
	deco = new Milk();								// Create a Milk
	deco->setDecoratee(bev);						// Make it the beverage's decorator
	beverage = deco;								// Set a pointer to the composite beverage
	cout << "\t\tand a double mocha.\n";
	deco = new Mocha();								// Add mocha 1
	deco->setDecoratee(beverage);
	beverage = deco;								// Set a pointer to the composite beverage
	deco = new Mocha();								// Add mocha 2
	deco->setDecoratee(beverage);
	beverage = deco;								// Set a pointer to the composite beverage
	cout.precision(2);								// Output all costs with 2 decimal places
	cout << "That will be $" << fixed << beverage->getCost() << " for a " <<
		beverage->getDescription() << " please.\n\n";
	delete bev;

	cout << "Welcome to StarBuzz.  May I take your order?\n\n";
	cout << "\tI'll have a decaf...\n";
	bev = new Decaf();								// Create a Decaf
	cout << "\t\twith milk\n";
	deco = new Milk();								// Create a Milk
	deco->setDecoratee(bev);						// Make it the beverage's decorator
	beverage = deco;								// Set a pointer to the composite beverage
	cout << "\t\tand soy\n";
	deco = new Soy();								// Add soy
	deco->setDecoratee(beverage);
	beverage = deco;								// Set a pointer to the composite beverage
	cout << "\t\tand mocha\n";
	deco = new Mocha();								// Add mocha
	deco->setDecoratee(beverage);
	beverage = deco;								// Set a pointer to the composite beverage
	cout << "\t\tand whipped cream.\n";
	deco = new Whip();								// Add whip
	deco->setDecoratee(beverage);
	beverage = deco;								// Set a pointer to the composite beverage
	cout.precision(2);								// Output all costs with 2 decimal places
	cout << "That will be $" << fixed << beverage->getCost() << " for a " <<
		beverage->getDescription() << " please.\n\n";
	delete bev;

}