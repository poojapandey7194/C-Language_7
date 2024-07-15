/*Write a C program to input 10 numbers through the keyboard into an array and
     display the results of addition of even numbers and product of odd numbers.*/


#include<stdio.h>

int main()
{
    int a[10];
    int i,even = 0, odd = 1;

    int size = sizeof(a)/sizeof(a[0]);

    printf("enter array elements\n");
    for(i = 0;i <size;i++)
    scanf("%d",&a[i]);
    
    for(i = 0;i <size;i++)
    {
        if(a[i]%2 == 0)
        {
            even = even + a[i];
        }
        else
        odd = odd * a[i];
    }

    printf("addition of even numbers = %d and product of odd numbers = %d\n", even, odd);
}