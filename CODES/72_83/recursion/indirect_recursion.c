// indirect recurtion : a function(fun1()) is called indirect recurtion if it is
// calls another function(fun2()) and then fun2 calls fun1 directly or indirectly. 

// WAP to print nmbers from 1 to 10 in such a way that when number is odd,
// add 1 and when number even, subtract 1.
#include<stdio.h>
int n=1;
void odd();
void even();
int main()
{
    odd();
    return 0;
}

void odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}