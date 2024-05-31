#include<stdio.h>
int fun();
int main()
{
    for(fun();fun();fun())
    {
        printf("%d ",fun());
    }
    return 0;
}

int fun()
{
    static int x=16;
    return x--;
}