/* 5)	Write a recursive function to that displays all the proper divisors of a given number
	 exept that and returns their sum.
	 Ex: 1,3,5,9,15 & 45 are the proper divisors of 45.
	        sum = 1+3+5+9+15 = 33
*/
#include<stdio.h>
int sum_divisors(int, int);
int main()
{
    int num = 45;
    int i = 1;

    int result = sum_divisors(num, i);

    printf("Sum of divisors of a given number is: %d\n", result);
    return 0;
}

int sum_divisors(int num, int i)
{
  
    if(num == i)
        return 0;
    else
    {
        if(num%i == 0)
            return i + sum_divisors(num, i+1);
        else
             return sum_divisors(num, i+1);
    }
}

