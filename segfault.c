//6 causes of seg fault
//1) Accessing a read only option of the memory
//2) Accessing an array out of bound
//3) Using a variable's value as an address 
//4) Dereferencing a NULL pointer
//5) Dereferencing or assigning to an uninitialized pointer
//6) Dereferencing or assigning to a freed pointer

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void foo();

int main()
{
    //1) Accessing a read only option of the memory
    /*char *str = "Pooja";
    str[0] = 'd';*/

    //2) Accessing an array out of bound
    /*int a[2];
    for(int i = 0;i<=2; i++)
    a[i] = i; // undefined behaviour */

    //3) Using a variable's value as an address 
    /*int n;
    scanf("%d",n); //accessing a value of a variable not address */

    //4) Dereferencing a NULL pointer
    /*int *ptr = NULL;
    printf("%d\n",*ptr); */

    //5) Dereferencing or assigning to an uninitialized pointer
   /* int *ptr; //wild pointer - uninitialized pointer
    *ptr = 1; */

    //6) Dereferencing or assigning to a freed pointer    
   /*int *ptr = malloc(10);
    free(ptr); //dangling pointer - freed pointer
    *ptr = 1;  // assigning value to dangling pointer*/

    //7) Buffer Overflow

    /*char s[3];
    strcpy(s,"hello"); //undefined behaviour */

    //stack overflow
    //foo();

}

void foo()
{
        return foo();
}
