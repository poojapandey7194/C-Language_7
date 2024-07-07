//bubble sort, insertion sort, selection sort, bucket sort, heap sort, quick sort, radix sort

#include<stdio.h>

void bubble_sort(int *p, int );
void insertion_sort(int *p, int );
void selection_sort(int *p, int );
void bucket_sort(int *p, int );
void heap_sort(int *p, int );
void quick_sort(int *p, int, int );
void merge_sort(int *p,int low,int high);
void print(int *p, int n);
void swap(int *p, int *q);

int main()
{
int arr[5] = {20,32,19,2,50};
int ele = sizeof(arr)/ sizeof(arr[0]);
printf("Before applying sorting: ");
print(arr,ele);
int opt;

pooja:
    printf("please select the method of selection:\n 1) Bubble Sort \n 2) Insertion sort \n 3) selection sort\n 4) Bucket sort \n 5) Heap sort \n 6) Quick sort\n 7) Merge sort\n 8) Exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        {
            bubble_sort(arr,ele);
            print(arr, ele);
            goto pooja;
        }
        case 2:
        {
            insertion_sort(arr,ele);
            print(arr, ele);
            goto pooja;
        }
        case 3:
        {
            selection_sort(arr,ele);
            print(arr, ele);
            goto pooja;
        }
        case 4:
        {
            bucket_sort(arr,ele);
            print(arr, ele);
            goto pooja;
        }
        case 5:
        {
            heap_sort(arr,ele);
            print(arr, ele);
            goto pooja;
        }
        case 6:
        {
            quick_sort(arr,0,ele-1);
            print(arr, ele);
            goto pooja;
        }
        case 7:
        {
            merge_sort(arr,0,ele-1);
            print(arr, ele);
            goto pooja;
        }
        case 8:
        {
            printf("Kudos on sorting your data\n");
            break;
        }
        default:
            return 0;
    }
}

void print(int *p, int ele)
{
    int i;
    for(i = 0;i<ele;i++)
        printf("%d ",p[i]);
    printf("\n");
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int maximum(int *p, int ele)
{
    int i;
    int max = 0;
    for(i=0;i<ele; i++)
    {
        if(p[i] > max)
            max = p[i];
    }
    return max;
}

void bubble_sort(int *p, int ele)
{
    int i,j;
    for(i =0; i<ele-1;i++)
    {
        for(j = 0;j<ele-1-i;j++)
        {
            if (p[j]>p[j+1])
            {
                swap(&p[j],&p[j+1]);
            }
        }
    }
}

void insertion_sort(int *p,int ele)
{
    int i,j,key;

    for(i = 1; i<ele;i++)
    {
        key = p[i];
        j = i-1;
        while(key<p[j] && j>=0)
        {
            p[j+1] = p[j];
            j--;
        }
        p[j+1] = key;
    }
}

void selection_sort(int *p,int ele)
{
    int i,j,min_idx;
    for(i = 0;i<ele;i++)
    {
        min_idx = i;
        for(j = i+1;j<ele;j++)
        {
            if(p[j]<p[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&p[i],&p[min_idx]);
    }
}


void bucket_sort(int *p,int ele)
{
    int i,max;

    max = maximum(p,ele);

    int buff[max+1];
    for(i = 0;i<=max;i++)
        buff[i] = 0;

    for(i = 0;i<ele;i++)
    {
        buff[p[i]]++;
    }
    int j = 0;
    for(i = 0;i<= max;i++)
    {
        if(buff[i]>0)
        {
            p[j++] = i;
            //buff[i]--;
            buff[i] = 0;
        }
    }
}

void heap_sort(int *p,int ele)
{

}
int partition(int *p,int low,int high)
{
    int pivot = p[high];
    int i = low-1;
    for(int j = low;j<high;j++)
    {
        if(p[j]<=pivot)
        {
            i++;
            swap(&p[i], &p[j]);
        }
    }
    swap(&p[i+1],&p[high]);
    return (i+1);

}

void quick_sort(int *p,int low,int high)
{
    int pi;
    if(low<high)
    {
        pi = partition(p,low,high);
        quick_sort(p,low,pi-1);
        quick_sort(p,pi+1,high);
    }
}

void merge(int *p, int P, int m, int r)
{
    // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = m - P + 1;
  int n2 = r - m;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = p[P + i];
  for (int j = 0; j < n2; j++)
    M[j] = p[m + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = P;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      p[k] = L[i];
      i++;
    } else {
      p[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    p[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    p[k] = M[j];
    j++;
    k++;
  }
}
void merge_sort(int *p,int low,int high)
{
    if(low<high)
    {
        int m = low+(high-low)/2;
        merge_sort(p,low,m);
        merge_sort(p,m+1,high);

        merge(p,low,m,high);
    }
}
