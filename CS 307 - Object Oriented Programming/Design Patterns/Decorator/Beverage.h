//=================================================================================
// Beverage.h
// Interface file defining the parent class of a class to be decorated to 
//   demonstrate the Decorator Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
using namespace std;

class Beverage
{
	protected:
		string m_sDescription;
		double m_dCost;
		Beverage *m_Decoratee; // What this Beverage is decorating

	public:
		Beverage();
		~Beverage();
		string getDescription();
		void setDescription(string desc);
		double getCost();
		void setCost(double cost);
		void setDecoratee(Beverage *dec);	// Set what this Beverage is decorating
};

#endif