//==========================================================
// NYVeggiePizza.h
// Defines a pizza subclass.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef	NYVEGGIEPIZZA_H
#define NYVEGGIEPIZZA_H

#include "Pizza.h"

class NYVeggiePizza : public Pizza
{
	public:
		NYVeggiePizza();
		~NYVeggiePizza();
		void prepare();
		void bake();
		void cut();
		void box();
};
#endif