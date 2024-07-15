#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *p = "Hello World";
    printf(p);
}

/*
int fun(int (*)());
int main()
{
    fun(main);
    printf("Hi\n");
    return 0;
}
int fun(int (*p)())
{
    printf("Hello\n");
    return 0;
}

int mul(int a, int b, int c)
{
    return a * b * c;
}
void main()
{
    int (*function_pointer)(int, int, int);
    function_pointer  =  mul;
    printf("The product of three numbers is:%d",
    function_pointer(2, 3, 4));
}

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*fn_ptr)(int, int);
    fn_ptr = add;
    printf("The sum of two numbers is: %d\n", fn_ptr(2, 3));
}

void first()
{
    printf("first");
}
void second()
{
    first();
}
void third()
{
    second();
}
void main()
{
    void (*ptr)();
    ptr = third;
    ptr();
}

void fun(char **);
	int main()
	{
		char *argv[]={"ab","cd","ef","gh"};
		fun(argv);
		return 0;
	}
	void fun(char **p)
	{
		char *t;
		t=(p+=sizeof(int))[-1];
		printf("%s\n",t);   //gh
	}


main()
{
    char *m[]={"jan","feb","mar"};
    char d[][10] = {"sun","mon","tue"};
    printf("%s\t",m[1]);  //feb
    printf("%s\t",d[1]);   //mon
}

int main()
{
    static char *s[]={"black","white","pink","violet"};
    char **ptr[]={s+3,s+2,s+1,s},***p;
    p = ptr;
    printf("%s\n",**p+1); //iolet
    return 0;
}


int main()
{
    char *str[]={"Progs","Do","Not","Die","They","Croak!"};
    printf("%d  %d",sizeof(str),strlen(str[0])); //24 5
    return 0;
}

int main(int sizeofargv, char *argv[])
{
    while(sizeofargv)
    printf("%s  ",argv[--sizeofargv]);  //sunday  tuesday  friday  D:\pooja_repo\C-Language\pointers\a.exe  
    return 0;
}


int main(int argc, char *argv[])
{
    while (*argv  !=  NULL)
    printf("%s\n", *(argv++)); //prints 1 2 3 4, if ./a.exe 1 2 3 4 is provided

    return 0;
}


int main(int argc, char *argv[])
{
    while (*argv++ != NULL)
    printf("%s\n", *argv); //prints 1 2 3 4, if ./a.exe 1 2 3 4 is provided
    return 0;
}

int main(int argc, char *argv[])
{
    while (argc--)
    printf("%s\n", argv[argc]); //prints argument
    return 0;
}

int main()
{
    char *a[2] = {"hello", "hi"};
    printf("%s\n", *(a + 1)); //hi
    return 0;
}

int main()
{
    char a[2][6] = {"hello", "hi"};
    printf("%s  ", *a + 1);  //ello
    return 0;
}

void main()
{
    char *a[10] = {"hi", "hello", "how"};
    printf("%d\n", sizeof(a[1])); //4
}


void main()
{
    char *a[] = {"hi", "hello", "how"};
    printf("%d\n", sizeof(a)); //12 = 4*3
}


void main()
{
    char *a[10] = {"hi", "hello", "how"};
    int i = 0, j = 0;
    a[0] = "hey";
    for (i = 0;i < 10; i++)
    printf("%s  ", a[i]); //prints hey hello how
}


void main()
{
    char *a[10] = {"hi", "hello", "how"};
    int i = 0;
    for (i = 0;i < 10; i++)
    printf("%s  ", *(a[i])); //this is seg fault because of *
}

int *f();
int main()
{
    int *p = f();
    printf("%d\n", *p);
} 
int *f()
{ 
    int *j = (int*)malloc(sizeof(int));
    *j = 10;
    return j;
}

void foo(int **const p);
int main()
{
    int i = 10;
    int *p = &i;
    foo(&p);
    printf("%d ", *p);
}
void foo(int **const p)
{
    int j = 11;
    *p = &j;
    int *otr;
    p = &otr; //p is a double pointer and also a read only pointer which points to p and cannot be changed
    printf("%d ", **p);
}


void foo(int *const *p);
int main()
{
    int i = 11;
    int *p = &i;
    foo(&p);
    printf("%d ", *p);
}
void foo(int *const *p)
{
    int j = 10;
    *p = &j; //*p is constant so read only hence error
    printf("%d ", **p);
}


 void foo(int **p);
int main()
{
    int i = 97, *p = &i;
    foo(&p);
    printf("%d ", *p);
    return 0;
}
void foo(int **p)
{
    int j = 2;
    *p = &j;
    printf("%d ", **p);
}

 
 
void main()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    int *r = &p;
    printf("%d\n", **r); //this is error: invalid type argument of unary '*' (have 'int')
}


int main()
{
    int a = 1, b = 2, c = 3;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
    int **sptr = &ptr1; 
printf("%d  ",**sptr);
    *sptr = ptr2;
printf("%d  ",**sptr);
}


#include <stdio.h > 
     int main() 
     {	
	int *p = 10;
	printf(" %u\n", (unsigned int)p);
	//printf("%d\n",*p); 
     }
     //10 segmentation fault
*/
/*
#include <stdio.h>
          int main()
          {
            int *ptr, a = 10;
            ptr = &a;
            *ptr += 1;
            printf("%d,%d/n", *ptr, a);

          }

          // 11 11
*/
/*
#include<stdio.h>
     int main()
     {
	int x = -300;
	unsigned char *p;
	p = &x;
	printf("%d\n",*p++);
	printf("%d\n",*p);
     }
//212 254
*/

