#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// CODE TO INSERT A NEW NODE AT THE BEGINNING OF THE LIST
void insertBeginning(struct node **head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
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


    // creating 4 pointers of type struct Node
    // So these can point to address of struct type variable
    struct node *head = NULL;
    struct node *node2;
    struct node *node3;
    struct node *node4;

    // allocate 3 nodes in the heap
    head = malloc(sizeof(struct node));
    node2 = malloc(sizeof(struct node));
    node3 = malloc(sizeof(struct node));
    node4 = malloc(sizeof(struct node));

    head->data = 15;    // data set for head node
    head->next = node2; // next pointer assigned to address of node2

    node2->data = 10;
    node2->next = node3;

    node3->data = 12;
    node3->next = node4;

    node4->data = 3;
    node4->next = NULL;

    printf("Linklist : ");
    linkedlistTraversal(head);

    // Need '&' i.e. address as we need to change head
    insertBeginning(&head, 25);

    printf("\nAfter Inserting Element\n");
    printf("\nLinklist : ");
    // no need for '&' as head need not be changed
    // only doing traversal
    linkedlistTraversal(head);
    return 0;
}