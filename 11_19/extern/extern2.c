#include<stdio.h>
int a=9;
int main()
{
    extern int a;
    //it will not go into another file to find the value of a
    //extern say only go and find value of a outside of the block
    printf("%d",a);
    return 0;
}