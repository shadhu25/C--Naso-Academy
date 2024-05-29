#include<stdio.h>
int main()
{
    int x=2;
    switch(x)
    {
        case 1: printf("x is 1\n");
        break;
        case 2: printf("x is 2\n");
        break;
        case 3: printf("x is 3\n");
        break;
        default: printf("x is a number other tan 1,2,3\n");
        break;
    }
    return 0;
}