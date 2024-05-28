#include<stdio.h>
//don't put semicolon at the end
#define add(x,y) x+y
int main()
{
    //first expension then evaluation
    printf("result of the expression a*b+c: %d",5*add(4,3));
    return 0;
}