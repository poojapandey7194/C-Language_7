#include<stdio.h>
#include "data.h"

extern int abcd;
static int abcd;

int main()
{
    printf("%d\n", abcd);
}