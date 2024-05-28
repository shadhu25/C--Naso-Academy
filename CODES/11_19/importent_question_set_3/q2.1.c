#include<stdio.h>
static int var;
static int var=26;
static int var;
int main ()
{
    static int var;
    printf("%d",var);
    return 0;

}