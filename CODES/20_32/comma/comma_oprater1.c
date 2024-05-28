#include<stdio.h>
int main()
{
    int var;
    int num;
    num=(var=15,var+35);
    printf("%d\n",num);
    return 0;
}