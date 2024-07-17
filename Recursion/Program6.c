/* 6)	Write a recursive function that displays a positive integer in words. For ex: if the
          integer is 3412 then it is displayed as three four one two.
 */
#include<stdio.h>
int int_to_word(int);
char *nums[] = {"Zero" , "One", "two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
int main()
{
    int num = 7421;
    int_to_word(num);
    return 0;
}

 int int_to_word(int num)
{
    if(num == 0)
        return 0;
    else{
        int_to_word(num/10);
        printf("%s ",nums[num%10]);
    }
}

