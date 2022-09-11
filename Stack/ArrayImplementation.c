//stack implementation using array
#include<stdio.h>
#include<stdlib.h>

//creating a stack
int max = 5;
int top = -1;
int stack[5];

//function to push an element to the stack
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

//function to pop an element from the stack
int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else{
        //top = top - 1;
        top--;
    }
}
//function to get the top element of the stack
int peek()
{
    if(top == -1){
        printf("Stack is empty\n");
      
    }else{
        printf("%d\n",stack[top]);
    }
}
//function to display the stack
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

//function to get the size of the stack
int size()
{
    return top + 1;
}

int main ()
{

    push();//1
    push();//2
    push();//3
    push();//4
    push();//5
    display();
    printf("\n");
    peek();
    pop();//5
    display();//4 3 2 1
    printf("\n");
    peek();
    pop();
    display();//3 2 1
    printf("\n");
    peek();
    pop();
    display();//3 2 1
    printf("\n");
    peek();
    pop();
    display();//3 2 1
    printf("\n");
    peek();
    pop();
    display();//3 2 1
    printf("\n");
    peek();
    printf("\n");
    pop();
    display();
    return 0;
}