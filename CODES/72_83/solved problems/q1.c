// how many times will the get() function be invoked returning to main()?
//  GATE 2015 - 2 marks

#include<stdio.h>
void get(int n)
{
    if(n<1)
    return;
    get(n-1);
    get(n-3);
    printf("%d ",n);
}
int main()
{
    get(6);
}



// the is 25 times
