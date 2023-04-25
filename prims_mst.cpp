// Ayush Bhardwaj
// Date : 07-03-23

#include <iostream>
#include <queue>
#include <utility>

#define MAX_NODES 100

using namespace std;

const int INF = 1e9;

int primMST(int graph[][MAX_NODES], int numNodes, int start) {
    int dist[MAX_NODES];
    bool visited[MAX_NODES] = {false};
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    // Initialize distances to all nodes as infinity
    for (int i = 0; i < numNodes; i++) {
        dist[i] = INF;
    }
    
    // Add the starting node to the priority queue with distance 0
    pq.push(make_pair(0, start));
    dist[start] = 0;
    
    while (!pq.empty()) {
        // Get the node with the minimum distance from the priority queue
        int node = pq.top().second;
        pq.pop();
        
        // If the node has already been visited, skip it
        if (visited[node]) {
            continue;
        }
        visited[node] = true;
        
        // Update distances to the neighbors of the current node
        for (int neighbor = 0; neighbor < numNodes; neighbor++) {
            if (graph[node][neighbor] > 0 && !visited[neighbor] && graph[node][neighbor] < dist[neighbor]) {
                dist[neighbor] = graph[node][neighbor];
                pq.push(make_pair(dist[neighbor], neighbor));
            }
        }
    }
    
    // Calculate the sum of all distances to get the total weight of the MST
    int totalWeight = 0;
    for (int i = 0; i < numNodes; i++) {
        if (dist[i] != INF) {
            totalWeight += dist[i];
        }
    }
    
    return totalWeight;
}

int main() {
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    int numNodes = 5;
    int start = 0;
    
    int totalWeight = primMST(graph, numNodes, start);
    
    cout << "Total weight of the MST: " << totalWeight << endl;
    
    return 0;
}
