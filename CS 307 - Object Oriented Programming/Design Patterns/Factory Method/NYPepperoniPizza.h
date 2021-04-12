//==========================================================
// NYPepperoniPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	NYPEPPERONIPIZZA_H
#define NYPEPPERONIPIZZA_H

#include "Pizza.h"

class NYPepperoniPizza : public Pizza
{
	public:
		NYPepperoniPizza();
		~NYPepperoniPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif