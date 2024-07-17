/* 2)	Write a recursive function to print the 'n'  fibonacci series numbers. */
#include<stdio.h>
int fibonacci(int);
int main()
{
    int num = 10;
    for(int i = 0; i<num; i++)
    printf("%d ",fibonacci(i));
    return 0;
}
//0 1 1 2 3 5 8 13 21 ...
int fibonacci(int num)
{
    if(num == 0 || num ==1)
        return num;
    else
        return fibonacci(num-1) + fibonacci(num-2);
}  


