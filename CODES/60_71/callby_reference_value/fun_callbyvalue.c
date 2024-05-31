#include<stdio.h>
void fun(int a,int b)
{
    a=20;
    b=30;
}
int main()
{
    int a=30,b=20;
    fun(a,b);
    printf("a=%d  b=%d\n",a,b);
    return 0;
}