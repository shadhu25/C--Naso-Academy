#include<stdio.h>
int main()
{
    int x=3;
    if(x==2); x=0;
    if(x==3) x=6;
    else
    x+=2;
    printf("%d ",x);
    return 0;
}