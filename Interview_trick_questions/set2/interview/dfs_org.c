#include <stdio.h>
#include <stdbool.h>

void dfs(int node, bool* visited, bool* matrix, int size) {
    visited[node] = true;
    for (int i = 0; i < size; i++) {
        if (*((matrix + node * size) + i) && !visited[i]) {
            dfs(i, visited, matrix, size);
        }
    }
}

int get_count(bool* matrix, int size)
{
    // Write your code here
    
   bool visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = false;
    }

    int existingConnections = 0;

    //calculate existing components
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            dfs(i, visited, matrix, size);
            existingConnections++;
        }
    }

    //calculate new connections
    int newConnections = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 2; j < size; j++) {
            if (!*((matrix + i * size) + j)) {
                newConnections++;
                *((matrix + i * size) + j) = true;
                *((matrix + j * size) + i) = true;
            }
        }
    }

    return newConnections;
}

#ifndef RunTests
int main()
{
    bool matrix[5][5] = {
        { false, true, false, false, false },
        { true, false, false, false, false },
        { false, false, false, true, false },
        { false, false, true, false, false },
        { false, false, false, false, false }
    };
  
    printf("%d\n", get_count((bool*) matrix, 5)); // should print 6
}
#endif