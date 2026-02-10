#include "tree_support.h"

/* Memory allocation for new node of a Tree.*/
struct node* createNewnode(int data)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* InsertAtLeft(struct node* root, int data)
{
    root->left = createNewnode(data);
    return (root->left);
}

struct node* InsertAtRight(struct node* root, int data)
{
    root->right = createNewnode(data);
    return (root->right);
}

/* Inorder Traverssal*/
void inorderTraversal(struct node* root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("\n%d", root->data);
    inorderTraversal(root->right);
}