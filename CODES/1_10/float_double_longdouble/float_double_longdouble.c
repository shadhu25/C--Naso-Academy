#include<stdio.h>
 int main()
{
    float var1=3.14159265368984747887;
    double var2=3.14159265368984747887;
    long double var3=3.14159265368984747887;
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%.16lf\n",var1);
    printf("%.21lf\n",var2);
    printf("%.21llf\n",var3);
    return 0;
}