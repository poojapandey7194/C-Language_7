#include<stdio.h>
/*Test whether a no. is power of 2 or not.*/
int main()
{
    int x = 0;
    if((x & (x-1)) == 0)
        printf("It is a power of 2\n");
    return 0;
}
