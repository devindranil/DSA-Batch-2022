// write a c language program to delete the first node of a singly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// delete the first node of a singly linked list.
void deleteFirstNode(struct node **head)
{
    struct node *temp = *head;
    *head = temp->next;
    free(temp);
};

// delete at a given position.
void deleteAtPosition(struct node **head, int position)
{
    struct node *temp = *head;
    int i = 1;
    if (position == 1)
    {
        deleteFirstNode(head);
    }
    else
    {
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        struct node *temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
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
    /*deleteFirstNode(&head);
    printf("After deleting the first node:\n");
    linkedlistTraversal(head);*/
    deleteAtPosition(&head,2 );
    printf("\n");
    printf("After deleting the node at position 2:\n");
    linkedlistTraversal(head);
    return 0;
}