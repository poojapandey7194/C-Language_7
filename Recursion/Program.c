/* 1)	Write a recursive function to find the factorial of a given number. */
#include<stdio.h>
long fact(int);
int main()
{
    int num = 0;
    long result = fact(num);

    printf("Factorial of a number %d! is: %d\n", num, result);
    return 0;
}
//5*4*3*2*1 
long fact(int num)
{
    if(num == 1 || num == 0)
        return 1;
    else
        return num * fact(num-1);
}

