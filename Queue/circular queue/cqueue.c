//circular queue implementation
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int cqueue_arr[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    int item;
    printf("enter the element to be inserted: ");
    scanf("%d",&item);
    if(front==-1 && rear==-1)
    {
        front = rear =0;
        cqueue_arr[rear] = item;
    }
    else if((rear+1)%MAX==front)
    {
        printf("queue is full");
    }
    else
    {
        rear = (rear+1)%MAX;
        cqueue_arr[rear] = item;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        printf("deleted element is %d",cqueue_arr[front]);
        front = rear = -1;
    }
    else
    {
        printf("deleted element is %d",cqueue_arr[front]);
        front = (front+1)%MAX;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue elements are: "); 

        while(i!=rear)
        {
            printf("%d ",cqueue_arr[i]);
            i = (i+1)%MAX;
        }
        
        printf("%d",cqueue_arr[rear]);
    }
}

//2!=1 i=3 4!=3 i=5 5! i=0+1%5 1!1 

//menu driven program

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
            default: printf("enter a valid choice");
        }
    }
    return 0;
}

