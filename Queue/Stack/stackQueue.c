// queue implementation using two stacks
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;
int count = 0;
void push1()
{
	printf("Enter the element to be pushed into stack1: ");
	int item;
	scanf("%d", &item);
	if (top1 == MAX - 1)
	{
		printf("stack is oevrflow");
	}
	else
	{
		top1++;
		stack1[top1] = item;
	}
}

void push2()
{
	printf("Enter the element to be pushed into stack1: ");
	int item;
	scanf("%d", &item);
	if (top2 == MAX - 1)
	{
		printf("stack is oevrflow");
	}
	else
	{
		top2++;
		stack2[top2] = item;
	}
}

void enqueue()
{
	push1();
	count++;
}

int pop1()
{
	return stack1[top1--];
}

int pop2()
{
	return stack2[top2--];
}

void dequeue()
{
	int i, a, b;
	if (top1 == -1 && top2 == -1)
	{
		printf("Queue is empty");
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			a = pop1();
			push2(a);
		}
		b = pop2();
		printf("The element deleted is %d", b);
		count--;

		// pushing back the elements to stack1
		for (i = 0; i < count; i++)
		{
			a = pop2();
			push1(a);
		}
	}
}

void display()
{
	int i;
	if (top1 == -1 && top2 == -1)
	{
		printf("Queue is empty");
	}
	else
	{
		for (i = 0; i <= top1; i++)
		{
			printf("%d ", stack1[i]);
		}
	}
}

int main()
{

	int choice;
	while (1)
	{
		printf("\n*************************Main Menu*****************************\n");
		printf("\n=================================================================\n");
		printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
		printf("\nEnter your choice ?\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			enqueue();
			break;
		case 2:

			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:

			exit(0);
		}
	}
}