#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

int main(){
    struct Node *root;
    
    root = malloc(sizeof(struct Node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    //if(value < root->data)
    //{
    //    root->left = insert(root->left, value);
    //}
    //else
    //{
    //    root->right = insert(root->right, value);
    //}
    return 0;
}