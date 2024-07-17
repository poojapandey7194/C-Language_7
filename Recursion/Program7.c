/* 7)	Write a recursive function to print first 100 prime numbers. */
#include<stdio.h>
int prime_num(int, int);
int main()
{
    int num = 100;
    int count = 0;
    int i = 0;
    while(count <=100){
        int result = prime_num(++i, 2);
        if(result == 0){
            count++;
            printf("%d ",i);
        }

    }    
    return 0;
}

int prime_num(int num, int i)
{
    if(num == i || num == 0 || num == 1 || num == 2)
        return 0;
    else
    {
        if(num%i == 0)
            return 1;
        else
            return prime_num(num, i+1);
    }
}  


