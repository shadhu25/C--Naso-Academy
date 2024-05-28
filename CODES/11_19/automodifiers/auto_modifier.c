#include<stdio.h>
//globle variable by default initialised to 0
int var4;
 int main()
{
    //if we won't initialize auto variable,by default it will be initalized
    // with some garbage(random) value
    auto int var;
    auto int var2;
    auto int var3;
    printf("%d\n",var);
    printf("%d\n",var2);
    printf("%d\n",var3);
    printf("globle = %d\n",var4);
    return 0;
}