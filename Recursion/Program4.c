/* 4)	Write a recursive function to revese the given number. */
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
    static int temp;
    if(num == 0)
        return 0;
    else{
        temp =  temp* 10 + (num%10);
        sum_digit(num/10);
        return temp;
    }
}

