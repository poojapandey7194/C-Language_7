/* 3)	Write a recursive function to find the sum of digits of a given number. */
#include<stdio.h>
int sum_digit(int);
int main()
{
    int num = 7421;
    int result = sum_digit(num);

    printf("Sum of digits of a given number is: %d\n", result);
    return 0;
}

int sum_digit(int num)
{
    if(num == 0)
        return 0;
    else{
        printf("%d ",num);
        return  (num%10) + sum_digit(num/10);
    }
}

