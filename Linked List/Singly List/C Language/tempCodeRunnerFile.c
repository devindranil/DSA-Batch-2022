 CODE TO INSERT A NEW NODE AT THE BEGINNING OF THE LIST
void insertBeginning(struct node **head, int data)
{
    struct node *newnode; 
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
};