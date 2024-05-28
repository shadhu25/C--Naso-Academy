#include<stdio.h>
int main()
{
    int i=5;
    // the size is determined from the type of the operand.if the tyoe of the operand isa variable length
    // array type, then the operand is evaluated otherwise ,the operand isnot evaluated.
    int var=sizeof(i++);
    printf("%d %d\n",i,var);
    return 0;
}