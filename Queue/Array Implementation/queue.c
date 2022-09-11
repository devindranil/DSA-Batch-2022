// write a c program to implement queue using array
#include <stdio.h>
#include <stdlib.h>
#define max 5//macro

// global variables
int queue[max], front = -1, rear = -1;

// function to insert an element in the queue
void enqueue()
{
    {  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == max-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
}

// function to delete an element from the queue
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

// function to display the queue
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

// peek function to display the front element of the queue
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("%d", queue[front]);
    }
}

// main function
int main()
{
    // menu driven program to implement queue using array
    int choice;
    while (choice != 5)
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
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }

    
}