//write a program to delete the last node of a singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void deleteLastNode(struct node **head)
{
    struct node *temp = *head;
    struct node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}

// traverse the linked list.
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
    struct node *node2;
    struct node *node3;
    struct node *node4;
    head = malloc(sizeof(struct node));
    node2 = malloc(sizeof(struct node));
    node3 = malloc(sizeof(struct node));
    node4 = malloc(sizeof(struct node));
    head->data = 1;
    head->next = node2;
    node2->data = 2;
    node2->next = node3;
    node3->data = 3;
    node3->next = node4;
    node4->data = 4;
    node4->next = NULL;
    printf("Before deleting the first node:\n");
    linkedlistTraversal(head);
    printf("\n");
    deleteLastNode(&head);
    printf("After deleting the first node:\n");
    linkedlistTraversal(head);
    return 0;
}