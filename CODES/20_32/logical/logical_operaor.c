#include<stdio.h>
int main()
{
    int a=5,b=5;
    printf("a==b&&a!=b = %d\n",a==b&&a!=b);
    printf("a==b&&a!=b = %d\n",a==b||a!=b);
    printf("a==b&&a!=b = %d\n",!(a!=b));
    return 0;
}