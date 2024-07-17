/* 10) Write a recursive function to find the largest element in a given Unsorted array*/

#include<stdio.h>

int max_num(int num[], int size);
int main()
{
    int arr[5] = {23,2,45,43,15};
    /*int max = 0;
    for(int i = 0;i<5;i++)
    {
        if(arr[i] > max )
        max = arr[i];
    }*/
    int n = 5;

    int max = max_num(arr,n-1);

    printf("Largest element is : %d\n", max);
}

int max_num(int num[], int size)
{
    static int max = 0;
    if(size<0)
        return 0;
    else
    {
        max_num(num, size-1);

        if(num[size]> max)
        max = num[size];
        return max;
    }    
}