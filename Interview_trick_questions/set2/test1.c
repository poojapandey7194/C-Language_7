#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#if 0
void main()
{
    char c=125;
    c+=10;
    printf("%d\n",c);
}

main()
{
    int c=10;
    printf("%d %d %d %d\n",c++,++c,c++,++c);
}


main()
{
    int n=0xfffd;
    printf("%x\n",n & 1);
}
main()
     {
	unsigned char temp=0xff;
	printf("\n%d\n",temp >> 5);
	printf("\n\r %d\n",temp >> 5);
	printf("\n%d\n",temp);
}

main()
     {
		unsigned int i=13;
		int count=0;
		for(;i;i>>=1)
		{
			if(i & 1)
			{
				count++;
			}
		}
		printf("%d\n",count);
    }



main()
    {
		int a=2;
		if(a==2)
		{
			a=~a+2<<1; 
			printf("%d\n",a);
		}	
    }


main()
     {
		int i=258;
		char c1=i;
		char c2=i>>8;
		printf("c1=%d c2=%d c1+c2=%d\n",c1,c2,c1+c2);
     }


main()
       {
		int a=-12,b=-12,c=-12,d=-12;
		a=a>>1;
		b=b>>2;
		c=c>>3;
		d=d>>4;
		printf("%d %d %d %d\n",a,b,c,d);
       }


main()
      {
		float a=0.55,b=0.80;
		if((a && b)>0.80)
		printf("if\n");
		else
		printf("else\n");
      }


int y=10;

main()
{

    int x=10;
    printf("%d  %d  %d\n",x=30,x>10,x=10);
    printf("%d  %d  %d\n",y=30,y>10,y=10);
}

int main()
{
    int num = 2451;
    float dec = 12.45126;
    char* str = "poojapandey";
 
    // precision for integral data
    printf("For integers: %.10d\n", num);
    // precision for numbers with decimal points
    printf("For floats: %.2f\n", dec);
    // for strings
    printf("For strings: %.5s", str);
 
    return 0;
}

int main() 
{ 
    int x = 25, y = 0; 
    int z = x / y; 
    printf("%d", z); 
    return 0; 
}



main()
       {
		int i=-3,j=2,k=0,m;	
		m=++i || ++j && ++k;
		printf("%d %d %d %d\n",i,j,k,m);
       }

main()
       {
		int i=3;
		int j;
		j=sizeof(++i + ++i + ++i);  //this will just give the sizeof int
		printf("i=%d j=%d\n",i,j);
      }


main()
      {
		int a,b,c,d;
		a=3;
		b=5;
		c=a,b;  //this will take 3
		d=(a,b); //this will take 5
		printf("%d %d\n",c,d);
      }

            main()
      {
		int a=0,b;
		b=(a=0)?2:3;
        printf("%d %d\n",a,b);
      }



main()
       {
		int a=5,b=6;
		int max;
		a>b?(max=a):max=b; //error: lvalue required as left operand of assignment
		printf("max=%d\n",max);
       }


main()
       {
		int i=4;
		switch(i)
		{
		default: ;
		case 3:
				 i+=5;
				 if(i==8)
			 	 {
				 	i++;
				 	if(i==9)
					 break;

				 	i*=2;
				 }
				 i-=4;
				 break;
		case 8:
			 i+=5;
			 break;
        }
		printf("i=%d\n",i);
}


        main()
        {
		int q,i,j,count;
		i=j=0;
		q=2;
		count=6;
		switch(3)
		{
			case 0:
                while(--count>0)
		   	    {
			 	      case 1:++j;
			 	      case 2:++i;
			 	      case 3: ;
			 	      case 4: ;
			 	      case 5: ;
		       	}
		    printf("%d ",i);
		    printf("%d \n",j);
	    }
    }


#define MAX 100
      #define MIN 100
       main()
       {
		int x=200;
		if(x>MAX)
		x=1;
		else if(x<MIN)
		x=0;x=50;
        printf("%d ",x);
       }


        main()
        {
		int i;
		/*for(i=4;i<10;i=i+2)
		{
			i=i-2;
			printf("%d ",i);
		}*/

        for(i=0;i==10;i+=2)
	printf("HI...\n");

        }


       main()
       {
		unsigned int i=10,c;
		for(c=0;i;c++)
		i&=i-1;
		printf("%d\n",c);
      }


