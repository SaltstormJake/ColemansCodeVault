//---------------------------------------------------------------
// File: TreeMain.cpp
// Purpose: Main file for a demonstration of a binary tree
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: February, 2002
//---------------------------------------------------------------
#include <iostream>
#include <string.h>
#include "Code202_Tree.h"

using namespace std;

int main(void)
{
    Code202_Tree    *theTree;
    TreeNode        *newNode;

    // Do initialization stuff
    theTree = new Code202_Tree();

    cout <<"Building tree...\n";
    // Do simple insert of 15 nodes into tree.
    // Insert with keys in the order.
    //   8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15 
    // First 5 nodes are inserted using Insert1(). Remainder using Insert2()

    // Node 1
    newNode = new TreeNode();
    newNode->Key = 8;
    newNode->iValue = 2;
    newNode->fValue = 2.3f;
    strcpy(newNode->cArray, "Node1");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);

    // Node 2
    // Note: Each time a new node is allocated we reuse the same pointer
    // Access to the previous node is not lost because it is not in the tree.
    newNode = new TreeNode();
    newNode->Key = 4;
    newNode->iValue = 4;
    newNode->fValue = 3.4f;
    strcpy(newNode->cArray, "Node2");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);

    // Node 3
    newNode = new TreeNode();
    newNode->Key = 12;
    newNode->iValue = 8;
    newNode->fValue = 4.5f;
    strcpy(newNode->cArray, "Node3");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);

    // Node 4
    newNode = new TreeNode();
    newNode->Key = 2;
    newNode->iValue = 16;
    newNode->fValue = 5.6f;
    strcpy(newNode->cArray, "Node4");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);

    // Node 5
    newNode = new TreeNode();
    newNode->Key = 6;
    newNode->iValue = 32;
    newNode->fValue = 6.7f;
    strcpy(newNode->cArray, "Node5");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);

    // Node 6
    // Remainder of the nodes are inserted using Insert2()
    theTree->Insert(10, 7.8f, 64, "Node6");

    // Node 7
    theTree->Insert(14, 8.9f, 128, "Node7");

    // Node 8
    theTree->Insert(1, 9.0f, 256, "Node8");

    // Node 9
    theTree->Insert(3, 0.9f, 512, "Node9");

    // Node 10
    theTree->Insert(5, 9.8f, 1024, "Node10");

    // Node 11
    theTree->Insert(7, 8.7f, 2048, "Node11");

    // Node 12
    theTree->Insert(9, 7.6f, 4096, "Node12");

    // Node 13
    theTree->Insert(11, 6.5f, 8192, "Node13");

    // Node 14
    theTree->Insert(13, 5.4f, 16384, "Node14");

    // Node 15
    theTree->Insert(15, 4.3f, 32768, "Node15");

    cout <<"All nodes inserted\n";

    // Print the tree
    cout <<"-----------------------------------------------------\n";
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    // Find some nodes and print them
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing the search function\n";
    newNode = theTree->SearchTree(13);
    if(newNode != NULL)
    {
        theTree->PrintOne(newNode);
        delete newNode; // Remember this is a duplicate node of the one in
                       // in the tree and main() is responsible for deleting it.
    }
    else
        cout <<"Search key not found.\n";

    newNode = theTree->SearchTree(6);
    if(newNode != NULL)
    {
        theTree->PrintOne(newNode);
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

    newNode = theTree->SearchTree(1);
    if(newNode != NULL)
    {
        theTree->PrintOne(newNode);
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

    newNode = theTree->SearchTree(25); // Note: there is no Key=25 in the tree
    if(newNode != NULL)
    {
        theTree->PrintOne(newNode);
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

    // Delete some nodes
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing delete function\n";
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a leaf...\n";
    theTree->Delete(7);    // Delete a known leaf
    theTree->PrintTree();
     cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a node with 2 children...\n";
    theTree->Delete(12);    // Delete a node known to have 2 children
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a node with 1 child...\n";
    theTree->Delete(6);    // Delete a node known to have only 1 child
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing trying to delete a node that is not in the tree...\n";
    theTree->Delete(7);    // Delete a node that is not there
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting the root...\n";
    theTree->Delete(8);    // Delete the root
    theTree->PrintTree();
    cout <<"Done.\nPress Enter to continue...";
    cin.get();

    cout <<"-----------------------------------------------------\n";
    return 0;
}