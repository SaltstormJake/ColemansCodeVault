//==========================================================
// CaliforniaVeggiePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CALIFORNIAVEGGIEPIZZA_H
#define CALIFORNIAVEGGIEPIZZA_H

#include "Pizza.h"

class CaliforniaVeggiePizza : public Pizza
{
	public:
		CaliforniaVeggiePizza();
		~CaliforniaVeggiePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif