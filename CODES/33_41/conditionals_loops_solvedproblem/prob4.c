#include<stdio.h>
int main()
{
    unsigned int var=4294967295;
    while(var++!=0);
    printf("%d\n",var);
    return 0;
}