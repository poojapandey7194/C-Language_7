#include<stdio.h>
/*How to check endianness of the computer.*/
int main()
{
    int x = 1;
    char *ptr = &x;

    if(*ptr == 1 )
    {
        printf(" It is a little endian\n");
    }
    return 0;
}
