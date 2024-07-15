/*Write a C program to delete an element at desired position from an array.
1,3,5,4,2,7,9,2
delete 4
1,3,5,2,7,9,2

*/

#include<stdio.h>

int main()
{
    int a[8] = {1,3,5,4,2,7,9,2};
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
    
    for(i = 0;i <size;i++)
    {
        if(a[i] == 4)
        {
            for(int j= i; j<size-1; j++, i++)  
            a[j] = a[j+1];
            size--;
            break;
        }
        
    }
    for(i = 0;i <size;i++)
    printf("%d %d\n",&a[i], a[i]);

     printf("\n");
    
}