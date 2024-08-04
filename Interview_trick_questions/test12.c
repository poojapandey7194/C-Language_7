#include<stdio.h>
/*Write the equivalent expression for x%8.*/
int main()
{
    int x = 21;
    if((x&7) == (x%8))
        printf("equivalent expression for x%%8 is x&7\n");
    return 0;
}
