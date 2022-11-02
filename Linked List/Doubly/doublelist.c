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

//function to insert in specific position
void insert_position(struct node **head, int data, int pos)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (pos == 1)
    {
        temp->next = *head;
        temp->prev = NULL;
        if (*head != NULL)
        {
            (*head)->prev = temp;
        }
        *head = temp;
        return;
    }
    struct node *temp1 = *head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    temp->prev = temp1;
    if (temp->next != NULL)
    {
        temp->next->prev = temp;
    }
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
    //insert_beginning(&head, data);
    printf("\nThe list is: ");
    traverse_forward(head);
    insert_position(&head, data, 3);
    printf("\nThe list is: ");
    traverse_forward(head);
    
    //printf("\nThe list is: ");
    //call insert at specific position
    //insert_position(&head, data, 3);
    //traverse_forward(head);
    

    
}