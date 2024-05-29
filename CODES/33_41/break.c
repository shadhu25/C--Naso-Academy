#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    for (int i=n;n!=0; i++)
    {
        if(n<0)
        break;
        printf("enter a number\n");
    scanf("%d",&n);
    }
            printf("you are out of the loop\n");

    return 0;
    
}