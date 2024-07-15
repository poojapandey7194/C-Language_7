/*
1 
2*2 
3*3*3 
4*4*4*4 
5*5*5*5*5 
4*4*4*4 
3*3*3 
2*2 
1
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars;

int n = 5;
int num = 0; 
for(i =1;i<=(2*n -1); i++)
{
     
    nums = (i<=n) ? i: (2*n-i);
    num = nums;
    
    for(j = 1 ; j<= 2*nums-1; j++)
    {
      if(j%2)
        printf("%d",num);
      else
        printf("*");
    }
    printf("\n");
}
}