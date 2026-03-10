#include "tree_support.h"

int main(void)
{
    struct node* root = createNewnode(1);
    InsertAtLeft(root, 4);
    InsertAtRight(root, 14);
    InsertAtLeft(root->left, 24);
    InsertAtRight(root->left, 34);

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    return 0;
}