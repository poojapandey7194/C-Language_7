/*
		1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars,n = 5;

for(i =0;i<n; i++)
{
    int num = 1;
    for(j = 1; j< 2*(n-i); j++)
    {
        printf(" ");
    }
    for(j = 1; j<= 2*i +1; j++)
    {          
          printf("%d ",num++);
    }
    
    printf("\n");
}
}