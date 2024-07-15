/*
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 
1 0 1 0 1 0
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars;

int n = 6;

for(i =0;i<n; i++)
{
    for(j = 0 ; j<= i; j++)
    {
      if(j%2 == 0)
        printf("1 ");
      else
        printf("0 ");
    }
    printf("\n");
}
}