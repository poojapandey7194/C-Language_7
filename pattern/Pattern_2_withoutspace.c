/*
*********** 
 ********* 
  ******* 
   ***** 
    *** 
     * 
    *** 
   ***** 
  ******* 
 ******** 
*********** 
*/

#include<stdio.h>
int main()
{
int i,j,k,space,stars;

int n = 11;
for(i =0;i<n; i++)
{
    stars = (i<=n/2) ? n-(2*i): (2*i-n) + 2;
    space = (n-stars)/2;
    for(j = 0 ; j< space; j++)
    printf(" ");
    for(k = 0 ; k< stars; k++)
    printf("*");

    printf("\n");
}

}