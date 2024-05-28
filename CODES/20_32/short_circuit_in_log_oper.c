#include<stdio.h>
int main()
{
    int a=5,b=8;
    printf("%d\n",a>b&&a++);
    printf("a=%d\n",a);
    printf("%d\n",a>b||a++);
    printf("a=%d\n",a);
    return 0;
}