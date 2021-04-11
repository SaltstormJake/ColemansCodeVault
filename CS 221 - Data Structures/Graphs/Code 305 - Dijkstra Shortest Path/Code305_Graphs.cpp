//---------------------------------------------------------------
// File: Code305_Graphs.cpp
// Purpose: Demonstration of a binary tree Dijkstra's Shortest
//        Path algorithm for traversing a graph
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: March, 2002
//---------------------------------------------------------------
#include <iostream>
#include <stdio.h> // Included to give access to sscanf()
#include <fstream>
#include <string.h>
#include "Code305_Graphs.h"

using namespace std;

int ShortestPath(Node AdjacencyList[], int n, int v, int w);
bool getNextLine(ifstream& inF, char *line, int lineLen);

int main(void)
{
    Node        AdjacencyList[6];
    ifstream    inFile;
    char        line[81];
    int            count;
    /* int        i;    */
    int        v, w, SP;

    // Try to open the file with the graph data
    inFile.open("graph.txt", ifstream::in); 
    if(!inFile.is_open())
    {
        // inFile.is_open() returns false if the file could not be found or
        //    if for some other reason the open failed.
        cout << "Unable to open file graph.txt. \nProgram terminating...\n";
        return 0;
    }

    count = 0;
    // Read all the graph data and build the adjacency list
    // Note: This is not a general purpose implementation of an
    //        adjacency list for a graph.
    while(getNextLine(inFile, line, 81))
    {
        sscanf(line, "%d %d %d %d %d", &AdjacencyList[count].data,
                                       &AdjacencyList[count].links[0].link,
                                       &AdjacencyList[count].links[0].weight,
                                       &AdjacencyList[count].links[1].link,
                                       &AdjacencyList[count].links[1].weight);
        count++;

    }
    inFile.close();

    // Print data for testing ...
//    for(int i=0; i<MAXVERTICES; i++)
//        cout << "Node # " << AdjacencyList[i].data << ": Link0 = " <<
//            AdjacencyList[i].links[0].link << ",  Wt0 = " << 
//            AdjacencyList[i].links[0].weight << ", Link1 = " <<
//            AdjacencyList[i].links[1].link << ", Wt1 = " <<
//            AdjacencyList[i].links[1].weight << "\n";
    //

     cout << "Enter the starting and ending node number then press [Enter]\n";
     cin >> v >> w;
     if((v < 1) || (v > MAXVERTICES) || (w < 1) || (w > MAXVERTICES) ||    (v == w))
     {
         cout << "Invalid input.  Program terminated.\n";
         return(0);
     }

     cout << "Shortest Path = ";
     SP = ShortestPath(AdjacencyList, MAXVERTICES, v, w);
     cout << "Shortest path from node " << v << " to node " << w <<
         " = " << SP << "\n\n";
     cout << "Press enter to terminate...";
     cin.get();
     return(0);
}

//-------------------------------------------
// ShortestPath()
//
// Find shortest path from node v to
//   node w using Dijkstra's shortest
//   path algorithm.
// Returns total number of units in shortest
//   path
//-------------------------------------------
int ShortestPath(Node AdjacencyList[], int n, int v, int w)
{
    int        MinDistance;
    int        ShortestDist[MAXVERTICES];
    int        W[MAXVERTICES];
    int        nextWIdx = 0;
    int        i;
    int        wNode;        // Index of node being considered
    int        tempIdx;    // Temporary use index
    StatusType    status[MAXVERTICES];

    // -------------------- INITIALIZATION SECTION -------------------- 
    for(i=0; i<MAXVERTICES; i++)
    {
        W[i] = -1;                    // Init W to empty
        ShortestDist[i] = MAXINT;    // Init shortest dists to infinity
        status[i] = unseen;            // Init all nodes to unseen
    }
    // ------------------------ SETUP SECTION -------------------------
    W[nextWIdx] = v;        // Add first node to W 
    nextWIdx++;                // Increment index into W
    ShortestDist[v-1] = 0;    // Set shortest dist from v to v
    status[v-1] = intree;    // Set status of v in W

    // Set shortest distance and status from v to all nodes adjacent to it
    for(i=0; i<MAXLINKS; i++)
    {
        ShortestDist[AdjacencyList[v-1].links[i].link - 1] =
            AdjacencyList[v-1].links[i].weight;
        status[AdjacencyList[v-1].links[i].link - 1] = fringe;
    }
    // ---------------------- MAIN lOOP SECTION -----------------------
    // Repeatedly enlarge W until it includes all vertices in the graph
    while(nextWIdx < MAXVERTICES)
    {
        // Find the vertex n in V - W at the minimum distance from v
        MinDistance = MAXINT;
        for(i=0; i<MAXVERTICES; i++)
        {
            if(status[i] == fringe)
            {
                if(ShortestDist[i] < MinDistance)
                {
                    MinDistance = ShortestDist[i];
                    wNode = i + 1;    // Convert index to node number
                }
            }
        }

        // Add w to W
        W[nextWIdx] = wNode;
        status[wNode - 1] = intree;
        nextWIdx++;

        // Update the shortest distances to vertices in V - W
        for(i=0; i<MAXLINKS; i++)
        {
            tempIdx = AdjacencyList[wNode -1].links[i].link - 1;
            ShortestDist[tempIdx] = Minimum(ShortestDist[tempIdx],
                ShortestDist[wNode - 1] + AdjacencyList[wNode - 1].links[i].weight);
            if(status[tempIdx] == unseen)
            	status[tempIdx] = fringe;
        }
    } // End while
    return(ShortestDist[w - 1]);
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
            return false;    // Flag end of file with null string
        }
    } // end while
    return true; // Flag successful read
}