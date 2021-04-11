//---------------------------------------------------------------
// File: Code301_Graphs.cpp
// Purpose: Demonstration of implementing a graph as an
//     adjacency matrix
// Programming Language: C++
// Author: Dr. Rick Coleman
//
// This code reads data from a text file which defines the
//  following undirected graph and adjacency matrix:
//                                       0 1 2 3 4 5 6 7
//           (0)           (1)---+      +---------------+
//             \           /     |     0|0|0|1|0|0|0|0|0|
//               \       /       |      +---------------+
//               (2)---(3)       |     1|0|0|0|1|0|0|0|1|
//                |     |\       |      +---------------+
//                |     |  \     |     2|1|0|0|1|0|1|0|0|
//                |     |   (4)  |      +---------------+
//                |     |   /|   |     3|0|1|1|0|1|0|1|0|
//                |     | /  |   |      +---------------+
//               (5)---(6)--(7)--+     4|0|0|0|1|0|0|1|1|
//                                      +---------------+
//                                     5|0|0|1|0|0|0|1|0|
//   Graph structures are stored in     +---------------+
//   an array.                         6|0|0|0|1|1|1|0|1|
//                                      +---------------+
//                                     7|0|1|0|0|1|0|1|0|
//                                      +---------------+
//---------------------------------------------------------------
#include <iostream>
#include <stdlib.h> // Included to give access to atoi()
#include <fstream>
#include <string.h>

using namespace std;

#define NUMNODES 8	

// Structure used to define the graph nodes
struct Node
	{
		int		index;		// Node number
		char	data[64];	// Some data stored in the graph
	};



bool getNextLine(ifstream& inF, char *line, int lineLen);

int main(void)
{
	Node		GraphNodes[NUMNODES];			// Array of nodes in the graph
	int			AdjMatrix[NUMNODES][NUMNODES];	// Matrix to define the graph links
	ifstream	inFile;
	char		line[81];
	int			i, j, idx, numLinks, link;


	// Initialize Adjacency Matrix to all 0s
	for(i=0; i<NUMNODES; i++)
		for(j=0; j<NUMNODES; j++)
			AdjMatrix[i][j] = 0;

	// Try to open the file with the graph data
    inFile.open("GraphData.txt", ifstream::in); 
    if(!inFile.is_open())
    {
        // inFile.is_open() returns false if the file could not be found or
        //    if for some other reason the open failed.
        cout << "Unable to open file graph.txt. \nProgram terminating...\n";
        return 0;
    }

	// Since we know ahead of time there will be 8 nodes in the graph we can
	// read and skip the line giving the number of nodes.
	getNextLine(inFile, line, 81);

	// Read all the graph data and build the adjacency matrix
	for(i=0; i<NUMNODES; i++)
	{
		// Read the graph ID and use this as it's index in the graph
		getNextLine(inFile, line, 81);
		idx = atoi(line);
		GraphNodes[idx].index = idx;

		// Read the graph string data and store it
		getNextLine(inFile, line, 81);
		strcpy(GraphNodes[idx].data, line);

		// Read the number of links for this node
		getNextLine(inFile, line, 81);
		numLinks = atoi(line);

		// Read all links and set the marker in the adjacency matrix
		for(j=0; j<numLinks; j++)
		{
			getNextLine(inFile, line, 81);  // Read next line
			link = atoi(line);				// Get link index
			AdjMatrix[idx][link] = 1;		// Set the link
		}
	}

	inFile.close();

	// Print data for testing ...
	cout << "\n\nDemonstration of a Graph implemented as an adjacency matrix.\n\n";
	cout << "(0)           (1)---+\n";
	cout << "  \\           /     |\n";
	cout << "    \\       /       |\n";
	cout << "    (2)---(3)       |\n";
	cout << "     |     |\\       |\n";
	cout << "     |     |  \\     |\n";
	cout << "     |     |   (4)  |\n";
	cout << "     |     |   /|   |\n";
	cout << "     |     | /  |   |\n";
	cout << "    (5)---(6)--(7)--+\n\n";
	cout << "                         GRAPH DATA\n";
	cout << "------------------------------------------------------------\n";
	cout << "Index         Data String             Links to\n";
	cout << "------------------------------------------------------------\n";
	for(i=0; i<NUMNODES; i++)
	{
		cout << "  " << GraphNodes[i].index << "        " << 
			GraphNodes[i].data << "\t";
		for(j=0; j<NUMNODES; j++)
		{
			if(AdjMatrix[i][j] == 1)
				cout << GraphNodes[j].index << "   ";
		}
		cout << "\n"; // end of line
	}
	cout << "------------------------------------------------------------\n\n";
	cout << " Adjacency Matrix:\n\n";
	cout << "  0 1 2 3 4 5 6 7\n";
	cout << " +---------------+\n";

	for(i=0; i<NUMNODES; i++)
	{
		cout << i << "|";
		for(j=0; j<NUMNODES; j++)
		{
			cout << AdjMatrix[i][j] << "|";
		}
		cout << "\n +---------------+\n";
	}

	return(0);
}


//-------------------------------------------
// GetNextLine()
// Read the next line from the file.
//-------------------------------------------
bool getNextLine(ifstream& inF, char *line, int lineLen)
{
    int    done = false;

    while(!done)
    {
        inF.getline(line, lineLen);
        
        if(inF.good())    // If a line was successfully read
        {
           if(strlen(line) == 0)  // Skip any blank lines
                continue;
            else if(line[0] == '#')  // Skip any comment lines
                continue;
            else done = true;    // Got a valid data line so return with this line
        }
        else
        {
            strcpy(line, "");
            return false;	// Flag end of file with null string
        }
    } // end while
	return true; // Flag successful read
}