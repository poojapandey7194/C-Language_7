#include<stdio.h>

struct st{
    char ch:1;
    short s;
    int x;
    
};
//conditional variables
int main()
{
    struct st ST;
    printf("%d\n",sizeof(ST));
}

