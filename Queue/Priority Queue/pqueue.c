//priority queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert(int data,int priority)
{
    //create a new node
    struct node *newnode;
    //allocate memory for new node
    newnode=(struct node*)malloc(sizeof(struct node));
    //assign data and priority to new node
    newnode->data=data;
    //assign priority to new node
    newnode->priority=priority;
    //assign next to new node
    newnode->next=NULL;
    //if queue is empty
    if(front==NULL)
    {
        front=newnode;//assign front to new node
        rear=newnode;//assign rear to new node
    }
    //if queue is not empty
    else
    {
        struct node *temp;//create a temporary node
        temp=front;//assign front to temp
        //if new node has higher priority than front node
        if(temp->priority>priority)//compare priority of front node with new node
        {
            newnode->next=front;//assign front to next of new node
            front=newnode;//assign new node to front
        }
        //if new node has lower priority than front node
        else
        {
            //traverse the queue
            while(temp->next!=NULL && temp->next->priority<priority)//compare priority of next node with new node
            {
                temp=temp->next;//assign next node to temp
            }
            //if new node has higher priority than rear node
            if(temp->next==NULL)
            {
                temp->next=newnode;//assign new node to next of temp
                rear=newnode;//assign new node to rear
            }
            //if new node has lower priority than rear node
            else
            {
                newnode->next=temp->next;//assign next of temp to next of new node
                temp->next=newnode;//assign new node to next of temp
            }
        }
    }
}

void delete()
{
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct node *temp;
        temp=front;
        front=front->next;
        free(temp);
    }
}

void display()
{
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct node *temp;
        temp=front;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int choice,data,priority;
    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter data:");
                scanf("%d",&data);
                printf("Enter priority:");
                scanf("%d",&priority);
                insert(data,priority);
                break;
            case 2:
                delete();
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