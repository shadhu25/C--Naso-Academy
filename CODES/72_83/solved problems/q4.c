// GATE 2015 set-2
#include<stdio.h>
int fun(int n)
{
    int x=1,k;
    if(n==1) return x;
    for(k=1;k<n;++k)
    x=x+fun(k)*fun(n-k);
    return x;
}
int main()
{
    int y;
    y=fun(5);
    printf("%d ",y);
    return 0;

}