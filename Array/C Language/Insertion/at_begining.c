// write a c program to insert a number at the beginning of an array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[10], i, n, j;
    printf("enter the number of elements in the array\n");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("Memory Overflow\n");
        exit(0);
    }
    else
    {
        printf("enter the elements in the array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("enter the number to be inserted\n");
        scanf("%d", &j);
        for (i = n-1; i >= 0; i--)
        {
            a[i+1] = a[i];
        }
        a[0] = j;
        printf("the array after insertion is\n");
        for (i = 0; i < n + 1; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}