main()
      {
		int i,j,c1=0,c2=0;
		for(i=0;i<10;i++,c1++)
		for(j=0;j<20;j++,c1++);
	
		for(i=0;i<20;i++,c2++)
		for(j=0;j<10;j++,c2++);
		printf("c1=%d c2=%d\n",c1,c2);
	
		if(c1==c2)
		printf("c1==c2\n");
		else if(c1>c2)
		printf("c1>c2\n");
		else if(c1<c2)
		printf("c1<c2\n");
		else
		printf("not \n");
     }


      main()
      {
		int i=20,j,k=0;
		for(j=1;j<i;j=k+4*(i/j))
		k+=j<10?4:3;
		printf("%d\n",k);
      }

main()
       {
	int a[5]={2,3};
	printf("%d %d %d\n",a[2],a[3],a[4]);
       }


main()
      {
	char *a,*b;
	a=b=NULL;
	a++;
	b++;
	b++;
	//printf("%d\n",a+b); //error: invalid operands to binary + (have 'char *' and 'char *')
    printf("%u %u %u\n",a++, b++, b++);
	printf("%d\n",a-b);
      }


main()
       {
	int arr[]={12,13,14,15,16};
	printf("%d ,%d ,%d\n",sizeof(arr),sizeof(*arr),sizeof(arr[0]));

      }


main()
       {
	double a[2][3];
	printf("%d ",sizeof(a));
	printf("%d ",sizeof(a[0]));
	printf("%d \n",sizeof(a[1][1]));
       }

main()
       {
		int val = 5;
		//printf("%d\n",++val++); //error: lvalue required as increment operand
		int *p=&val;
		printf("%d\n",++*p++);
       }

main()
        {
	char *ptr="Hello World";
	*ptr='h';
	printf("%s",*ptr);
        }


main()
       {
	char *str="This";
              char *ptr="Program";
	str=ptr;
	printf("%s %s\n",str,ptr);

       }


void f(char *k)
{
    k++;
    k[2]='m';
}

main()
{
    char s[]="hello";
    f(s);
    printf("%c\n",*(s+3));
} 


      main()
      {
              char s[]="man";
	   int i;
	
	for(i=0;s[i];i++)
	printf("\n%c %c %c %c",s[i],*(s+i),*(i+s),i[s]);
	printf("\n");
      }

// array of pointers
int main()
{
    int arr[] = {10,22,23,24,25};

    int *ptr[] = {arr+2, arr+1, arr+0, arr+3, arr+4};

    printf("%d ",*ptr[1]);
}



//pointer to an array

main()
{
    int arr[] = {1,2,3,4,5};

    int (*ptr)[2];
    ptr = &arr;
    printf("%d ",ptr[1][2]);

}



void change(int *b,int n)
{
		int i;
		for(i=0;i<n;i++)
		*(b+1)=*(b+i)+5;
}

main() 
{
    int i,a[]={2,4,6,8,10};
    change(a,5);
    for(i=0;i<=4;i++)
    printf("%d ",a[i]);
}


void t1(char *q)
        {
	if(*q!='r')
	{
		putchar(*q);
		//t1(q++);//infinite loop
		t1(++q);
	}
        }
        main()
        {
	char *p;
	p="abcder";
	t1(p);
        }




void f1(int *,int);
     void f2(int *,int);
     void (*p)(int *,int);
     main()
     {
	int a;
	int b;
	//p[0]=f1;
    p = f1;
	//p[1]=f2;
	a=3;
	b=5;
	p(&a,b);
	printf("%d\t %d\t",a,b);
	//p[1](&a,b);
	//printf("%d\t %d\t",a,b);
     }
void f1(int *p,int q)
{
	int temp;
	temp=*p;
	*p=q;
	q=temp;
}
void f2(int *p,int q)
{
	int temp;
	temp=*p;
	*p=q;
	q=temp;
}


      main()
      {
	int arr[2][2][2]={10,2,3,4,5,6,7,8};
	int *p,*q;
	p=&arr[1][1][1];
	q=(int*)arr;
	printf("%d,%d\n",*p,*q);
      }
	


