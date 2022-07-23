//write a c program to insert a number at a specific position in an array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],i,n,pos,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which the number is to be inserted\n");
    scanf("%d",&pos);
    printf("Enter the number to be inserted\n");
    scanf("%d",&temp);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=temp;
    printf("The array after insertion is\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
    }
}