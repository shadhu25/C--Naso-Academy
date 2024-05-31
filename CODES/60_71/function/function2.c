#include<stdio.h>
int add(int,int);
int main()
{
    int a=30,b=30,sum;
    sum=add(a,b);
    printf("%d\n",sum);
    return 0;
}

int add(int x,int y)
{
    return (x+y);
}