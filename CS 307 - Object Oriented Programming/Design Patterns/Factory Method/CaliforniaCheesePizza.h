//==========================================================
// CaliforniaCheesePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CALIFORNIACHEESEPIZZA_H
#define CALIFORNIACHEESEPIZZA_H

#include "Pizza.h"

class CaliforniaCheesePizza : public Pizza
{
	public:
		CaliforniaCheesePizza();
		~CaliforniaCheesePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif