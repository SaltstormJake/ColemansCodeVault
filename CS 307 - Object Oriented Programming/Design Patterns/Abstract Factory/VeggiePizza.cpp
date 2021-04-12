//==========================================================
// VeggiePizza.cpp
// Implementation of a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#include "VeggiePizza.h"
#include "iostream"

using namespace std;

//----------------------------------------
// Class constructor
//----------------------------------------
VeggiePizza::VeggiePizza(PizzaIngredientFactory *pif)
{
	pizzaIngredientFactory = pif;
}

//----------------------------------------
// Class destructor
//----------------------------------------
VeggiePizza::~VeggiePizza()
{
}

// Implement all required functions from PizzaInterface
//---------------------------------------
// Set the name (type) of this pizza.
//---------------------------------------
void VeggiePizza::setName(string n)
{
	name = n;
}
//---------------------------------------
// Get the pizza name. 
//---------------------------------------
string *VeggiePizza::getName()
{
	string *fullName = new string();
	*fullName = name + " with ";
	if(dough != NULL)
		fullName->append(dough->getName());
	if(sauce != NULL)
	{
		fullName->append("\n\tand ");
		fullName->append(sauce->getName());
	}
	if(cheese != NULL)
	{
		fullName->append(" topped with ");
		fullName->append(cheese->getName());
	}
	if(veggies != NULL)
	{
		fullName->append(" and\n\t");
		for(int i=0; i<3; i++)
		{
			fullName->append(veggies[i].getName());
			if(i==0)
				fullName->append(", ");
			else if (i==1)
				fullName->append(", and ");
			else
				fullName->append(".");
		}
	}
	return fullName;
}

//-----------------------------------------
// Prepare the pizza
//-----------------------------------------
void VeggiePizza::prepare()
{
	cout << "\tPreparing the veggie pizza.\n";
	dough = pizzaIngredientFactory->createDough();
	sauce = pizzaIngredientFactory->createSauce();
	cheese = pizzaIngredientFactory->createCheese();
	veggies = pizzaIngredientFactory->createVeggies();
}

//-----------------------------------------
// Bake the pizza
//-----------------------------------------
void VeggiePizza::bake()
{
	cout << "\tBake at 400 for 25 minutes." << endl;
}

//-----------------------------------------
// Cut the pizza
//-----------------------------------------
void VeggiePizza::cut()
{
	cout << "\tCuting the pizza into diagonal slices." << endl;
}

//-----------------------------------------
// Box the pizza
//-----------------------------------------
void VeggiePizza::box()
{
	cout << "\tPlacing pizza in official pizza store box." << endl;
}