/*#include<stdio.h>
      int main()
      {
	int x = 256;
	char *p = &x;
	*++p = 2;
	printf("%d",x);
      }
*/

/*#include <stdio.h>
        void main()
        {
            int x = 0;
            int *ptr = &5;
            printf("%p\n", ptr);
        }
*/
/*
#include<stdio.h>
     int main()
     {
        int x = 5;
	int const *p;
    p = &x;
	int q;
	p = &q;
	printf("%d",p++); 
     }
*/
/*

     int main()
     {
	int x = 10;
	int const * const p = &x;  //initialize when creating constant pointer, error: assignment of read-only variable 'p'
	p = &x;
	printf("%d\n", *p);
     }
*/

/*

int x = 0;
        void main()
        {
            int *const ptr = &x; //read only pointer
            printf("%p\n", ptr);
            ptr++;              //error: increment of read-only variable 'ptr'
            printf("%p\n ", ptr);
        }
*/

/*
        int main()
         {
            const int ary[4] = {1, 2, 3, 4};
            int *p;
            p = ary + 3;  //warning: assignment discards 'const' qualifier from pointer target type
            *p = 5;
            printf("%d\n", ary[3]);
        }
//5
*/
/*
int main()
        {
            int ary[4] = {1, 2, 3, 4};
            int *p = ary + 3;
            printf("%d\n", p[-2]);    }
//2
*/
/*
void main()
        {
            char *s= "hello";  //they are string literals
            char *p = s + 2;
            printf("%c\t%c", *p, s[1]);
        }
//l     e

*/
/*
        int main()
        {
            void *p;
            int a[4] = {1, 2, 3, 4};
            p = &a[3];
            int *ptr = &a[2];
            int n = (int*)p - ptr;
            printf("%d\n", n);
        }

        //1


int main()
        {
            void *p;
            int a[4] = {1, 2, 3, 4};
            p = &a[3];
            int *ptr = &a[2];
            int n = p - ptr; //error: invalid operands to binary - (have 'void *' and 'int *')
            printf("%d\n", n);
        }

     int main()
        {
            void *p;
            int a[4] = {1, 2, 3, 4};
            p = &a[3];
            int *ptr = &a[2];
            int n = (char*)p - (char *)ptr; //error: invalid operands to binary - (have 'void *' and 'int *')
            printf("%d\n", n);
        }   

        //4
        */

/*              int main()
      {
	int a[ ] = {10,20,30,40,50},i;
	char *p = a;

	for(i=0;i<5;i++)
           printf("%d   ",*p++);
      }
      //10 0 0 0 20
*/
/*
       int main() 
       { 
	int a[]={10,20,30,40,50}; 
	char *p; 
	p=(char *)a; 
	printf("%d\n",*((int *)p+4)); 
       }
       //50
       */
/*
int main()
        {
            double *ptr = (double *)100;
            ptr = ptr + 2;
            printf("%u\n", ptr); //116 address 
            //printf("%u\n", *ptr); segmentation fault
        }
*/
/*
          int main()
          {
              int i = 10;
            void *p = &i;
            //printf("%d\n", (int *)*p); //error: invalid use of void expression, warning: dereferencing 'void *' pointer
          printf("%d\n", *(int*)p);
            return 0;
        }
*/
/*

        int main()
        {
            int a[4] = {1, 2, 3, 4};
            void  *p = &a[1];
            void *ptr = &a[2];
            int n = 0;
            n = ptr - p;
            printf("%d\n", n);
        }

        this is undefined behavious as the pointer is of type void
*/
/*
       int main()
        {
            int *p = (int *)2;
            int *q = (int *)3;
            printf("%d", p - q); //error: invalid operands to binary + (have 'int *' and 'int *')
        }


int main()
        {
            int *p = (int *)2;
            int *q = (int *)3;
            printf("%d", p + q); //error: invalid operands to binary + (have 'int *' and 'int *')
        }
        */
