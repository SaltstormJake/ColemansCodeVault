//---------------------------------------------------------------
// File: Code306_Graphs.cpp
// Purpose: Demonstration of Minimal Spanning Tree Algorithm in 
//        a graph.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: March, 2002
//---------------------------------------------------------------
#include <iostream>
#include <stdio.h> // Included to give access to sscanf()
#include <stdlib.h> // Included to give access to atoi()
#include <fstream>
#include <string.h>

using namespace std;

#define MAXVERTICES 6
#define Minimum(X,Y)  ((X)<(Y))?(X):(Y)
#ifndef MAXINT
#define MAXINT 65536
#endif

enum StatusType {intree, fringe, unseen};

void SpanningTree(int adjMatrix[MAXVERTICES][MAXVERTICES], int n, int v);
bool getNextLine(ifstream& inF, char *line, int lineLen);

int main(void)
{
    int            adjMatrix[MAXVERTICES][MAXVERTICES];
    ifstream    inFile;
    char        line[81], townName[32];
    int            i, num, vStart;

    // Try to open the file with the graph data
    inFile.open("graph.txt", ifstream::in); 
    if(!inFile.is_open())
    {
        // inFile.is_open() returns false if the file could not be found or
        //    if for some other reason the open failed.
        cout << "Unable to open file graph.txt. \nProgram terminating...\n";
        return 0;
    }

    getNextLine(inFile, line, 81);
    num = atoi(line);
    // Build the adjaceny matrix
    for(i=0; i<num; i++)
        {
        getNextLine(inFile, line, 81);
        sscanf(line, "%s %d %d %d %d %d %d", townName, &adjMatrix[i][0], 
            &adjMatrix[i][1], &adjMatrix[i][2], &adjMatrix[i][3], 
            &adjMatrix[i][4], &adjMatrix[i][5]);
        }

    cout << "\n\nEnter starting node number.\n";
    cin >> vStart;
    SpanningTree(adjMatrix, MAXVERTICES, vStart);
        return 0;
 }


//-------------------------------------------
// SpanningTree() 
// 
// Calculate the minimal spanning tree 
//  using Prim's algorithm.
//-------------------------------------------
void SpanningTree(int adjMatrix[MAXVERTICES][MAXVERTICES], int n, int v)
{
    int         ShortestDist[MAXVERTICES][2]; // 0 = shortest dist, 1 = from node
    StatusType  status[MAXVERTICES];
    int         nextTreeIdx = 0;            // Index in Tree where next node number will be stored
    int         Tree[MAXVERTICES][2];       // Tree being built. 0 = next vertex, 1 = last vertex
    int         w;                          // Current selected vertex
    int         edgeTotal = 0;
    int         i;
    int         minDist;
    int         fromNode = -1;

    //---------------- Initialization Section -----------------
    for(i=0; i<MAXVERTICES; i++)
        {
        ShortestDist[i][0] = MAXINT;
        ShortestDist[i][1] = -1;
        status[i] = unseen;
        Tree[i][0] = Tree[i][1] = -1;
        }

    //------------------- Setup Section -----------------------
    Tree[nextTreeIdx][0] = v;    // Add node v to Tree
    Tree[nextTreeIdx][1] = 0;    // This one had no "from" node
    nextTreeIdx++;
    ShortestDist[v - 1][0] = 0;  // Set shortest distanct from v to v = 0
    status[v - 1] = intree;      // Set status of v to intree
    for(i=0; i<MAXVERTICES; i++) // Search for nodes adjacent to v
        {
        if(adjMatrix[v - 1][i] > 0) // This one is adjacent
            {
            status[i] = fringe;                        // Set status to fringe
            ShortestDist[i][0] = adjMatrix[v - 1][i];  // Set shortest distance
            ShortestDist[i][1] = v;                    // Save where this is from
            }
        }

    //------------------ Main Loop Section ---------------------
    while(nextTreeIdx < MAXVERTICES)  // Repeatedly enlarge tree until it includes 
    {                                 // all vertices in the graph 
        // Find node w among those in the fringe at minimum distance from v 
        //   where v is any node in the tree
        minDist = MAXINT;
        for(i=0; i<MAXVERTICES; i++)
            if((ShortestDist[i][0] < minDist) && (status[i] == fringe))
                {
                minDist = ShortestDist[i][0];
                w = i + 1;                              // Set to node number not index
                }
        Tree[nextTreeIdx][0] = w;                       // Add node to tree
        Tree[nextTreeIdx][1] = ShortestDist[w - 1][1];  // Save from node
        status[w - 1] = intree;                         // Set status of w to intree
        edgeTotal += minDist;                           // Add distance to running total
        for(i=0; i<MAXVERTICES; i++)
            {                                           // For each node adjacent to w
            if((adjMatrix[w - 1][i] > 0) && (status[i] == unseen)) // This one is adjacent and not in fringe
                status[i] = fringe;                     // Set this one to in fringe
            // Set new minimum distance if appropriate
            if((adjMatrix[w - 1][i] > 0) && (status[i] == fringe)) // This one is adjacent and not in fringe
                ShortestDist[i][0] = Minimum(ShortestDist[i][0], adjMatrix[w - 1][i]);
            if(ShortestDist[i][0] == adjMatrix[w - 1][i])
                ShortestDist[i][1] = w;  // Set from node 
            }
        nextTreeIdx++;
        }

     //-------------------- Report Section ---------------------
    cout << "\n\nMinimal Spanning Tree:\n";
    cout << "----------------------\n";
    for(i=1; i<MAXVERTICES; i++)
        cout << "(" << Tree[i][1] << " to " << Tree[i][0] << ") dist = " <<
        ShortestDist[i][0] << "\n";
    cout << "----------------------\n";

    cout << "\nTotal distance = " << edgeTotal << "\n";
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