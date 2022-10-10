// queue implementation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
// function to insert an element in the queue
void enqueue()
{
    int item;
    printf("Enter the data to be inserted: ");
    scanf("%d", &item);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

// function to delete an element from the queue
void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

// function to display the elements in the queue
void display()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

// function to display the front element of the queue
void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("The front element is %d", front->data);
    }
}

// function to menu driven program
void mainFunction()
{
    int choice;
    while (1)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:

            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}

//main menu
int main(){
    mainFunction();
    return 0;
}