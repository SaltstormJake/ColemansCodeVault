//==========================================================
// ChicagoCheesePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CHICAGOCHEESEPIZZA_H
#define CHICAGOCHEESEPIZZA_H

#include "Pizza.h"

class ChicagoCheesePizza : public Pizza
{
	public:
		ChicagoCheesePizza();
		~ChicagoCheesePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif