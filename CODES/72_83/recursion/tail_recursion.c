// tail recursion : a recursion is said to be tail recursive if the recursive call is the
// last thing done by the function. there is no need to keep record of the previous state.

#include<stdio.h>
void fun(int n)
{
    if(n==0)
    return;
    else
    printf("%d ",n);
    return fun(n-1);
}
int main()
{
    fun(3);
    return 0;
}