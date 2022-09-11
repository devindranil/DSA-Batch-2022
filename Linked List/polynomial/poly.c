// c program to evaluate a polynomial by user input
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    float coeff;
    int exp;
    struct node *next;
};
// insert function
struct node *insert(struct node *head, int co, int ex)
{
    struct node *temp;
    struct node *newP = malloc(sizeof(struct node));
    newP->coeff = co;
    newP->exp = ex;
    newP->next = NULL;

    // compare the exponent of new node with the existing nodes
    if (head == NULL || ex > head->exp)
    {
        newP->next = head;
        head = newP;
    }
    else
    {
        temp = head;
        while (temp->next != NULL && temp->next->exp > ex)
        {
            temp = temp->next;
        }
        newP->next = temp->next;
        temp->next = newP;
    }
    return head;
}

// function to create a new node
struct node *create(struct node *head)
{
    int n;
    int i;
    float coef;
    int expo;
    printf("Enter the number of terms in the polynomial: ");//2
    scanf("%d", &n);

    // ask exponent & coefficient for each term
    for (i = 0; i < n; i++)// 0<2 1<2 2<2
    {
        printf("Enter Coefficient: %d\n", i+1);
        scanf("%f", &coef);

        printf("Enter Exponent: %d\n", i+1);
        scanf("%d", &expo);
        head = insert(head, coef, expo); // head = 1term
    }
    return head;
}


// step 5 : print the polynomial
void print(struct node *head)
{
    if (head == NULL)
    {
        printf("No Polynomial");
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("(%.1fx^%d)", temp->coeff, temp->exp);
            temp = temp->next;
            if (temp != NULL)
            {
                printf(" + ");
            }
            else
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    struct node *head = NULL;
    printf("Enter the the polynomial\n");
    head = create(head);
    // print the polynomial
    print(head);
    return 0;
}
