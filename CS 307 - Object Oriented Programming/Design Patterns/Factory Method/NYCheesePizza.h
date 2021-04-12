//==========================================================
// NYCheesePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	NYCHEESEPIZZA_H
#define NYCHEESEPIZZA_H

#include "Pizza.h"

class NYCheesePizza : public Pizza
{
	public:
		NYCheesePizza();
		~NYCheesePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif