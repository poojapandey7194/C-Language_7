#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void dfs(int node, bool visited[], bool matrix[][5], int size) {
    visited[node] = true;
    for (int i = 0; i < size; i++) {
        if (matrix[node][i] && !visited[i]) {
            dfs(i, visited, matrix, size);
        }
    }
}

int get_count(bool matrix[][5], int size) {
    bool visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = false;
    }

    int connectedComponents = 0;

    // Count connected components using DFS
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            dfs(i, visited, matrix, size);
            connectedComponents++;
        }
    }

    // Calculate the new connections needed, avoiding adjacent airports
    int newConnections = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 2; j < size; j++) {
            if (!matrix[i][j]) {
                newConnections++;
                matrix[i][j] = true;
                matrix[j][i] = true;
            }
        }
    }

    return newConnections;
}

#ifndef RunTests
int main() {
    bool matrix[5][5] = {
        { false, true, false, false, false },
        { true, false, false, false, false },
        { false, false, false, true, false },
        { false, false, true, false, false },
        { false, false, false, false, false }
    };
  
    printf("%d\n", get_count(matrix, 5)); // should print 6
    return 0;
}
#endif
