//=============================================================
// TemplateMethodMain.cpp
// A demonstration of the Template Method design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include "Coffee.h"
#include "Tea.h"

#include <iostream>

using namespace std;

void main()
{
	cout << "=== Demonstration of the Template Method Design Pattern ===\n\n";
	cout << "I'd like a cup of coffee, please.\n\n";
	Coffee *coffee = new Coffee();
	coffee->prepareRecipe();
	cout << "\n\nI'd like a cup of tea, please.\n\n";
	Tea *tea = new Tea();
	tea->prepareRecipe();
	cout << "\n\n";
}