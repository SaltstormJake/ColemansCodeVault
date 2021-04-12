//=====================================================================
// PriorityQueueDemoMain.cpp
// Demonstration of the template priority queue
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main()
{
	priority_queue<int>piQueue;
	int val;

	// Push some stuff on the int queue
	cout << "Creating an int priority_queue and pushing 10 values on it.\n";
	cout << "  Values are pushed from smallest to largest.\n\n";
	for(int i=0; i<10; i++)
	{
		val = i * 100;
		piQueue.push(val);
	}
	cout << "\tpiQueue.top = " << piQueue.top() << endl << endl;

	cout << "Printing queue.top then popping values from the queue.\n";
	cout << "   Items popped from largest to smallest.\n\n\t ";
	while(!piQueue.empty())
	{
		cout << piQueue.top() << " ";
		piQueue.pop();
	}
	if(piQueue.empty())
		cout << "\n\nQueue is now empty.\n";
	else
		cout << "\n\nOops! Why isn't the queue empty?\n"; // Won't happen
	cout << "\n\n";

	return 0;
}