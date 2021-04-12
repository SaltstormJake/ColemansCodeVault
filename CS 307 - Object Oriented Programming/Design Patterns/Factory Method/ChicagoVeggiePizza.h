//==========================================================
// ChicagoVeggiePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	CHICAGOVEGGIEPIZZA_H
#define CHICAGOVEGGIEPIZZA_H

#include "Pizza.h"

class ChicagoVeggiePizza : public Pizza
{
	public:
		ChicagoVeggiePizza();
		~ChicagoVeggiePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif