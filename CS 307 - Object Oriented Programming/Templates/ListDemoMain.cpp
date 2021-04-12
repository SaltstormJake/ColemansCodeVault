//=====================================================================
// ListDemoMain.cpp
// Demonstration of the template list
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <list>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
    list<int> L;

    cout << "Demonstrating push_back, push_front, and insert in a list.\n\n";
    L.push_back(1);             // Insert a new element at the end
    L.push_front(3);            // Insert a new element at the beginning
    L.insert(++L.begin(), 2);   // Insert "2" before position of first argument
    L.push_front(4);            // Insert a new element at the beginning
    L.push_back(5);             // Insert a new element at the end
    L.push_back(6);             // Insert a new element at the end

    list<int>::iterator i;
    cout << "Elements in the list (in order):\n\t";
    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl << endl;

    cout << "Information on the list:\n";
    cout << "\tsize = " << L.size() << endl;
    cout << "\tmax_size = " << L.max_size() << endl << endl;

    cout << "Sorting the list:\n";
    L.sort();
    cout << "Elements in the list (in order):\n\t";
    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl << endl;

    cout << "Demonstrating pop_back, pop_front, and remove from a list.\n";
    L.pop_back();           // Remove element at the end
    L.pop_front();          // Remove element at the beginning
    L.remove(3);          // Remove element from middle
    cout << "Elements in the list (in order):\n\t";
    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl << endl;

    cout << "Demonstrating erase() to remove all but two elements.\n";
    L.erase(++L.begin(), --L.end());
    cout << "Elements in the list:\n\t";
    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl << endl;

    cout << "Demonstrating assign(5, 2) to put five 2s in the list.\n";
    L.assign(5, 2);
    cout << "Elements in the list:\n\t";
    for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
    cout << endl << endl;

    return 0;
}