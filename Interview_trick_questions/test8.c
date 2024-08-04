#include<stdio.h>
/*Write a C-program to find the smallest of three integers without using any of the comparision operators.*/
int main()
{
    int a = 12,b=8,c=19;

    if ((a-b) & 32768)
    {
        if ((a-c) & 32768)
            printf (" %d", a);
        else
            printf (" %d", c);
    }
    else
        if ((b-c) & 32768)
            printf (" %d", b);
        else
            printf (" %d", c);

    return 0;
}
