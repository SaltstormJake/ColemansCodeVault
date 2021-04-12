//=====================================================================
// StackDemoMain.cpp
// Demonstration of the template stack
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> iStack;
	int val;

	// Push some stuff on the int stack
	cout << "Creating an int stack and pushing 10 values on it.\n\n";
	for(int i=0; i<10; i++)
	{
		val = i * 100;
		iStack.push(val);
	}
	cout << "Printing stack.top then popping values from the stack.\n\t ";
	while(!iStack.empty())
	{
		cout << iStack.top() << " ";
		iStack.pop();
	}
	if(iStack.empty())
		cout << "\n\nStack is now empty.\n";
	else
		cout << "\n\nOops! Why isn't the stack empty?\n"; // Won't happen
	cout << "\n\n";

	return 0;
}