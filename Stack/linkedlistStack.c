// stack implementation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL; // top of the stack
// push operation
void push(int x)
{
    struct node *newnode;                                 // create a new node
    newnode = (struct node *)malloc(sizeof(struct node)); // allocate memory
    newnode->data = x;                                    // assign data to the new node
    newnode->next = top;                                  // assign next to the top
    top = newnode;                                        // assign top to the new node
}
// peer operation
void peek()
{
    // if stack is empty
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    // if stack is not empty
    else
    {
        printf("%d\n", top->data);
    }
}
// pop operation
void pop()
{
    // if stack is empty
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    // if stack is not empty
    else
    {
        struct node *temp; // create a temporary node
        temp = top;        // assign top to the temporary node
        top = top->next;   // assign top to the next of the temporary node
        free(temp);        // free the temporary node
    }
}
// display operation
void display()
{
    struct node *temp; // create a temporary node
    temp = top;        // assign top to the temporary node
    // if stack is empty
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    // if stack is not empty
    else
    {
        while (temp != NULL) // loop until the temporary node is NULL
        {
            printf("%d ", temp->data); // print the data of the temporary node
            temp = temp->next;         // assign temporary node to the next of the temporary node
        }
    }
}

int main()
{
    int choice, x;
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: "); // 10
            scanf("%d", &x);
            push(x); // 10
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

/*push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display(); // display the stack
    printf("\n");
    peek(); // peek the top element
    // pop the top element
    pop();
    display(); // display the stack
    printf("\n");
    peek(); // peek the top element*/
