// write a c program to insert a number at any position in a linked list using function
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertAtAnyPosition(struct node **head, int data, int position)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    struct node *temp = *head;
    int i = 1;
    if (position == 1)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        while (i != position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
        //return head;
    }
}
void linkedlistTraversal(struct node *ptr)
{
    struct node *temp = ptr;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{

    struct node *head;
    struct node *node2;
    struct node *node3;
    struct node *node4;
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
    insertAtAnyPosition(&head, 20, 3);
    printf("Linklist : ");
    linkedlistTraversal(head);
    return 0;
}
