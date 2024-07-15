/*
*  *  *  *  *  * 
 *  *  *  *  * 
   *  *  *  * 
     *  *  * 
       * * 
        * 
       * * 
     *  *  * 
   *  *  *  * 
  *  *  *  *  * 
*  *  *  *  *  * 
*/

#include<stdio.h>
int main()
{
int i,j,k,space,stars;

int n = 6;
for(i =0;i<(2*n -1); i++)
{
    stars = (i<n) ? n-i: (i-n) + 2;
    space = n-stars;
    for(j = 0 ; j< space; j++)
    printf(" ");
    for(k = 0 ; k< stars; k++)
    printf("* ");

    printf("\n");
}

}