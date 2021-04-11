//---------------------------------------------------------------
// File: Code204_Tree.h
// Purpose: Header file for a demonstration of a binary tree
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#pragma once

#include <iostream>

using namespace std;

// Define a structure to be used as the tree node
struct TreeNode
{
    int      Key;
    float    fValue;
    int      iValue;
    char     cArray[7];
    TreeNode *left;
    TreeNode *right;
};

class Code204_Tree
{
	private:
		TreeNode *root;

	public:
		Code204_Tree();
		~Code204_Tree();
		void CreateTree();
		bool isEmpty();
		TreeNode *SearchTree(int Key);
		bool Insert(TreeNode *newNode);
		bool Insert(int Key, float f, int i, char *cA);
		TreeNode *Delete(int Key);
		void PrintOne(TreeNode *T);
		void PrintTree();
	private:
		void ClearTree(TreeNode *T);
		TreeNode *DupNode(TreeNode * T);
		void PrintAll(TreeNode *T);
};
