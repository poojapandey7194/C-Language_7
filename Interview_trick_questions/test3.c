#include<stdio.h>
/*Write code snippets to swap two variables in five different ways.*/

int main()
{
    int a = 10;
    int b = 20;

    printf("After: %d %d\n", a,b);
    #if 0

    //method 1
    a = a+b;
    b = a-b;
    a = a-b;

    //method 2
    a = a*b;
    b = a/b;
    a = a/b;

    //method 3 
    a = a^b;
    b = a^b;
    a = a^b;

    //method 4
    a ^=b ^= a ^=b;
    #endif

    //method 5
    a = (a+b) - (b = a);

    printf("Before: %d %d\n", a,b);
    return 0;
}
