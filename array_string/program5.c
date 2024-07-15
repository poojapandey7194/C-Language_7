/*Write a C program to reverse  the elements of a given array.
1,3,5,4,2

2,4,5,3,1

*/

#include<stdio.h>

int main()
{
    int a[5] = {1,3,5,4,2};
    int i;
   int temp;

    int size = sizeof(a)/sizeof(a[0]);
    //printf("%d", size);
    //printf("enter array elements\n");
    //for(i = 0;i <size;i++)
    //scanf("%d",&a[i]);

    for(i = 0;i <size;i++)
    printf("%d %d\n",&a[i], a[i]);

    printf("\n");
    
    for(i = 0;i <size/2;i++)
    {
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    for(i = 0;i <size;i++)
    printf("%d %d\n",&a[i], a[i]);

     printf("\n");
    
}