/*
        void main()
        {
            char *s = "hello";
            char *n = "cjn";
            char *p = s + n; //error: invalid operands to binary + (have 'char *' and 'char *')
            printf("%c\t%c", *p, s[1]);
        }

void m(int *p)
        {
            int i = 0;
            for(i = 0;i < 5; i++)
            printf("%d\t", p[i]);
        }
        void main()
        {
            int a[5] = {6, 5, 3};
            m(a);
        }
*/
/*
void foo(int*);
        int main()
        {
            int i = 10,j=20,*p = &i;
            foo(p++);
	    foo(p);
        }
        void foo(int *p)
        {
            printf("%d\n", *p);
        }
*/
/*void foo(int *p)
        {
            int j = 2;
            printf("%d ", *p);
            p = &j;
            printf("%d ", *p);
        }
        int main()
        {
            int i = 97, *p = &i;
            foo(&i);
            printf("%d ", *p);
        }
        
// 97 2 97
*/

/*

//25)#include <stdio.h>

void foo(int *p)
        {
            int j = 2;
            p = &j;
            printf("%d ", *p);
        }
        int main()
        {
            int i = 97, *p = &i;
            foo(&i);
            printf("%d ", *p);
        }
        

//26)  #include<stdio.h>   
       int main()
       {
	const int ary[4] = {1,2,3,4};
	int *p = ary+3;
	*p = 5;
	ary[3] = 6; //throw error, error: assignment of read-only location 'ary[3]'
	printf("%d",ary[3]);
     }

     

//27)  #include<stdio.h>
       int main()
     {
	char *p = "Hai friends",  *p1 = p;
//	while(*p!='\0');
	++*p++; //seg fault
	printf("%s  %s\n",p,p1);
     }
     

//28)  #include<stdio.h>
       int main()
       {
	char *x = "VECTOR";
	printf("%s\n",x+3);
	printf("%d\n"+1,123456);
       }


TOR d



//29)  #include<stdio.h>
       int main()
       {
	char a[ ] = "abcdefgh";
	int *ptr = a;
	printf("%x  %x %x %x\n",ptr[0],ptr[1],a[0], a[1]);
       }
//hex of dcba , hex of hgfe 64636261  68676665


  //30)   #include<stdio.h>
          #include<string.h>
        int main()
        {
            char *str = "hello, world\n";
            char *strc = "good morning\n";
            strcpy(strc, str); //seg fault
            printf("%s\n", strc);
            return 0;
        }

       

  // 31)#include <stdio.h>
        int main()
        {
            char *str = "hello world";
            char strc[50] = "good morning india\n";
            strcpy(strc, str);
            printf("%s\n", strc);
            return 0;
        }
// hello world
 

  //32) #include <stdio.h>
        int main()
        {
            char *str = "hello, world\n";
            str[5] = '.'; //seg 
            printf("%s\n", str);
            return 0;
        }

        

 //33) #include <stdio.h>
        int main()
        {
            char str[] = "hello, world";
            str[5] = '.';
            printf("%s\n", str);
            return 0;
        }// hello. world

        

  //34) #include <stdio.h>
        int main()
        {
            char *str = "hello world";
            char strary[] = "hello world";
            printf("%d %d\n", sizeof(str), sizeof(strary));
            return 0;
        }

        
//4 12

   35) #include <stdio.h>
        int main()
        {
            char *str = "hello world";
            char strary[] = "hello world";
            printf("%d %d\n", strlen(str), strlen(strary));
            return 0;
        }
11 11 

 36)  #include<stdio.h>
       int main() 
       {
	int a = 5,b = 4,c = 9;
	*(a>b ? &a : &b) = (a+b)>c;
	printf("%d  %d\n",a,b);
       }
// 0 4

37)  Find the sizeof any datatype with out using sizeof operator. (Hint : Use pointers)
#define size_of(x)  (char *) (&x+1) – (char *) &x
38)  #include<stdio.h>

        int main()
        {
	int i;
	double a = 5.2;
	char *ptr;
	ptr = (char *)&a;
	for(i=0;i<=7;i++)
	printf("%d ",*ptr++);
	return 0;
        }
//prints binary of 5.2


//39)  Correct the following program. 
          #include<stdio.h>
	int main()
	{
		void *p;  
        int  **ptr;  
        int a = 129;
		p = &a;  
        ptr = &p;
		printf(" p = %d   p = %u  &p = %u %u\n",  *(int *)p, p, &p, &a);
           }
          

//40) #include<stdio.h> 
      main() 
      { 
	char a[20]; 
	int *p,*q; 
	p=&a[0]; 
	q=&a[10]; 
	printf("%d %d \n",q-p,&p-&q); 
    printf("%d \n",&a[10] - &a[0]); 
      }
//10 10
 

        main() 
       { 
               int a=0x12345678; 
	    void *ptr; 
	    ptr=&a; 
	    printf("0x%x\n",*(int *)&*&*(char*)ptr); 
       }



      main() 
      { 
	int a[5]={1,2,3,4,5}; 
	int *ptr=(int *)(&a+1); 
	printf("%d %d\n",*(a+1),*(ptr-1));    ///   2 4
	printf("%d %d\n",*(a+1),*(ptr));  // 2  5
      }

     

      void main()
         {
            char *s= "hello";
            char *p = s;
            printf("%c\t%c", 1[p], s[1]);
         }


 main()
       {
	char a[]="abcde";
	char *p=a;
	p++;
	p++;
	p[2]='z';
	printf("%s",p);
       }
//cdz

 

             main()
	 {
		char *a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        //char a[]={'a','B','C','D','E','F','G','H','I','J','K'};
                       int i,*p = a;
                       for(i=0;i<5;i++)
                       printf("%d\t",*p++); // tis will print decimal equivalent of abcd and next values 
	 }


main()
{
    char a[]="abcdef";
    char *ptr1 = a;
    //printf("%d ",strlen(ptr1));
    ptr1 = ptr1+(strlen(ptr1)-1);
    printf("%c", --*ptr1--);
    printf("%c",--*--ptr1);
    printf("%c",--*(ptr1--));
    printf("%c",--*(--ptr1));
    printf("%c",*ptr1);
}

int main()
	{
		char *str1 = "Hello";
		char *str2 = "Hai";
		char *str3;
		str3 = strcat(str1,str2);  //seg
		printf("%s  %s\n",str3,str1);
		return 0;
	}

int main()
	{
		char a[]="Hello";
		char *p="Hai";
		//a="Hai"; //error: assignment to expression with array type
		//p="Hello"; //error: assignment to expression with array type
		printf("%s  %s\n",a,p);
		return 0;
	}



int main()
	{
		int i,n;
		char *x="Alice";
		n=strlen(x);
		*x=x[n]; //seg
		for(i=0;i<=n;i++)
		{
			printf("%s",x);
			x++;
		}
		printf("%s\n",x);
		return 0;
	}


char *str="char *str=%c%s%c;main(){printf(str,34,str,34);}";	
	int main()
	{
		//printf(str,34,str,34);
        printf("char *str=%c%s%c;main(){printf(str,34,str,34);}","char *str=%c%s%c;main(){printf(str,34,str,34);}");
		return 0;
	}


void f(char *k)
        {
            k++;
            k[2] = 'm';
            printf("%c\n", *k);
        }
        void main()
        {
            char s[] = "hello";
            f(s);
            printf("%s\n",s);
        }

void t1(char *q);
main()
{
    char *p;
    p = "abcder";
    t1(p);
}
void t1(char *q)
{
    if(*q != 'r')
    {
        putchar(*q);
        t1(++q);
    }
}

int main(){
    int i;
    float a=5.2;
    char *ptr;
    ptr=(char *)&a;
    for(i=0;i<=3;i++)
    {
        int num = *ptr++;
        for(int i = 31; i>= 0; i--)
        printf("%d ",(num>>i)&1);
    printf("\n");
    }    
    return 0;
}


void foo( int[] );
int main()
{
    int ary[4] = {1, 2, 3, 4};
    foo(ary);
    printf("%d ", ary[0]);
}
void foo(int p[4])
{
    int i = 10;
    p = &i;
    printf("%d ", p[0]);
}


void main()
{
    int k = 5;
    int *p = &k;
    int **m  = &p;
        **m = 10;
    printf("%d%d%d\n", k, *p, **m);
}
*/




