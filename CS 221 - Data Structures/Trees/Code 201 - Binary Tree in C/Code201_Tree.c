//---------------------------------------------------------------
// File: Code201_Tree.c
// Purpose: Implementation file for a demonstration of a binary tree
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: February, 2002
//---------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Code201_Tree.h"

// Declare this as static so no code outside of this source
// can access it.
static TreeNode *root;    // Declare global pointer to root of the tree

// Prototype this function so CreateTree can call it
static void ClearTree(TreeNode *T); 

//--------------------------------------------
// Function: CreateTree()                                    
// Purpose: Initialize tree to empty.                        
//--------------------------------------------
void CreateTree()
{
    ClearTree(root);
    root = NULL;
    return;
}

//--------------------------------------------
// Function: ClearTree()                                    
// Purpose: Perform a recursive traversal of
//        a tree destroying all nodes.  
// Note: Function is declared static so it cannot
//        be accessed from outside                      
//--------------------------------------------
static void ClearTree(TreeNode *T)
{
    if(T==NULL) return;  // Nothing to clear
    if(T->left != NULL) ClearTree(T->left); // Clear left sub-tree
    if(T->right != NULL) ClearTree(T->right); // Clear right sub-tree
    free(T);    // Destroy this node
    return;
}

//--------------------------------------------
// Function: isEmpty()                                     
// Purpose: Return TRUE if tree is empty.                   
//--------------------------------------------
int isEmpty()
{
    return(root==NULL);
}

//--------------------------------------------
// Function: DupNode()                                    
// Purpose: Duplicate a node in the tree.  This
//        is used to allow returning a complete
//        structure from the tree without giving
//        access into the tree through the pointers.               
// Preconditions: None
// Returns: Pointer to a duplicate of the node arg
// Note: Function is declared static so it cannot
//        be accessed from outside                      
//--------------------------------------------
static TreeNode *DupNode(TreeNode * T)
{
    TreeNode *dupNode;

    dupNode = (TreeNode *)malloc(sizeof(TreeNode));
    *dupNode = *T;    // Copy the data structure
    dupNode->left = NULL;    // Set the pointers to NULL
    dupNode->right = NULL;
    return dupNode;
}

//--------------------------------------------
// Function: SearchTree()                                    
// Purpose: Perform an iterative search of the tree and     
//        return a pointer to a treenode containing the  
//        search key or NULL if not found.               
// Preconditions: None
// Returns: Pointer to a duplicate of the node found
//--------------------------------------------
TreeNode *SearchTree(int Key)
{
    int      ValueInTree = FALSE;
    TreeNode *temp;

    temp = root;
    while((temp != NULL) && (temp->Key != Key))
    {
        if(Key < temp->Key)
            temp = temp->left;  // Search key comes before this node.
        else
            temp = temp->right; // Search key comes after this node 
    }
    if(temp == NULL) return temp;    // Search key not found
    else
        return(DupNode(temp));    // Found it so return a duplicate
}

