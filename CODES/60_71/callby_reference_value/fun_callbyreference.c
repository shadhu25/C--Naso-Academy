#include<stdio.h>
void fun(int *x,int *y)
{
    *x=20;
    *y=30;
}
int main()
{
    int a=30,b=20;
    fun(&a,&b);
    printf("a=%d  b=%d\n",a,b);
    return 0;
}