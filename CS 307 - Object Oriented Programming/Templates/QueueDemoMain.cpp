//=====================================================================
// QueueDemoMain.cpp
// Demonstration of the template queue
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main()
{
	queue<char> cQueue;

	// Push some stuff on the char queue
	cout << "Creating a char queue and pushing 10 values on it.\n\n";
	for(char i='A'; i<'K'; i++)
	{
		cQueue.push(i);
	}
	cout << "\tQueue.front = " << cQueue.front() << endl;
	cout << "\tQueue.back = " << cQueue.back() << endl << endl;

	cout << "Printing queue.front then popping values from the queue.\n\t ";
	while(!cQueue.empty())
	{
		cout << cQueue.front() << " ";
		cQueue.pop();
	}
	if(cQueue.empty())
		cout << "\n\nQueue is now empty.\n";
	else
		cout << "\n\nOops! Why isn't the queue empty?\n"; // Won't happen
	cout << "\n\n";
	
	return 0;
}