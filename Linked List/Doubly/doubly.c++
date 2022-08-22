#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node *prev;
        
};

//function to traverse forward
void traverse_forward(node *head){
    node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


//function to insert a node at the beginning of the list
node *insert_begin(node *head,int data){
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
    return head;
}


//function to insert a node at the end of the list
node *insert_end(node *head,int data){
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
    return head;
}

//function to insert a node at the given position
node *insert_pos(node *head,int data,int pos){
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        node *temp1 = head;
        int i = 1;
        while(i < pos){
            temp1 = temp1->next;
            i++;
        }
        temp->next = temp1->next;
        temp1->next->prev = temp;
        temp1->next = temp;
        temp->prev = temp1;
    }
    return head;
}
//function to delete a node from the beginning of the list
node *delete_begin(node *head){
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}

//function to delete a node from the end of the list
node *delete_end(node *head){
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    return head;
}

//function to delete a node from the middle of the list
node *delete_pos(node *head,int pos){
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        node *temp = head;
        int i = 1;
        while(i < pos){
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    return head;
}

//function to traverse backward
void traverse_backward(node *head){
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
}
int main(){

    struct node *head;
    struct node *node2;
    struct node *node3;
    struct node *node4;

    // allocate memory for nodes in the linked list in 'Heap' using new operator
    head = new node;
    node2 = new node;
    node3 = new node;
    node4 = new node;
    
    // assign data to nodes new
    head->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;

    // link the next nodes
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    // link the previous nodes
    head->prev = NULL;
    node2->prev = head;
    node3->prev = node2;
    node4->prev = node3;

  
    // print the linked list
    cout<<"\nLinked list is: ";
    traverse_forward(head);
    cout<<"\n";
    cout<<"\nLinked list is: ";
    traverse_backward(head);
    cout<<"\n";

    // insert a node at the beginning of the list
    head = insert_begin(head,5);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");
    
    // insert a node at the end of the list
    head = insert_end(head,6);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");

    // insert a node at the given position
    head = insert_pos(head,7,3);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");

    // delete a node from the beginning of the list
    head = delete_begin(head);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");

    // delete a node from the end of the list
    head = delete_end(head);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");

    // delete a node from the middle of the list
    head = delete_pos(head,2);
    printf("\nLinked list is: ");
    traverse_forward(head);
    printf("\n");



    return 0;
}