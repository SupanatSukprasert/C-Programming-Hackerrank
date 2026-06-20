#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;

};

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *insNode;
    
    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    insNode = malloc(sizeof(struct Node));
    
    insNode->data = 15;
    first->data = 10;
    second->data = 20;
    third->data = 30;
    
    first->next = second;
    insNode->next = first->next;
    first->next = insNode;
    second->next = third;
    third->next = NULL;
    
    struct Node *temp = first;
    
    while (temp != NULL)
     {
        printf("%d\n",temp->data);
        temp = temp->next;
        
    }
    free(insNode);
    free(first);
    free(second);   
    free(third);
    return 0;
}
