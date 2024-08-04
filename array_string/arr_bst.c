#include<stdio.h>

int main()
{
    int arrp[] = {1,2,3,4,5,6,7,8,9};

    int l,h,mid;

    l = 0;
    h = sizeof(arrp)/sizeof(arrp[0]);
    printf("sizeof : %d\n",h);
    
    printf("sizeof : %d\n",l);
    int key = 7;
    while(l<=h)
    {
        mid = (l+h) / 2;
        printf("Inside loop l = %d h = %d\n", l,h);
        if(key == arrp[mid])
        {
            printf("Key is found at index : %d\n",mid);
            return 0;
        }    
        else if(key < arrp[mid])
            h = mid - 1;
        else
            l = mid + 1; 
    } 
}