//--------------------------------------------
// Function: Insert()                                        
// Insert a new node into the tree.                
// Preconditions: None
// Returns: int (TRUE if successful, FALSE otherwise)
//--------------------------------------------
int Insert1(TreeNode *newNode)
{
    TreeNode *temp;
    TreeNode *back;

    temp = root;
    back = NULL;

    while(temp != NULL) // Loop till temp falls out of the tree 
    {
        back = temp;
        if(newNode->Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }

    // Now attach the new node to the node that back points to 
    if(back == NULL) // Attach as root node in a new tree 
        root = newNode;
    else
    {
        if(newNode->Key < back->Key)
            back->left = newNode;
        else
            back->right = newNode;
    }
   return(TRUE);
}

//--------------------------------------------
// Function: Insert2()                                        
// Insert a new node into the tree.                
// Preconditions: None
// Returns: int (TRUE if successful, FALSE otherwise)
//--------------------------------------------
int Insert2(int Key, float f, int i, char *cA)
{
    TreeNode *newNode;

    // Create the new node and copy data into it
    newNode = (TreeNode *)malloc(sizeof(TreeNode));
    newNode->Key = Key;
    newNode->fValue = f;
    newNode->iValue = i;
    strcpy(newNode->cArray, cA);
    newNode->left = newNode->right = NULL;

    // Call Insert1() to do the actual insertion
    return(Insert1(newNode));
}

//--------------------------------------------
// Function: Delete()                                        
// Purpose: Delete a node from the tree.                    
// Preconditions: Tree contains the node to delete
// Returns: int (TRUE if successful, FALSE otherwise)                               
//--------------------------------------------
int Delete(int Key)
{
    TreeNode *back;
    TreeNode *temp;
    TreeNode *delParent;    // Parent of node to delete
    TreeNode *delNode;      // Node to delete

    temp = root;
    back = NULL;

    // Find the node to delete 
    while((temp != NULL) && (Key != temp->Key))
    {
        back = temp;
        if(Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(temp == NULL) // Didn't find the one to delete 
    {
        printf("Key not found. Nothing deleted.\n");
        return FALSE;
    }
    else
    {
        if(temp == root) // Deleting the root 
        {
            delNode = root;
            delParent = NULL; 
        }                
        else
        {
            delNode = temp;
            delParent = back;
        }
    }

    // Case 1: Deleting node with no children or one child 
    if(delNode->right == NULL)
    {
        if(delParent == NULL)    // If deleting the root    
        {
            root = delNode->left;
            free(delNode);
            return TRUE;
        }
        else
        {
            if(delParent->left == delNode)
                delParent->left = delNode->left;
            else
                delParent->right = delNode->left;
            free(delNode);
            return TRUE;
        }
    }
    else // There is at least one child 
    {
        if(delNode->left == NULL)    // Only 1 child and it is on the right
        {
            if(delParent == NULL)    // If deleting the root    
            {
                root = delNode->right;
                free(delNode);
                return TRUE;
            }
            else
            {
                if(delParent->left == delNode)
                    delParent->left = delNode->right;
                else
                    delParent->right = delNode->right;
                free(delNode);
                return TRUE;
            }
        }
        else // Case 2: Deleting node with two children 
        {
            // Find the replacement value.  Locate the node  
            // containing the largest value smaller than the 
            // key of the node being deleted.                
            temp = delNode->left;
            back = delNode;
            while(temp->right != NULL)
            {
                back = temp;
                temp = temp->right;
            }
            // Copy the replacement values into the node to be deleted 
            delNode->Key = temp->Key;
            delNode->fValue = temp->fValue;
            delNode->iValue = temp->iValue;
            strcpy(delNode->cArray, temp->cArray);

            // Remove the replacement node from the tree 
            if(back == delNode)
                back->left = temp->left;
            else
                back->right = temp->left;
            free(temp);
            return TRUE;
        }
    }
}

//--------------------------------------------
// Function: PrintOne()                                      
// Purpose: Print data in one node of a tree.
// Preconditions: None
// Returns: void                               
//--------------------------------------------
void PrintOne(TreeNode *T)
{
    printf("%d\t%f\t%d\t%s\n", T->Key, T->fValue, T->iValue, T->cArray);
}

//--------------------------------------------
// Function: PrintAll()                                     
// Purpose: Print the tree using a recursive
//        traversal 
// Preconditions: None
// Returns: void                               
// Note: Function is declared static so it cannot
//        be accessed from outside                      
//--------------------------------------------
static void PrintAll(TreeNode *T)
{
    if(T != NULL)
    {
        PrintAll(T->left);
        PrintOne(T);
        PrintAll(T->right);
    }
}

//--------------------------------------------
// Function: PrintTree()                                     
// Purpose: Print the tree using a recursive
//        traversal.  This gives the user access
//        to PrintAll() without giving access to
//        the root of the tree.
// Preconditions: None
// Returns: void                               
//--------------------------------------------
void PrintTree()
{
    PrintAll(root);
}