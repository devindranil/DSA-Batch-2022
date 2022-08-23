#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    
};

//funtion to delete a node from beginning
void delete_begin(class node **head)
{
    class node *temp = *head;
    *head = temp->next;
    delete temp;
}

//function to delete a node from end
void delete_end(class node **head)
{
    class node *temp = *head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    class node *temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
}

//function to delete a node from middle
void delete_middle(class node **head, int position)
{
    class node *temp = *head;
    int i = 1;
    while(i < position-1)
    {
        temp = temp->next;
        i++;
    }
    class node *temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
}

//function to traverse the list
void traverse(class node *head)
{
    class node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    //create a linked list
    class node *head;
    class node *middle;
    class node *last;
    class node *fourth;

    //allocate memory for nodes in the linked list in 'Heap'
    head = (class node *)malloc(sizeof(class node));
    middle = (class node *)malloc(sizeof(class node));
    last = (class node *)malloc(sizeof(class node));
    fourth = (class node *)malloc(sizeof(class node));

    //assign data to nodes
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    fourth->data = 40;

    //link the nodes
    head->next = middle;
    middle->next = last;
    last->next = fourth;
    fourth->next = NULL;

    traverse(head);
    cout<<endl;
    delete_begin(&head);
    traverse(head);
    cout<<endl;
    delete_end(&head);
    traverse(head);
    cout<<endl;
    delete_middle(&head, 2);
    traverse(head);
    cout<<endl;

    return 0;

}