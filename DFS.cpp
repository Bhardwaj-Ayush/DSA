// Ayush Bhardwaj
// Date : 07-03-23
#include <iostream>

#define MAX_NODES 100

using namespace std;

void dfs(int graph[][MAX_NODES], int node, bool visited[]) {
    visited[node] = true;
    cout << node << " ";
    
    for (int neighbor = 0; neighbor < MAX_NODES; neighbor++) {
        if (graph[node][neighbor] == 1 && !visited[neighbor]) {
            dfs(graph, neighbor, visited);
        }
    }
}

void dfsTraversal(int graph[][MAX_NODES], int start, int numNodes) {
    bool visited[MAX_NODES] = {false};
    dfs(graph, start, visited);
}

int main() {
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}
    };
    int start = 0;
    int numNodes = 4;
    
    dfsTraversal(graph, start, numNodes);
    
    return 0;
}
