//---------------------------------------------------------------
// File: TreeMain.cpp
// Purpose: Main file for a demonstration of a binary tree
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: August, 2016
//---------------------------------------------------------------
#include <iostream>
#include <string.h>
#include "Code204_Tree.h"

using namespace std;

int main(void)
{
    Code204_Tree	*theTree;
    TreeNode		*newNode;

    // Do initialization stuff
    theTree = new Code204_Tree();

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
    strcpy(newNode->cArray, "Node_A");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);
    cout << "Adding node with key 8.\n";

    // Node 2
    // Note: Each time a new node is allocated we reuse the same pointer
    // Access to the previous node is not lost because it is not in the tree.
    newNode = new TreeNode();
    newNode->Key = 4;
    newNode->iValue = 4;
    newNode->fValue = 3.4f;
    strcpy(newNode->cArray, "Node_B");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);
    cout << "Adding node with key 4.\n";

    // Node 3
    newNode = new TreeNode();
    newNode->Key = 12;
    newNode->iValue = 8;
    newNode->fValue = 4.5f;
    strcpy(newNode->cArray, "Node_C");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);
    cout << "Adding node with key 12.\n";

    // Node 4
    newNode = new TreeNode();
    newNode->Key = 2;
    newNode->iValue = 16;
    newNode->fValue = 5.6f;
    strcpy(newNode->cArray, "Node_D");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);
    cout << "Adding node with key 2.\n";

    // Node 5
    newNode = new TreeNode();
    newNode->Key = 6;
    newNode->iValue = 32;
    newNode->fValue = 6.7f;
    strcpy(newNode->cArray, "Node_E");
    newNode->left = newNode->right = NULL;
    theTree->Insert(newNode);
    cout << "Adding node with key 6.\n";

    // Node 6
    // Remainder of the nodes are inserted using Insert2()
    theTree->Insert(10, 7.8f, 64, "Node_F");
    cout << "Adding node with key 10.\n";

    // Node 7
    theTree->Insert(14, 8.9f, 128, "Node_G");
    cout << "Adding node with key 14.\n";

    // Node 8
    theTree->Insert(1, 9.0f, 256, "Node_H");
    cout << "Adding node with key 1.\n";

    // Node 9
    theTree->Insert(3, 0.9f, 512, "Node_I");
    cout << "Adding node with key 3.\n";

    // Node 10
    theTree->Insert(5, 9.8f, 1024, "Node_J");
    cout << "Adding node with key 5.\n";

    // Node 11
    theTree->Insert(7, 8.7f, 2048, "Node_K");
    cout << "Adding node with key 7.\n";

    // Node 12
    theTree->Insert(9, 7.6f, 4096, "Node_L");
    cout << "Adding node with key 9.\n";

    // Node 13
    theTree->Insert(11, 6.5f, 8192, "Node_M");
    cout << "Adding node with key 11.\n";

    // Node 14
    theTree->Insert(13, 5.4f, 16384, "Node_N");
    cout << "Adding node with key 13.\n";

    // Node 15
    theTree->Insert(15, 4.3f, 32768, "Node_L");
    cout << "Adding node with key 15.\n";

    cout <<"All nodes inserted\n";
    cout <<"Press Enter to see a listing of the nodes in the tree...";
    cin.get();

    // Print the tree
    cout <<"-----------------------------------------------------\n";
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"\n-----------------------------------------------------\n";

    // Find some nodes and print them
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing the search function\n";
    cout <<"-----------------------------------------------------\n";
    cout << "Searching for the node with key = 13 (a leaf node).\n";
    newNode = theTree->SearchTree(13);
    if((newNode != NULL) && (newNode->Key == 13))
	{
        theTree->PrintOne(newNode);
        cout << "Successfully found the node with key = 13.\n\n";
        delete newNode;  // Remember this is a duplicate node of the one in
			    // in the tree and main() is responsible for deleting it.
	}
    else
        cout <<"Search key not found.\n";

    cout << "Searching for the node with key = 6 (a node with 2 children).\n";
    newNode = theTree->SearchTree(6);
    if((newNode != NULL) && (newNode->Key == 6))
    {
        theTree->PrintOne(newNode);
        cout << "Successfully found the node with key = 6.\n\n";
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

	cout << "Searching for the node with key = 10 (a node with 1 child).\n";
    newNode = theTree->SearchTree(10);
    if((newNode != NULL) && (newNode->Key == 10))
    {
        theTree->PrintOne(newNode);
        cout << "Successfully found the node with key = 10.\n\n";
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

    cout << "Searching for the node with key = 8 (the root node).\n";
    newNode = theTree->SearchTree(8);
    if((newNode != NULL) && (newNode->Key == 8))
    {
        theTree->PrintOne(newNode);
        cout << "Successfully found the root node with key = 8.\n\n";
        delete newNode;
    }
    else
        cout <<"Search key not found.\n";

    cout << "Searching for the node with key = 25 (a key not in the tree).\n";
    newNode = theTree->SearchTree(25); // Note: there is no Key=25 in the tree
    if(newNode != NULL)
    {
        theTree->PrintOne(newNode);
        delete newNode;
    }
    else
        cout <<"Successfully did not find the node with key = 25.\n\n";

    cout <<"Press Enter to continue...";
    cin.get();

    // Delete some nodes
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing delete function\n";
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a leaf...\n";
    newNode = theTree->Delete(7);    // Delete a known leaf
    if(newNode->Key == 7)
    {
        cout << "Successfully removed and returned the leaf node with key = 7.\n\n";
        delete newNode; // Delete this one to avoid a memory leak before reusing newNode
    }

    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a node with 1 child on the left...\n";
    newNode = theTree->Delete(6);    // Delete a node known to have only 1 child
    if(newNode->Key == 6)
    {
        cout << "Successfully removed and returned the node with 1 child on the left and key = 6.\n\n";
        delete newNode; // Delete this one to avoid a memory leak before reusing newNode
    }
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a node with 1 child on the right...\n";
    newNode = theTree->Delete(10);    // Delete a node known to have only 1 child
    if(newNode->Key == 10)
    {
        cout << "Successfully removed and returned the node with 1 child on the left and key=10.\n\n";
        delete newNode; // Delete this one to avoid a memory leak before reusing newNode
    }
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";
	
    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting a node with 2 children...\n";
    newNode = theTree->Delete(12);    // Delete a node known to have 2 children
    if(newNode->Key == 12)
    {
        cout << "Successfully removed and returned the node with 2 children and key = 12\n";
        delete newNode; // Delete this one to avoid a memory leak before reusing newNode
    }
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing deleting the root (with 2 children)...\n";
    theTree->Delete(8);    // Delete the root
    if(newNode->Key == 8)
    {
        cout << "Successfully removed and returned the root node with 2 children and key = 8.\n\n";
        delete newNode; // Delete this one to avoid a memory leak before reusing newNode
    }
    theTree->PrintTree();
    cout <<"Done.\nPress Enter to continue...";
    cin.get();

    cout <<"-----------------------------------------------------\n";

    cout <<"-----------------------------------------------------\n";
    cout <<"Testing trying to delete a node that is not in the tree...\n";
    newNode = theTree->Delete(32);    // Delete a node that is not there
    if(newNode == NULL)
        cout << "Successfully returned a NULL pointer when the node was not found.\n\n";
    theTree->PrintTree();
    cout <<"Press Enter to continue...";
    cin.get();
    cout <<"-----------------------------------------------------\n";

    return 0;
}
