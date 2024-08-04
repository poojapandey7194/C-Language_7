/*How to measure the size of any variable without “sizeof” operator?*/

#include<stdio.h>
#if 0
#define size_of(x) (char*)(&x+1) - (char *)&x
int main()
{

    double x = 10;
    printf("%d\n", size_of(x));
    return 0;
}
#endif

#define size_of(T) (T*)0 +1

int main()
{
    printf("%d\n", size_of(double));
    return 0;
}