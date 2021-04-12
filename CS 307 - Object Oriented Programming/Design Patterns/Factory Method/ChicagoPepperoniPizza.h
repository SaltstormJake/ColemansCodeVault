//==========================================================
// ChicagoPepperoniPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CHICAGOPEPPERONIPIZZA_H
#define CHICAGOPEPPERONIPIZZA_H

#include "Pizza.h"

class ChicagoPepperoniPizza : public Pizza
{
	public:
		ChicagoPepperoniPizza();
		~ChicagoPepperoniPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif