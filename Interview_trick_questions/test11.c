#include<stdio.h>
/*WAP to print 100 times “Hello” without using loop & goto statement.*/
int printhello(int n);
int main()
{
    int n = 100;
    printhello(n);
    return 0;
}

int printhello(int n)
{
    static int count;
    count++;
    if(n == 0)
    {
        printf("%d\n", count);
        return 0;
    }
    else
    {
        printhello(n-1);
        printf("Hello\n");
    }
}
