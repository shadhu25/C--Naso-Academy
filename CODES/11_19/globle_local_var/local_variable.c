#include<stdio.h>
 int main()
{
    int var=3;
    {
        int var=10;
        //this printf function prefer most near variable because this is local to this block var=10
        printf("%d\n",var);
    }
    //this printf function prefer most near variable because this is local to this block var=3
    printf("%d",var);
    return 0;
}