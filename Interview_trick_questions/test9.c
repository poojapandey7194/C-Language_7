#include<stdio.h>
/* What “condition” expression can be used so that the following code snippet will print Hello world.*/
#if 0
int main()
{
    if(printf("Hello world"));
    return 0;
}

#endif
int main()
{
    if (!printf("Hello "))
        printf (" Hello");
    else
        printf ("world !");

}