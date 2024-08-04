#include<stdio.h>

void print(int arr[], int len);

int main()
{
    int arr [] = {1,2,3,4,5};

    int val = 0;
    int i;
 
    int first = arr[0];
    do
    {
        print(arr,5);
        val = arr[4];
        for(i = 4; i>=0 ; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[i+1] = val;
    }while(first != val);
}

void print(int arr[], int len)
{
    for(int i = 0;i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}