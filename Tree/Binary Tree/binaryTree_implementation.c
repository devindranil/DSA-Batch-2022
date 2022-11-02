#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

//node creation
struct node* create()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data(-1 for no node):\n ");
    scanf("%d",&newnode->data);
    if(newnode->data==-1)
    {
        return 0;
    }
    else{
        printf("Enter Left Child of %d\n",newnode->data);
        newnode->left=create();
        printf("Enter Right Child of %d\n",newnode->data);
        newnode->right=create();
        return newnode;
    }
}  

int main()
{
    struct node *root;
    root=0;
    root=create();
    return 0;
}