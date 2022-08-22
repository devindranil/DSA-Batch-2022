//write a c program to create a circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
// function toi create a circular linked list
void create_circular_list(int data)
{
    
    // create a new nodes
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    // if list is empty
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        // if list is not empty
        struct node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
}

void print_circular_list()
{
    struct node *p;
    p=head;
    while(p->next!=head)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d ",p->data);
}

int main()
{
    int n;
   
    create_circular_list(10);
    create_circular_list(20);
    create_circular_list(30);
    create_circular_list(40);
    print_circular_list();
    return 0;
}