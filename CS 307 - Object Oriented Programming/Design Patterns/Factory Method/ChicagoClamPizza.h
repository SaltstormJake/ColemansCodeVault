//==========================================================
// ChicagoClamPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CHICAGOCLAMPIZZA_H
#define CHICAGOCLAMPIZZA_H

#include "Pizza.h"

class ChicagoClamPizza : public Pizza
{
	public:
		ChicagoClamPizza();
		~ChicagoClamPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif