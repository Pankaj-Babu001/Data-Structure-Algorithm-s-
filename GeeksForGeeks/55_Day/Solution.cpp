#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCycle(int V, vector<vector<int>>& edges) {
        // Functional graph representation: each node has at most one outgoing edge
        vector<int> next_node(V, -1);
        for (const auto& edge : edges) {
            next_node[edge[0]] = edge[1];
        }

        vector<bool> visited(V, false);
        vector<int> pathStart(V, -1);
        vector<int> dist(V, 0);
        
        int maxCycleLen = -1;

        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                int curr = i;
                int currentDist = 0;
                
                // Traverse the current path until a dead end or a visited node
                while (curr != -1 && !visited[curr]) {
                    visited[curr] = true;
                    dist[curr] = currentDist++;
                    pathStart[curr] = i; 
                    curr = next_node[curr];
                }
                
                // If the loop stopped because we hit a node in the CURRENT path, we found a cycle
                if (curr != -1 && pathStart[curr] == i) {
                    maxCycleLen = max(maxCycleLen, currentDist - dist[curr]);
                }
            }
        }

        return maxCycleLen;
    }
};
