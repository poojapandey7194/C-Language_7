/*Write a C program to input 10 numbers through the keyboard and find the number
     of prime numbers count, store  them into a seperate array and display it.
*/

#include<stdio.h>

int main()
{
    int a[10] = {12,23,2,45,7,100,20,13,2,170};
    int p[10];
    int i,flag, count = 0;
    int k = 0;

    int size = sizeof(a)/sizeof(a[0]);

   // printf("enter array elements\n");
    for(i = 0;i <size;i++)
    p[i] = 0;

    for(i = 0;i <size;i++)
    {
        printf("in for loop = %d \n",a[i]); //{12,23,2,45,7,100,20,13,2,170};
        flag = 1;
        for(int j = 2;j < a[i]/2;j++)
        {
            if(a[i]%j == 0)
            {
                printf("in prime check = %d \n",a[i]);
                flag = 0;
                break;
            }
        }
        if(flag == 1){
                 printf("in if check = %d \n",a[i]);
                p[k] = a[i];
                k++;
                count++;
            }
    }
    for(i = 0;i <size;i++)
    printf("%d ",p[i]);
    printf("\n");

    printf("Count of prime numbers = %d\n", count);
}