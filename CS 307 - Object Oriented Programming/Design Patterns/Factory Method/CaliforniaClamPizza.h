//==========================================================
// CaliforniaClamPizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CALIFORNIACLAMPIZZA_H
#define CALIFORNIACLAMPIZZA_H

#include "Pizza.h"

class CaliforniaClamPizza : public Pizza
{
	public:
		CaliforniaClamPizza();
		~CaliforniaClamPizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif