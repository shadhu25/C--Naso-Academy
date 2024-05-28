#include<stdio.h>
 int main()
{
    char ch='t';
    //this is happening due to ASCII table
    printf("%c %d\n",ch,ch);
    //when we frovide negative value
    char ch1=-129;
    printf("%c %d",ch1,ch1);
    return 0;
}