main(int argc,char *argv[])
	{
		printf("%c\n",**++argv);
	}



       main(int argc,char **argv)
       {
	if(argc==1)
	printf("error\n");
	printf("%c ",*(argv[1]+1));
	printf("%c ",(*(argv+1))[2]);
	printf("%c \n",argv[1][2]);   }

      main()
      {
	int a[][3]={1,2,3,4,5,6};
	int (*ptr)[3]=a;
	printf("%d %d ",(*ptr)[1],(*ptr)[2]);
	++ptr;
	printf("%d %d \n",(*ptr)[1],(*ptr)[2]);
     }



      main() 
      {
	char *ptr;
	ptr=(char *)strtok("jan:feb:mar",":"); //seg fault
	printf("%s\n",ptr);
	do
	{
		ptr=strtok('\0',":");
		if(ptr)
			printf("%5s\n",ptr);
	}while(ptr);
      }


int fun_def(int a,int b)
       {
	return a%b;
       }
       main()
       {
	int a,b;
	int (*fn_ptr)(int,int);
	a=4;
	b=3;
	fn_ptr=fun_def;
	printf("the output is :%d\n",fn_ptr(a,b));
       }


void foo(int b[][3])
      {
	//++b;
	b[1][1]=9;
     }
     main()
     {
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	foo(a);
	printf("%d\n",a[2][1]);
     }


         main()
         {
	int a[2][3][4]=  {{1,2,3,4,5,6,7,8, 9,1,1,2},{2,4,1,7,6,7,8,9,0,0,0,0}};
              printf("%u %u %u %d\n",a,*a,**a,***a);
        }

#include<stdlib.h>
int main()
{
    char *ptr = malloc(20);
    ptr = "Entrance";

    printf("%d %d\n", strlen(ptr), sizeof(ptr));
}



      void foo(int a,int b,...)
      {
	int j;
	int *ptr=&b;
	j=0;
	while(j<a)
	{
		printf("%d ",*ptr);
		++j;
		++ptr;
	}
     }
      main()
      {
	foo(1,5);
	foo(2,5,6);
      }


       void f(char *);
       main()
       {
	f("123");
     }
void f(char a[])
{
	if(a[1]=='\0')
	return;
	f(a+1);
	f(a+1);
	printf("%c ",a[1]);
	printf("\n");
}


static unsigned char h[5]={1,2,3,4,5};
main()
{
struct ad{
    unsigned short a;
    unsigned short b;
};
    struct ad *it;
    it=(struct ad *)h;
    printf("%d ",it->a);
    printf("%d \n",it->b);


}


      int main()
      {
         static int var=7;
         int data;

        if(--var)
        {
                data = main()+var;
                printf("%d ",data);
        }
     }



main()
	{
		int *p1,*p2,*p3;
		p1=malloc(10);
		printf("p1----> %u\n",(unsigned int)p1);
		free(p1);
		p2=malloc(5);
		printf("p2----> %u\n",(unsigned int)p2);
		free(p2);
		p3=malloc(5);
		printf("p3----> %u\n",(unsigned int)p3);
		free(p3);
	}


#include<stdio.h>
#include<string.h>
	void allocate(char *s)
	{
		s=malloc(10);
		strcpy(s,"hello");
        printf("%s", s);
	}
int main()
{
    
    allocate(NULL);
}



 main()
	{
	printf("%d %d\n",sizeof("string"),strlen("string"));
	}


main()
	{
		int x=20;
		{
			int x=40;
			printf("%d ",x);
		}
		printf("%d \n",x);
	}


void func()
{
    int x=0;
    static int y=0;
    x++;
    y++;
    printf("%d------%d\n",x,y);
}

main()
{
    func();
    func();
}



char i;
void try1();
void try2(char *t);
	void try1()
	{
		static char *ptr="abcde";
		i=*ptr;
		printf("%c ",i);
		try2(++ptr);
	}
	void try2(char *t)
	{
		static char *pt;
		pt=t+strlen(t)-1;
		if(i!=*pt--)
		if(t!=pt)
			try1();
	}
 	main()
	{
		try1();
	}


