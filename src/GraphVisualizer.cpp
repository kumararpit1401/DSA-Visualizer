#include "GraphVisualizer.h"
#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
#include <queue>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

void waitGraph() {
    this_thread::sleep_for(milliseconds(500));
}

void graphVisualizer() {
    int n, e;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;

    unordered_map<int, vector<int>> graph;
    cout << "Enter edges (e.g., 0 1):\n";
    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    queue<int> q;
    set<int> visited;

    q.push(start);
    visited.insert(start);

    cout << "\n\U0001F500 BFS Traversal:\n";
    while (!q.empty()) {
        int current = q.front(); q.pop();
        cout << "-> Visiting: " << current << "\n";
        waitGraph();

        for (int neighbor : graph[current]) {
            if (!visited.count(neighbor)) {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}
