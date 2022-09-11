// stack array implementation menu driven
#include <stdio.h>
// creating a stack
int max = 5;
int top = -1;
int stack[5];

// function to push an element to the stack
void push()
{
    int x;
    printf("Enter the element to be pushed: ");
    scanf("%d", &x);
    if (top == max - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}

// function to pop an element from the stack
int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        // top = top - 1;
        top--;
    }
}
// function to get the top element of the stack
int peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}
// function to display the stack
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n");
        printf("Enter your choice: ");//0
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
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
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 0);
    {
        getch();
    }
    return 0;
}