main()
	{
		register int i=10;
		int *ptr;
		ptr=&i; //error: address of register variable 'i' requested
		printf("%d\n",*ptr);
	}


void main()
	{
		static int i=5;
		if(--i)
		main();
		printf("%d ",i);

        
	}

struct employ1
	{
		char g1;
		char g2;
		short det;
		int roll;
	};

	struct employ2
	{
		char g1;
		int roll;
		char g2;
		short det;
	};
	
	main()
	{
        struct employ1 emp1;
        struct employ2 emp2;
		printf("%d %d\n",sizeof(emp1),sizeof(emp2));
	}



main()
	{
		struct ST
		 {
			char a[11];
			int i;
		}st={"done",10};
		printf("%s\n",(st).a);
		printf("%d\n",(st).i);	
	}


struct st
{
    int a;
    char b;
    void *c;
};
	main()
	{
		struct st *ptr=NULL;
        printf("a:%d\tb:%d\tc:%d\t*ptr:%d\n",sizeof(ptr->a),sizeof(ptr->b),sizeof(ptr->c),sizeof(*ptr));
	}


struct foo
	{
		void (*func)(void);
	};
	void boo()
	{
		printf("hello world\n");
	}	
	main()
	{
		struct foo *myfoo = (struct foo *) malloc(sizeof(struct foo ));
		myfoo->func=boo;
		myfoo->func();
	}


struct a
	{
		char category :2;
		char scheme :4;
	};

    main()
    {
	printf("size= %d\n",sizeof(struct a));
    }

 

struct st{
    int a;
    int b;
};
void foo(struct st *p)
{
    char *pt;
    p->a=768;
    p->b=128;
    pt=(char*)p;
    printf("%d\n",*(pt+1));
}


main()
{
    struct st ab={128,768};
    struct st *pq=&ab;
    foo(pq);
}


   main()
	{
		union
		{
			struct
			{
				char c[2];
				char ch[2];
			}s;
			
			struct
			{
				 int i;
				 int j;
			}st;
		}u={12,1,15,1};

		printf("%d %d\n",u.s.ch[0],u.st.j);
	}


   main()
	{
		struct node 
		{
			int a;
			int b;
			int c;
		};
		struct node s={3,5,6};
		struct node *ptr=&s;
		printf("%d\n",*(int *)ptr);
		printf("%d\n",++*(int *)ptr);
	}


    main()
	{
		unsigned char c;
		typedef struct name
		{
			long a;
			int b;
			long c;
		}r;
		r re={3,4,5};
		r *na=&re;
		printf("%d",*(int*) ( (char*)na + (unsigned int) & (((struct name *)0)->b)) );
	}


   union u
	{
		int i;
		char ch;
	};
	main()
	{
		union u u1;
		u1.i=258;
		u1.ch='a';
		printf("%d\n",u1.i);
	}
 

   typedef enum day{jan=1,feb=4,april,may}d;
   main()
   {
    d dd;
    dd = may;

    printf("%d ",dd);
   }


     enum a{NEGATIVE=-1,ZERO,POSITIVE};
	void fun(int val)
	{
		if(val<=NEGATIVE)
			printf("negative\n");
		else if(val>=POSITIVE)
			printf("positive\n");
		else
			printf("its zero\n");
	}
	main()
	{
		fun(-3);
		fun(2);
		return 0;
	}

    

     int j=0;
	main()
	{
		int i =10;
		printf("i=%d j=%d\n",i,j);
		#if((i==0)&&(j==0))
		printf("true");
		#else
		printf("false");
		#endif
	}



 #define SWAP(a,b,c) {c t; t=a;a=b;b=t;}
	main()
	{
		int a=10;
        int b=20;
		SWAP(a,b,int);
		printf("%d %d\n",a,b);
	}


#define str(x) #x
#define Xstr(x) str(x)
#define oper multiply

	main()
	{
		//char *opername=Xstr(oper);
        int x  =10;
        char *opername=str(x);
		printf("%s\n",opername);
	}
 #endif

 #include<stdio.h>
	#define ABC() 20
	#define XYZ 10
	#define NUM ABC()-XYZ
	main()
	{
		int a=10,c;
		c=a*NUM;
		printf("%d\n",c);
	}
