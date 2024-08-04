#include<stdio.h>

int main()
{
    int a = 4, b = 5;
    int t = (a==b--);

    printf("%d", t);
}