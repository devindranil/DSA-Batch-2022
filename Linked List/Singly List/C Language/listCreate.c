#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// code to traverse the list
void linkedlistTraversal(struct node *ptr)
{
    struct node *temp = ptr;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
};

int main()
{
    struct node *head;
    struct node *middle;
    struct node *last;
    struct node *fourth;
    

    // allocate memory for nodes in the linked list in 'Heap'
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));
    

    // assign data to nodes
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    fourth->data = 40;
    
    // link the nodes
    head->next = middle;
    middle->next = last;
    last->next = fourth;
    fourth->next = NULL;
    

    linkedlistTraversal(head);
    
}