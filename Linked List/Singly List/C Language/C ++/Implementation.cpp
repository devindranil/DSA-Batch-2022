//program to implemnt and traverse a singly linked list
#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node *next;
};

// code to traverse the list
void linkedlistTraversal(class node *ptr)
{
    class node *temp = ptr;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
};

int main()
{
    class node *head;
    class node *middle;
    class node *last;
    class node *fourth;
    

    // allocate memory for nodes in the linked list in 'Heap'
    head = (class node *)malloc(sizeof(class node));
    middle = (class node *)malloc(sizeof(class node));
    last = (class node *)malloc(sizeof(class node));
    fourth = (class node *)malloc(sizeof(class node));
    

    // assign data to nodes
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    fourth->data = 40;
    
    // link the nodes
    head->next = middle;
    middle->next = last;
    last->next = fourth;
    fourth->next = NULL;
    
    linkedlistTraversal(head);
  
    
}

