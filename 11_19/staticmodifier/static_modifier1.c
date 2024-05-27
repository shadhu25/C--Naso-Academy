#include<stdio.h>
int add();
int main()
{
    int value;
    value=add();
    value=add();
    value=add();
    printf("%d",value);
}
int add()
{
    int count=0;
    count=count+1;
    return count;
}