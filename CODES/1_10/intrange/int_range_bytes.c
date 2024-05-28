#include<stdio.h>
#include<limits.h>
 int main()
{
    int intn=INT_MIN;
    int intx=INT_MAX;
    long int lintn=LONG_MIN;
    long int lintx=LONG_MAX;
    short int sintn=SHRT_MIN;
    short int sintx=SHRT_MAX;
    long long int llintn=LLONG_MIN;
    long long int llintx=LLONG_MAX;
    unsigned int uintn=0;
    unsigned int uintx=UINT_MAX;
    unsigned long int ulintn=0;
    unsigned long int ulintx=ULONG_MAX;
    unsigned short int usintn=0;
    unsigned short int usintx=USHRT_MAX;
    unsigned long long int ullintn=0;
    unsigned long long int ullintx=ULLONG_MAX;
    printf("size of int = %ld \n",sizeof(int));
    printf("the range of int :- %d to %d\n",intn,intx);
    printf("the size of long int = %ld \n",sizeof(long int));
    printf("the range of long int :- %ld to %ld\n",lintn,lintx);
    printf("size of short int = %ld \n",sizeof(short int));
    printf("the range of short int :- %d to %d\n",sintn,sintx);
    printf("the size of long long int = %ld\n",sizeof(long long int));
    printf("the range of long long int :- %lld to %lld\n",llintn,llintx);
    printf("size of unsigned int = %lu \n",sizeof(unsigned int));
    printf("the range of unsigned int :- %u to %u\n",uintn,uintx);
    printf("the size of unsigned long int = %lu \n",sizeof(unsigned long int));
    printf("the range of unsigned long int :- %lu to %lu\n",ulintn,ulintx);
    printf("size of short unsigned int = %lu \n",sizeof(unsigned short int));
    printf("the range of unsigned short int :- %u to %u\n",usintn,usintx);
    printf("the size of unsigned long long int = %lu\n",sizeof(unsigned long long int));
    printf("the range of unsigned long long int :- %llu to %llu\n",ullintn,ullintx);
    return 0;
}