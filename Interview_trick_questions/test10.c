#include<stdio.h>
/*How to print number from 1 to 100 without using conditional operators.*/
int main()
{
    int i = 1;
    while(i <= 100) //while (100 – i++)
    printf("%d ", i++);

    return 0;
}
