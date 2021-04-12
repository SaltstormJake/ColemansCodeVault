//=====================================================================
// MapDemoMain.cpp
// Demonstration of the templates map and multimap
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int main()
{
   map<int, string> Employees;

   //---------------------------------------------------------------------
   //                      Demonstrate map template
   //---------------------------------------------------------------------
   // Assignment using array index notation
   cout << "Creating map<int, string> Employees and adding 5 members\n";
   Employees[5234] = "Mike C.";
   Employees[3374] = "Charlie M.";
   Employees[1923] = "David D.";
   Employees[7582] = "John A.";
   Employees[5328] = "Peter Q.";

   // Print using iterator
   cout << "Printing all members using iterators through the pair objects\n";
   for( map<int,string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
   {
       cout << "\t" <<(*ii).first << ": " << (*ii).second << endl;
   }

   cout << "\nPrinting all members using their index notation\n";
   cout << "\tEmployees[5234]=" << Employees[5234] << endl;
   cout << "\tEmployees[3374]=" << Employees[3374] << endl;
   cout << "\tEmployees[1923]=" << Employees[1923] << endl;
   cout << "\tEmployees[7582]=" << Employees[7582] << endl;
   cout << "\tEmployees[5328]=" << Employees[5328] << endl << endl;

   cout << "Using find to locate an element with Employees.find(3374)\n";
   cout << "  Note: find returns a pair object.\n";
   map<int, string>::iterator itr = Employees.find(3374);
   cout << "\tFound:  [" << (*itr).first << ", " << (*itr).second << "]" << endl << endl;

   cout << "Information on the map:\n";
   cout << "\tsize = " << Employees.size() << endl;
   cout << "\tmax_size = " << Employees.max_size() << endl << endl;

   //---------------------------------------------------------------------
   //                      Demonstrate multimap template
   //---------------------------------------------------------------------
   // Compare (<) function not required since it is built into string class.
   // else declaration of a comparison function would have to be included
   // in the multimap definition i.e. multimap<string, int, compare> m;
   
   cout << "Creating multimap m and adding 6 members\n";

   multimap<string, int> m;

   m.insert(pair<string, int>("a", 1));
   m.insert(pair<string, int>("c", 2));
   m.insert(pair<string, int>("b", 3));
   m.insert(pair<string, int>("b", 4));
   m.insert(pair<string, int>("a", 5));
   m.insert(pair<string, int>("b", 6));

   cout << "Number of elements with key a: " << m.count("a") << endl;
   cout << "Number of elements with key b: " << m.count("b") << endl;
   cout << "Number of elements with key c: " << m.count("c") << endl;

  cout << "Elements in m: " << endl;
  for (multimap<string, int>::iterator it = m.begin(); it != m.end(); it++)
   {
       cout << "\t  [" << (*it).first << ", " << (*it).second << "]" << endl;
   }

   pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;

   // equal_range(b) returns pair<iterator,iterator> representing the range
   // of element with key b
   ppp = m.equal_range("b");

   // Loop through range of maps of key "b"
   cout << endl << "Range of \"b\" elements:" << endl;
   for (multimap<string, int>::iterator it2 = ppp.first; it2 != ppp.second; it2++)
   {
       cout << "  [" << (*it2).first << ", " << (*it2).second << "]" << endl;
   }

   return 0;
}