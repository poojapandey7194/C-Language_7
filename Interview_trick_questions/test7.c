#include<stdio.h>
/*Write a C-program which does the addition of two integers without using ‘+’ operator.*/
int main()
{
    int x = 10, y = 20;

    int add = x-(-y);

    printf("%d\n", add);
    return 0;
}
