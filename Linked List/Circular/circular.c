//write a c program to create a circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *p;//global varible
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

void traverse_forward()
{
    struct node *temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

// function to insert at the beginning
void insert_beginning(int data)
{
    // create a new node
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

//insert at the end
void insert_end(int data)
{
    // create a new node
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

// function to insert at a given position
void insert_at_position(int data, int position)
{
    // create a new node
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
        int i=1;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

// function to delete at the beginning
void delete_beginning()
{
    // if list is empty
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        // if list is not empty
        struct node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }
}

// function to delete at the end
void delete_end()
{
    // if list is empty
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        // if list is not empty
        struct node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }
}

// function to delete at a given position
void delete_at_position(int position)
{
    // if list is empty
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        // if list is not empty
        struct node *temp=head;
        int i=1;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
    }
}

void print_circular_list()
{
    
    p=head;
    while(p->next!=head)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d ",p->data);
}

//function to disply the insert at the beginning data
void display_beginning()
{
        printf("%d ",p->data);
}

int main()
{
   
    create_circular_list(10);
    create_circular_list(20);
    create_circular_list(30);
    create_circular_list(40);
    print_circular_list();
    printf("\n");

    // insert at the beginning
    insert_beginning(50);
    print_circular_list();
    printf("\n");
    display_beginning();
    printf("\n");
    // insert at the end
    /*insert_end(55);
    print_circular_list();
    printf("\n");*/
    // insert at a given position
    /*insert_at_position(66,3);
    print_circular_list();
    printf("\n");*/
    // delete at the beginning
    /*delete_beginning();
    print_circular_list();
    printf("\n");*/
    // delete at the end
    /*delete_end();
    print_circular_list();
    printf("\n");*/
    // delete at a given position
    /*delete_at_position(2);
    print_circular_list();
    printf("\n");*/

    return 0;
}