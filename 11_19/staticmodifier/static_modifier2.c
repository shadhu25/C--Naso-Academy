#include<stdio.h>
int count;
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
    
    count=count+1;
    return count;
}