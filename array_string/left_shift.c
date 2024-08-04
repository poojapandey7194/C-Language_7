#include<stdio.h>

void print(int arr[], int len);

int main()
{
    int arr [] = {1,2,3,4,5};
    int i;

    int count = 0;

    do
    {
        print(arr,5);
        for(i = 0; i<5 ; i++)
        {
            arr[i] = arr[i+1];
            printf("%d --- ", arr[i]);
        }
        count++;
    }while(count<5);
}

void print(int arr[], int len)
{
    for(int i = 0;i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}