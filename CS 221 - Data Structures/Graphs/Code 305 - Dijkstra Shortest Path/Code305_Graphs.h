//---------------------------------------------------------------
// File: Code305_Graphs.h
// Purpose: Demonstration of Dijkstra's Shortest Path algorithm 
//      for traversing a graph
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE305_GRAPHS_H
#define CODE305_GRAPHS_H

struct Link
{
    int        link;     // Number of adjacent node
    int        weight;  // Weight of link
};

struct Node
{
    int        data;        // In this example just the node number
    Link    links[5];    // A small array for demo only
};

enum StatusType {intree, fringe, unseen};

#define MAXVERTICES        6    // Only for this example
#define MAXLINKS        5    // Only for this example
#define Minimum(X,Y)    ((X) < (Y)) ? (X) : (Y)

#ifndef MAXINT
#define MAXINT 65536
#endif

#endif