//=====================================================================
// VectorDemoMain.cpp
// Demonstration of the template vector
// Author: Dr. Rick Coleman
//=====================================================================
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
   vector<string> SS;

   cout << "Creating string vector and adding 3 strings.\n";
   SS.push_back("The number is 10");
   SS.push_back("The number is 20");
   SS.push_back("The number is 30");

   cout << "Loop by index:" << endl;

   unsigned int i;
   for(i=0; i < SS.size(); i++)
   {
      cout << SS[i] << endl;
   }

   cout << endl << "Loop by Forward Iterator:" << endl;

   vector<string>::const_iterator cii;
   for(cii = SS.begin(); cii != SS.end(); cii++)
   {
      cout << *cii << endl;
   }

   cout << endl << "Loop by Reverse Iterator:" << endl;

   vector<string>::reverse_iterator rii;
   for(rii = SS.rbegin(); rii != SS.rend(); rii++)
   {
      cout << *rii << endl;
   }

   cout << "\nInformation on the vector:\n";
   cout << "\tsize = " << SS.size() << endl;
   cout << "\tcapacity = " << SS.capacity() << endl;
   cout << "\tmax_size = " << SS.max_size() << endl;

   cout << "\tSS[0] = " << SS[0] << endl;
   cout << "\tSS[2] = " << SS[2] << endl << endl;

   // Demonstration of a template function
   cout << "Calling swap(SS[0], SS[2]);\n";
   swap(SS[0], SS[2]);
   cout << "\tSS[0] = " << SS[0] << endl;
   cout << "\tSS[2] = " << SS[2] << endl << endl;
	
   SS[0] = "Can I do this?";
   cout << "SS[0] = " << SS[0] << endl;
   return 0;
}