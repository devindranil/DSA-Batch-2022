#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// CODE TO INSERT A NEW NODE AT THE end OF THE LIST
void addLast(struct node **head, int val)
{
    //create a new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next     = NULL;

    //if head is NULL, it is an empty list
    if(*head == NULL)
         *head = newNode;
    //Otherwise, find the last node and add the newNode
    else
    {
        struct node *lastNode = *head;

        //last node's next address will be NULL.
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        //add the newNode at the end of the linked list
        lastNode->next = newNode;
    }

}


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
    addLast(&head, 25);
    

    printf("\nAfter Inserting Element\n");
    printf("\nLinklist : ");
    // no need for '&' as head need not be changed
    // only doing traversal
    linkedlistTraversal(head);
    return 0;
}