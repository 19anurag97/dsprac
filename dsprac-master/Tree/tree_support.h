#ifndef TREE_SUPPORT_H
#define TREE_SUPPORT_H

/*Header Files*/
#include <stdio.h>
#include <stdlib.h>

/*Variable Declarations*/
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

/*Function Declarations*/
struct node* createNewnode(int data);
void inorderTraversal(struct node* root);
struct node* InsertAtLeft(struct node* root, int data);
struct node* InsertAtRight(struct node* root, int data);
#endif  //TREE_SUPPORT_H