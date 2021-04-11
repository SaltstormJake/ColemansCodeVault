//==================================================================
// Code203_Tree.h
// Demonstration of an AVL tree which keeps the tree nodes in as
//   near perfect balance as possible.
// Author: Dr. Rick Coleman
//==================================================================
#ifndef CODE203_TREE_H
#define CODE203_TREE_H

#include <iostream>
using namespace std;

struct AVLTreeNode
{
   int key;
   // Other data fields can be inserted here
   AVLTreeNode *left;
   AVLTreeNode *right;
   AVLTreeNode *parent;
   char balanceFactor;
};

class Code203_Tree
{
   private:
      AVLTreeNode   *root;

   public:
      Code203_Tree();            // Constructor
      ~Code203_Tree();           // Destructor
      void Insert(AVLTreeNode *n);
      void restoreAVL(AVLTreeNode *ancestor, AVLTreeNode *newNode);
      void adjustBalanceFactors(AVLTreeNode *end, AVLTreeNode *start);
      void rotateLeft(AVLTreeNode *n);
      void rotateRight(AVLTreeNode *n);
      void adjustLeftRight(AVLTreeNode *end, AVLTreeNode *start);
      void adjustRightLeft(AVLTreeNode *end, AVLTreeNode *start);
//    void Delete(int key);  // Not implemented yet
      void PrintTree();
   private:
      void ClearTree(AVLTreeNode *n);
      void Print(AVLTreeNode *n);
};

#endif