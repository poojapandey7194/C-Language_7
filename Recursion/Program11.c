/*      11) Write a recursive function to reverse the bits of a given number.*/

#include<stdio.h>
int rev_bit(int num, int pos);
int main()
{
    int num = 255;

   /* for(int i = 31; i>=0;i--)
    {
        printf("%d ", (num>>i) & 1);
    }*/

    rev_bit(num,31);
}

int rev_bit(int num, int pos)
{
    if(pos==0)
        return 0;
    else
    {
        printf("%d ", (num>>pos) & 1);
        rev_bit(num , pos-1);
    }

}