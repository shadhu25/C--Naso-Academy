#include<stdio.h>
int main()
{
    int n=20,i=2,j=1;
    //printf("enter the number\n");
    //scanf("%d",&n);
    do
    {
        if(j==i)
        {
            i=i+2;
            j++;
            continue;
        }
        printf("%d ",j);
        j++;
        
    } while (j<n);
    return 0;
}
 