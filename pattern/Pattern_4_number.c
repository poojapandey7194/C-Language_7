/*
1 
2 4 
1 3 5 
2 4 6 8 
1 3 5 7 9 
2 4 6 8 10 12
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars;

int n = 6;

for(i =1;i<=n; i++)
{
    if(i%2 == 0)
    {
      for(j = 0 ; j< i; j++)
      {
          printf("%d ",j*2 +2);
      }
    }
    else
    {
      for(j = 0 ; j< i; j++)
      {
          printf("%d ",2*j +1);
      }
    }
    printf("\n");
}
}