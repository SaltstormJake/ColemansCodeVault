//=====================================================================
// SetDemoMain.cpp
// Demonstration of the template set
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

// Simple structure
struct simple
{
	int X;
	char ch;
};

// Comparator function for set demo using X field of a struct simple
bool simpleLessThan(const simple &s1, const simple &s2) 
{
	return s1.X < s2.X;
}

int main(int argc, char **argv)
{
	// Create an empty set of characters
	set<char> cSet1;		
	set<char> cSet2;
	set<char> cSet3;

	cout << "Creating char set 1 and adding 10 characters.\n";
	for(char c = 'A'; c < 'K'; c++)
	{
		cSet1.insert(c);
	}
	cout << "Printing contents of char set 1 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet1.begin(); itr != cSet1.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << "\nInformation on cSet1:\n";
	cout << "\tsize = " << cSet1.size() << endl;
	cout << "\tmax_size = " << cSet1.max_size() << endl;
	cout << "\tcount = " << cSet1.count('A') << endl;
	cout << "Demonstrating find function on cSet1\n";
	char ch = 'C';
	set<char>::const_iterator cItr;
	cItr = cSet1.find(ch);
	cout << "\tfind('C') returned iterator to " << *cItr;
	cout << "\n\n";

	cout << "Creating char set 2 and adding 10 characters.\n";
	for(char c = 'E'; c < 'N'; c++)
	{
		cSet2.insert(c);
	}
	cout << "Printing contents of char set 2 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet2.begin(); itr != cSet2.end(); itr++)
	{
		cout << *itr << " ";
	}

	cout << "\n\nCreating char set 3 as a unnion of cSet1 and cSet2.\n";
	insert_iterator<set<char>>unionItr(cSet3, cSet3.begin()); // iterator for result
	set_union(cSet1.begin(), cSet1.end(), cSet2.begin(), cSet2.end(), unionItr);
	cout << "Printing contents of char set 3 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet3.begin(); itr != cSet3.end(); itr++)
	{
		cout << *itr << " ";
	}

	cout << "\n\nClearing set 3\n";
	cout << "Refilling set 3 as an intersection of cSet1 and cSet2.\n";
	cSet3.clear();
	insert_iterator<set<char>>intersectionItr(cSet3, cSet3.begin()); // iterator for result
	set_intersection(cSet1.begin(), cSet1.end(), cSet2.begin(), cSet2.end(), intersectionItr);
	cout << "Printing contents of char set 3 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet3.begin(); itr != cSet3.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << "\n\n";

	cout << "\n\nClearing set 3\n";
	cout << "Refilling set 3 as the difference of cSet1 and cSet2.\n";
	cSet3.clear();
	insert_iterator<set<char>>diffItr(cSet3, cSet3.begin()); // iterator for result
	set_difference(cSet1.begin(), cSet1.end(), cSet2.begin(), cSet2.end(), diffItr);
	cout << "Printing contents of char set 3 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet3.begin(); itr != cSet3.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << "\n\n";

	cout << "\n\nClearing set 3\n";
	cout << "Refilling set 3 as the symmetric difference of cSet1 and cSet2.\n";
	cSet3.clear();
	insert_iterator<set<char>>symDiffItr(cSet3, cSet3.begin()); // iterator for result
	set_symmetric_difference(cSet1.begin(), cSet1.end(), cSet2.begin(), cSet2.end(), symDiffItr);
	cout << "Printing contents of char set 3 using iterators begin and end.\n\t";
	for(set<char>::iterator itr = cSet3.begin(); itr != cSet3.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << "\n\n";

	// Create a set of 5 ints from an array of ints by giving the
	//   iterators for begin and end
	int iArr[] = {5, 10, 25, 50, 100};
	set<int> iSet(iArr, iArr+5);				

	// Create a set of struct simple with a required function to do "less than" comparison
	set<simple, bool(*)(const simple &, const simple &)> sSet(simpleLessThan); 


	cout << "Creating int set and initializing to {5, 10, 25, 50, 100}.\n";
	cout << "Printing contents of int set using iterators begin and end.\n\t";
	for(set<int>::iterator itr = iSet.begin(); itr != iSet.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << "\n\n";

	cout << "Creating struct simple set and adding 5 elements.\n";
	for(int i=0; i<5; i++)
	{
		simple *s1 = new simple();
		s1->X = i;
		s1->ch = 'A' + i;
		cout << "\tAdding " << s1->X << ", " << s1->ch << " to the set.\n";
		sSet.insert(*s1);
	}
	cout << "Getting iterators to two elements to demonstrate < operator.\n";
	set<simple, bool(*)(const simple &, const simple &)>::iterator simItr1 = sSet.begin();

	set<simple, bool(*)(const simple &, const simple &)>::iterator simItr2 = sSet.begin();
	simItr2++;
	simItr2++;
	cout << "Comparing simItr1 = " << simItr1->X << ", " << simItr1->ch << endl;
	cout << "    with  simItr2 = " << simItr2->X << ", " << simItr2->ch << endl;
	if(simpleLessThan(*simItr1, *simItr2))
		cout << "simItr1 is less than simItr2" << endl;
	else
		cout << "simItr1 is greater than simItr2" << endl;
	cout << "Printing contents of struct set using iterators begin and end.\n";
	for(simItr1 = sSet.begin(); simItr1 != sSet.end(); simItr1++)
	{
		cout << "\tStruct = " << simItr1->X << ", " << simItr1->ch << endl;
	}

	return 0;
}