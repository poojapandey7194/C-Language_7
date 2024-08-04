#include<stdio.h>

void print(int arr[], int len);

int main()
{
    int arr [] = {1,2,3,4,5};

    int val = 0;
    int i;
 
    int last = arr[4];
    do
    {
        print(arr,5);
        val = arr[0];
        for(i = 0; i<5 ; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[i-1] = val;
    }while(last != val);
}

void print(int arr[], int len)
{
    for(int i = 0;i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}