//---------------------------------------------------------------
// File: Code201_Tree.h
// Purpose: Header file for a demonstration of a binary tree
// Programming Language: C
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE201_TREE_H
#define CODE201_TREE_H
#include <stdio.h>

// Define a structure to be used as the tree node
typedef struct TreeNodeType
{
    int                 Key;
    float               fValue;
    int                 iValue;
    char                cArray[7];
    struct TreeNodeType *left;
    struct TreeNodeType *right;
}TreeNode;

// Function prototypes
void CreateTree();
int isEmpty();
TreeNode *SearchTree(int Key);
int Insert1(TreeNode *newNode);
int Insert2(int Key, float f, int i, char *cA);
int Delete(int Key);
void PrintOne(TreeNode *T);
void PrintTree();

#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif