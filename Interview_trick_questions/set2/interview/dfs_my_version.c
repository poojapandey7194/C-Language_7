#include<stdio.h>


int get_count(bool *matrix, int);

int get_count(bool *matrix, int size)
{
    bool visited[size];

    for(int i = 0;i<size; i++)
    {
        visited[i] = 0;
    }

}

int main()
{
    bool matrix [][] = {{0,1,0,0,0},
                        {1,0,0,0,0},
                        {0,0,0,1,0}, 
                        {0,0,1,0,0},
                        {0,0,0,0,0}};

    printf("%d\n", get_count(matrix, 5));                        
}