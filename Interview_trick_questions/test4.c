#include<stdio.h>
/*Suggest an efficient method to count the no. of 1’s in a 32 bit no. Remember without using loop & testing each bit.*/

int count_bits(int num);
int main()
{
    int x = 255;
    int count = count_bits(x);

    printf("%d \n", count);
    return 0;
}

int count_bits(int num)
{
    if(num == 0)
        return 0;
    else
    {
        return 1+ count_bits(num & (num-1));
    }
}
