/*
		    1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3
        1    
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars,n = 5;

for(i =1;i<=2*n-1; i++)
{
    int nums = i<n ? 2*i-1:  2*(2*n-i)-1;
    int space =  i<n? 2*(n-i): 2*(i-n);
    int num = 1;
    for(j = 1; j<= space; j++)
    {
        printf(" ");
    }
    for(j = 1; j<= nums; j++)
    {          
          printf("%d ",num++);
    }
    
    printf("\n");
}
}