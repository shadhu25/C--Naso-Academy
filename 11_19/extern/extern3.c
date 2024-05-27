#include<stdio.h>
//when an extern variable is initialised, then memory for this variable is allocated it will be cosiered defined
extern int a=9;
 int main()
{
    printf("%d",a);
    return 0;
}