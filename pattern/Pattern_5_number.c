/*
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 
*/

#include<stdio.h>
int main()
{
int i,j,k,nums,stars,n = 5;

for(i =1;i<=n; i++)
{
    int num = i;
    int add = 4;
    for(j = 0; j< i; j++)
    {          
          printf("%d ",num);
          num = num + add;
          add--;
    }
    
    printf("\n");
}
}