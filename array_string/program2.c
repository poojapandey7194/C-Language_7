/*Write a C program to input 10 numbers through the keyboard into an array and find the 
     biggest and smallest number in an Unsorted array without using any Sorting Technique.
*/


#include<stdio.h>
#include<limits.h>

int main()
{
    int a[10] = {12,23,2,45,7,100,20,13,2,170};
    int i,even = 0, odd = 1;

    int size = sizeof(a)/sizeof(a[0]);

   // printf("enter array elements\n");
    //for(i = 0;i <size;i++)
    //scanf("%d",&a[i]);

    int MAX = 0;
    int MIN = INT_MAX;
    
    for(i = 0;i <size;i++)
    {
        if(a[i]> MAX)
        {
            MAX = a[i];
        }
        else if(a[i]<MIN)
        MIN = a[i];
    }

    printf("MIN = %d and MAX = %d\n", MIN, MAX);
}