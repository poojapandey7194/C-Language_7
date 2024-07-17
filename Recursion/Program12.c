/*12)	Write a recursive function to revese the elements of a given array.*/

#include<stdio.h>
int rev_arr(int arr[], int size);
int main()
{
    int arr[] = {12,23,43,23,11};
    int temp;

    for(int i = 0;i<5;i++)
    {
       printf("%d %d ",arr[i], &arr[i]);
    }
    printf("\n");
    /*for(int i = 0;i<5/2;i++)
    {
        temp = arr[4-i];
        arr[4-i] = arr[i];
        arr[i] = temp;

    }*/
    rev_arr(arr,4);
    printf("\n");
    for(int i = 0;i<5;i++)
    {
        printf("%d %d ",arr[i], &arr[i]);
    }
    printf("\n");
}

int rev_arr(int arr[], int size)
{
    if(size < 0)
        return 0;
    else 
    {
        printf("%d %d ", arr[size] &arr[size]);
        rev_arr(arr,size-1);
    }    
}