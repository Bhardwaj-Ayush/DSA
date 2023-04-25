// Ayush Bhardwaj
// Date : 07-03-23
#include <iostream>
#include <queue>

#define MAX_NODES 100

using namespace std;

void bfs(int graph[][MAX_NODES], int start, int numNodes) {
    bool visited[MAX_NODES] = {false};
    queue<int> q;
    visited[start] = true;
    q.push(start);
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        
        for (int neighbor = 0; neighbor < numNodes; neighbor++) {
            if (graph[node][neighbor] == 1 && !visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
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
    
    bfs(graph, start, numNodes);
    
    return 0;
}