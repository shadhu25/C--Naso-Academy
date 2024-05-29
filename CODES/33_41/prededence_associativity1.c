#include<stdio.h>
int main()
{
    int a=10,b=20,c=30,d=40;
    //((a<=b)==(d>c))
    //left to right first (a<=b)=1 & (d>c)=1
    //1==1 becomes 1=true
    if(a<=b==d>c)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
