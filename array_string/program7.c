/*Write a C program to insert an element at desired position in an array. 
1,3,5,2,7,9,2

insert 4
1,3,5,4,2,7,9,2

*/

#include<stdio.h>

int main()
{
    int a[7] = {1,3,5,2,7,9,2};
    int pos = 0;
    int i, j;
   
    int size = sizeof(a)/sizeof(a[0]);
    int p[size-pos];
    int size_p = sizeof(p)/sizeof(p[0]);
    printf("%d\n", size_p);
    //printf("enter array elements\n");
    //for(i = 0;i <size;i++)
    //scanf("%d",&a[i]);

    for(i = 0;i <size;i++)
    printf("%d %d\n",&a[i], a[i]);

    printf("\n");
    
    for(i = 0;i <size;i++)
    {
        if(i == pos)
        {
            for(j = 0;j <size_p;j++, i++)
                p[j] = a[i];
            size++;
            a[pos] = 4;
            break;
        }
    }
    int k = 0;
    while(pos++<size)
    {
        a[pos] = p[k];
        k++;
    }
    for(i = 0;i <size;i++)
    printf("%d %d\n",&a[i], a[i]);

     printf("\n");
    
}