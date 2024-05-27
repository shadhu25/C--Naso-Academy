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
    static int count;
    count=count+1;
    return count;
}