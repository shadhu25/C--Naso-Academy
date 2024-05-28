#include<stdio.h>
//multiple declaration is allowed but multple definition is not allowed
extern int a;
extern int a;
extern int a;
extern int a;
 int main()
{
    printf("%d",a);
    return 0;
}