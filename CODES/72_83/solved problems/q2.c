#include<stdio.h>
void fun1(int n)
{
    int i=0;
    if(n>1)
    fun1(n-1);
    for(i=0;i<n;i++)
    printf("*");
}
int main()
{
    fun1(3);
    return 0;
}

/* a) n
   b) n(n+1)/2  3(3+1)/2=6==6stars
   c) n*n
   d) none of above   */