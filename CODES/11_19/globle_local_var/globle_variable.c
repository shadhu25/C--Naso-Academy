#include<stdio.h>
//this is globle variable
int var=10;
int fun();
 int main()
{
    int var=3;
    //this is local variable
    printf("%d\n",var);
    fun();
    return 0;
}
int fun()
{
    printf("%d",var);
}