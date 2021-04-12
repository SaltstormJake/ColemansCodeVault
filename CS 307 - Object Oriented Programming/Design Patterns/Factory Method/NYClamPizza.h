//==========================================================
// NYClamPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	NYCLAMPIZZA_H
#define NYCLAMPIZZA_H

#include "Pizza.h"

class NYClamPizza : public Pizza
{
	public:
		NYClamPizza();
		~NYClamPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif