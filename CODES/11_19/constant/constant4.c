#include<stdio.h>
//don't put semicolon at the end
#define greater(x,y) if(x>y)\
                        printf("%d is greater than %d",x,y);\
                        else\
                        printf("%d is lesser than %d",x,y);
int main()
{
    greater(14,7);
    return 0;
}