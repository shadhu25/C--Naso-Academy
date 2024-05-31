#include<stdio.h>
char fun();
int main()
{
    int a=fun();
    printf("%c\n",a);
    return 0;
}

char fun()
{
    return 'a';
}