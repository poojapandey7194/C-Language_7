/* 8)	Write a recursive function to print the palindrome numbers in a given numbers. */
#include<stdio.h>
int palindrome(int);
int main()
{
    int num = 12321;
    int result = palindrome(num);
    if(result == num)
        printf("%d is a pelindrome number\n", result);
    return 0;
}

int palindrome(int num)
{
    static int temp;
    if(num == 0)
        return 0;
    else{
        temp =  temp* 10 + (num%10);
        palindrome(num/10);
        return temp;
    }
}

