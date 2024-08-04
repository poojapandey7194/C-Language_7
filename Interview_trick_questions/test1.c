/*Give a fastest way to multiply any number by 9.*/
#include<stdio.h>
int main()
{
    int num = 5;

    printf("%d * 9 = %d\n",num , (num<<3)+num );
    return 0;
}