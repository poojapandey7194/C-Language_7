/* 13) Write a recursive function to revese the string. (Note : not just reverse printing
        charecter by charecter)
*/

#include<stdio.h>

int rev_str(char arr[], int size);
int main()
{
    char arr[] = "Pooja";
    int temp;

    for(int i = 0;i<5;i++)
    {
       printf("%c %d ",arr[i], &arr[i]);
    }
    printf("\n");
    /*for(int i = 0;i<5/2;i++)
    {
        temp = arr[4-i];
        arr[4-i] = arr[i];
        arr[i] = temp;

    }*/
    rev_str(arr,4);
    printf("\n");
    for(int i = 0;i<5;i++)
    {
        printf("%c %d ",arr[i], &arr[i]);
    }
    printf("\n");
}

int rev_str(char arr[], int size)
{
    if(size < 0)
        return 0;
    else 
    {
        printf("%c %d ", arr[size] &arr[size]);
        rev_str(arr,size-1);
    }    
}