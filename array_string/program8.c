/*Write a C program which deletes the duplicate elements of an array.
'A', 'C', 'B', 'D', 'A', 'B', 'E', 'D', 'B', 'C'
After
A B C D E
*/

#include<stdio.h>

int main()
{
    int a[] = {'A', 'A', 'B', 'D', 'A', 'B', 'E', 'D', 'B', 'C'};
    int i, j;
   
    int size = sizeof(a)/sizeof(a[0]);

    //printf("enter array elements\n");
    //for(i = 0;i <size;i++)
    //scanf("%d",&a[i]);

    for(i = 0;i <size;i++)
    printf("%c ", a[i]);

    printf("\n");
    
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k<size-1; k++)    
                a[k] = a[k+1];
                size--;
            }
        }
    }

    for(i = 0;i <size;i++)
    printf("%c ",a[i]);

     printf("\n");
    
}