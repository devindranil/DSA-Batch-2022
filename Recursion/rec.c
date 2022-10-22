#include<stdio.h>
/*void display(int);
void main()
{
    int n=3;
    display(n);
}
void display(int x)
{
    if(x<1){
        return;
    }else{
        printf("%d",x);
        display(x-1);
        printf("%d",x);
    }
}*/

//recursion factorial
//int fact1(int);
int fact(int);
void main()
{
    int n,r;
    printf("Enter the fact value:\n");
    scanf("%d",&n);
    r=fact(n);
    printf("Result=%d",r);
}
int fact(int x)
{
    int res;
    //base case
    if(x==0){
        res=1;
    }else{
        res=x*fact(x-1);//recursive function
    }
    return (res);
}

/*int fact2(int x)
{
    int res;
    //base case
    if(x==0){
        res=1;
    }else{
        res=x*fact1(x-1);//recursive function
    }
    return (res);
}*/



/**indirect recursion*/
/*int fact1(int);
int fact2(int);
int main()
{
    printf("%d",fact1(5));
}
int fact1(int x)
{
    if (x<=1){
        return 1;
    }else{
        return x*fact2(x-1);
    }
}
int fact2(int x)
{
    if(x<=1){
        return 1;
    }else{
        return x*fact1(x-1);
    }
}*/

/**tail and non tail recursion*/
/*void print(int a)
{
    if(a<1){
        return;
    }else{
        printf("%d",a);
        print(a/2);
        printf("%d",a);
    }
}
void main()
{
    print(10);
}*/

/**tail and non tail recursion*/
/*int print(int a)
{
    if(a<1){
        return 1;
    }else{
        return (1+ print(a/2));
    }
}
void main()
{
    int x;
    x=print(10);
    printf("%d",x);
}*/