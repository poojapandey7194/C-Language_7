/* 9)	A number is perfect if the sum of all its positive proper divisors is equal to the
           number. For example 28 is a perfect number since 28 = 1+2+4+7+14. Write a 
           recursive function that finds whether a number is perfect or not.

*/
#include<stdio.h>
int perfect_num(int, int);
int main()
{
    int num = 28;
    int i = 1;

    int result = perfect_num(num, i);
    if(result == num)
        printf("Given number %d is a perfect number.\n", result);
    return 0;
}

int perfect_num(int num, int i)
{
    if(i > num/2)
        return 0;
    else
    {
        if(num%i == 0)
            return i + perfect_num(num, i+1);
        else
             return perfect_num(num, i+1);
    }
}

