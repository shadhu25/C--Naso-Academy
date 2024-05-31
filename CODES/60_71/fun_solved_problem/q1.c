// gate exam 2014

#include<stdio.h>
int fun(int y)
{
    int count=0;
    while(y)
    {
        count++;
        y>>=1;   
    }
    return count;
}
int main()
{
    int a=435,x;
    x=fun(a);
    printf("%d\n",x);
    return 0;
}