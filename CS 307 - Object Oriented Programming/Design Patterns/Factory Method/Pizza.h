//==========================================================
// Pizza.h
// Defines the parent class that all pizza types must 
//	inherit.
// Author: Dr. Rick Coleman
//==========================================================
#ifndef PIZZA_H
#define PIZZA_H

class Pizza
{
	public:
		Pizza();
		~Pizza();
		virtual void prepare();
		virtual void bake();
		virtual void cut();
		virtual void box();
};
#endif