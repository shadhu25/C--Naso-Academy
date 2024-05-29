#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    {
        if(a>50)
        printf("a is positive number and greater then 50\n");
        else
        printf("a is positive number and not greater then 50\n");
    }
    else
    printf("a is negative number\n");
    return 0;
}
//both are same
/*if(a>0)
    {
        if(a>50)
        {
        printf("a is positive number and greater then 50\n");
        }
        else
        {
        printf("a is positive number and not greater then 50\n");
        }
    }
    else
    {
    printf("a is negative number\n");
    }
     */