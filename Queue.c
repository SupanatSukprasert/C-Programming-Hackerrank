#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *front = NULL;
    struct Node *rear = NULL;
    struct Node *newNode;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = NULL;
    front = rear = newNode;
    
    newNode = malloc(sizeof(struct Node));
    newNode->data =20;
    newNode->next =NULL;

    rear ->next = newNode;
    rear = newNode;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL;
    rear ->next = newNode;
    rear = newNode;

    printf("%d",front->data);



    return 0;
}
