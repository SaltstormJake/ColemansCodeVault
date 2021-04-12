//==========================================================
// CaliforniaPepperoniPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CALIFORNIAPEPPERONIPIZZA_H
#define CALIFORNIAPEPPERONIPIZZA_H

#include "Pizza.h"

class CaliforniaPepperoniPizza : public Pizza
{
	public:
		CaliforniaPepperoniPizza();
		~CaliforniaPepperoniPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif