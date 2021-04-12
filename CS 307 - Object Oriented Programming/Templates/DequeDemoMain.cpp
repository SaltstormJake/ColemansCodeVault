//=====================================================================
// DequeDemoMain.cpp
// Demonstration of the template deque
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
   deque<string> DD;

   cout << "Creating string deque and adding 3 strings using push_front.\n";
   DD.push_front("Deque the halls 1");
   DD.push_front("Deque the halls 2");
   DD.push_front("Deque the halls 3");

   cout << "Creating string deque and adding 3 strings using push_back.\n\n";
   DD.push_back("Deque the halls 4");
   DD.push_back("Deque the halls 5");
   DD.push_back("Deque the halls 6");

   cout << "Loop by index:" << endl;

   unsigned int i;
   for(i=0; i < DD.size(); i++)
   {
      cout << DD[i] << endl;
   }

   cout << endl << "Constant Iterator:" << endl;

   deque<string>::const_iterator cii;
   for(cii=DD.begin(); cii!=DD.end(); cii++)
   {
      cout << *cii << endl;
   }

   cout << endl << "Reverse Iterator:" << endl;

   deque<string>::reverse_iterator rii;
   for(rii=DD.rbegin(); rii!=DD.rend(); rii++)
   {
      cout << *rii << endl;
   }

   cout << "Information on the vector:\n";
   cout << "\tsize = " << DD.size() << endl;
   cout << "\tmax_size = " << DD.max_size() << endl;
   cout << "\tDD[0] = " << DD[0] << endl;
   cout << "\tDD[2] = " << DD[2] << endl << endl;
   cout << "Calling swap(DD[0], DD[2]);\n";
   swap(DD[0], DD[2]);
   cout << "\tDD[0] = " << DD[0] << endl;
   cout << "\tDD[2] = " << DD[2] << endl << endl;
	
   return 0;
}