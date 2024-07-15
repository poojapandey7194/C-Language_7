/*Write a C program to findout second largest and second smallest elements of an
      unsorted array without using any Sorting Technique. 
*/


#include<stdio.h>
#include<limits.h>

int main()
{
    int a[10] = {12,23,2,45,7,100,20,13,2,170};
    int i,max = 0, min = INT_MAX;
    int sec_max = 0, sec_min= INT_MAX;

    int size = sizeof(a)/sizeof(a[0]);

    //printf("enter array elements\n");
    //for(i = 0;i <size;i++)
    //scanf("%d",&a[i]);
    
    for(i = 0;i <size;i++)
    {
        if(a[i]> max)
        {
            max = a[i];
        }
        if(a[i]<min)
        min = a[i];
    }
    printf("MIN = %d and MAX = %d\n", min, max);

    for(i = 0;i <size;i++) //{12,23,2,45,7,100,20,13,2,170};
    {
        if(a[i]> sec_max && a[i] != max)            
            sec_max = a[i];
        if(a[i]<sec_min && a[i] != min)
            sec_min = a[i];
    }

    printf("second largest  = %d and second smallest = %d\n", sec_max, sec_min);
}