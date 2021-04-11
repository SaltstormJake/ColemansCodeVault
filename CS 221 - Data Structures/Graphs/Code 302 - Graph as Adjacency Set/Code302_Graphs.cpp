//---------------------------------------------------------------
// File: Code302_Graphs.cpp
// Purpose: Demonstration of implementing a graph as an
//     adjacency set
// Programming Language: C++
// Author: Dr. Rick Coleman
//
// This code reads data from a text file which defines the
//  following undirected graph and adjacency set:
//                                 
//           (0)           (1)---+ 
//             \           /     |
//               \       /       |
//               (2)---(3)       |
//                |     |\       |
//                |     |  \     | 
//                |     |   (4)  |
//                |     |   /|   |
//                |     | /  |   |
//               (5)---(6)--(7)--+
// 
//  [ 0 ]-->[ 1 ]-->[ 2 ]-->[ 3 ]-->[ 4 ]-->[ 5 ]-->[ 6 ]-->[ 7 ]
//   |       |       |       |       |       |       |       |
//   v       v       v       v       v       v       v       v
//  [->2]   [->3]   [->0]   [->1]   [->3]   [->2]   [->3]   [->1]
//           |       |       |       |       |       |       |
//           v       v       v       v       v       v       v
//          [->7]   [->3]   [->2]   [->6]   [->6]   [->4]   [->4]
//                   |       |       |               |       |
//                   v       v       v               v       v
//                  [->5]   [->4]   [->7]           [->5]   [->6]
//                           |                       |
//                           v                       v
//                          [->6]                   [->7]
//---------------------------------------------------------------
#include <iostream>
#include <stdlib.h> // Included to give access to atoi()
#include <fstream>
#include <string.h>

using namespace std;

#define NUMNODES 8	

// Forward declaration for Link structure
struct Link;

// Structure used to define the graph nodes
struct Node
	{
		int		index;		// Node number
		char	data[64];	// Some data stored in the graph
		Link	*Links;		// Pointer to linked list of links
		Node	*next;	
	};

// Structure used to define links between nodes
struct Link
	{
		Node	*linkTo;	// Pointer to Node linked to
		Link	*next;
	};

bool getNextLine(ifstream& inF, char *line, int lineLen);

int main(void)
{
	Node		*head;			// Pointer to head of list of nodes
	Node		*tail;			// Pointer to tail of list of nodes
	Node		*newNode;		// Pointer to new node to add to list
	Node		*temp1, *temp2;	// Pointer used in search
	Link		*newLink;		// Pointer to new link to add to list
	Link		*tempLink;		// Temporary pointer to end of link list
	ifstream	inFile;
	char		line[81];
	int			numNodes;
	int			i, j, idx, numLinks, link;

	// Init list pointers
	head = tail = NULL;

    inFile.open("GraphData.txt", ifstream::in); 
    if(!inFile.is_open())
    {
        // inFile.is_open() returns false if the file could not be found or
        //    if for some other reason the open failed.
        cout << "Unable to open file graph.txt. \nProgram terminating...\n";
        return 0;
    }

	// Read the number of nodes in the list.
	getNextLine(inFile, line, 81);
	numNodes = atoi(line);

	// Read all the graph data and build the linked list of nodes
	for(i=0; i<numNodes; i++)
	{
		// Create a node structure
		newNode = new Node();
		newNode->next = NULL;
		newNode->Links = NULL;

		// Add this node to the list
		if(head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}

		// Read the graph ID
		getNextLine(inFile, line, 81);
		idx = atoi(line);
		newNode->index = idx;

		// Read the graph string data and store it
		getNextLine(inFile, line, 81);
		strcpy(newNode->data, line);

		// Read the number of links for this node
		getNextLine(inFile, line, 81);
		numLinks = atoi(line);

		// Read and skip all the links.
		// Note: In the data file we only have the IDs of the nodes to
		//   link to.  Since there can be references to nodes that have
		//   not been added to the list yet we read the file once to create
		//   the list of nodes then we read the file again to create the links.
		for(j=0; j<numLinks; j++)
		{
			getNextLine(inFile, line, 81); 
		}
	}

	inFile.close();

	// Now that all nodes have been added to the adjacency set, 
	// reopen the file to read the links.

    inFile.open("GraphData.txt", ifstream::in); 
    if(!inFile.is_open())
    {
        // inFile.is_open() returns false if the file could not be found or
        //    if for some other reason the open failed.
        cout << "Unable to open file graph.txt. \nProgram terminating...\n";
        return 0;
    }

	// Read and skip the number of nodes in the list. We already know this
	getNextLine(inFile, line, 81);

	// Read all the graph data and build the lists of links
	for(i=0; i<numNodes; i++)
	{
		// Read the graph ID
		getNextLine(inFile, line, 81);
		idx = atoi(line);

		// Search the list for the node with this index
		temp1 = head;
		while((temp1 != NULL) && (temp1->index != idx))
		{
			temp1 = temp1->next;
		}
		// Check temp1.  This check should not be necessary unless someone has
		// been messing with the data file, while this application is running.
		if(temp1 == NULL)
		{
			cout << "Error: Cannot find node with ID = " << idx << "\n" <<
				" program terminating.\n\n";
			return 0;
		}

		// Read and skip the graph string data
		getNextLine(inFile, line, 81);

		// Read the number of links for this node
		getNextLine(inFile, line, 81);
		numLinks = atoi(line);

		// Read all links and create the links list
		// Note: This time we have all the nodes created so for each link we
		//  search for the node with that ID and set the pointer in the link
		//  structure.
		for(j=0; j<numLinks; j++)
		{
			// Create a new link structure
			newLink = new Link();
			newLink->next = NULL;

			// Add link to this node's list
			if(temp1->Links == NULL)  // Insert first link in this node's list
				temp1->Links = newLink; 
			else
				tempLink->next = newLink;  
			tempLink = newLink; // Set tempLink pointing to the current link

			getNextLine(inFile, line, 81);  // Read the link index
			link = atoi(line);

			temp2 = head;
			// Find the node with this index
			while((temp2 != NULL) && (temp2->index != link))
			{
				temp2 = temp2->next;
			}
			// Check temp2.  This check should not be necessary unless someone has
			// been messing with the data file, while this application is running.
			if(temp2 == NULL)
			{
				cout << "Error: Cannot find node with ID = " << link << "\n" <<
					" program terminating.\n\n";
				return 0;
			}

			// Set the node pointer for this link
			tempLink->linkTo = temp2;
		}
	}

	inFile.close();
	
	// Print data for testing ...
	cout << "\n\nDemonstration of a Graph implemented as an adjacency set.\n\n";
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
	temp1 = head;
	while(temp1 != NULL)
	{
		cout << "  " << temp1->index << "        " << 
			temp1->data << "\t";
		tempLink = temp1->Links;	// Set pointer to head of links list
		while(tempLink != NULL)
		{
			cout << tempLink->linkTo->index << "   ";
			// Note we use the pointer to a Link and read it's pointer to a
			// Node which is used to read the node index.
			tempLink = tempLink->next;
		}
		cout << "\n"; // end of line
		temp1 = temp1->next;
	}
	cout << "------------------------------------------------------------\n\n";

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