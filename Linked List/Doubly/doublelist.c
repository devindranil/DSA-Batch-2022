#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//function to traverse forward
void traverse_forward(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

//function to traverse backward
void traverse_backward(struct node *head)
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}

//function to insert at the beginning
void insert_beginning(struct node **head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    temp->prev = NULL;
    if (*head != NULL)
    {
        (*head)->prev = temp;
    }
    *head = temp;
}

int main ()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    int i, n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    /*printf("\nThe list is: ");
    traverse_forward(head);
    printf("\nThe list is: ");
    traverse_backward(head);
    printf("\n");*/

    printf("\nEnter the data to be inserted: ");
    scanf("%d", &data);
    insert_beginning(&head, data);
    printf("\nThe list is: ");
    traverse_forward(head);

    
}