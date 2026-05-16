#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        vector<int> inDegree(n, 0);

        // Step 1: Build Graph and Calculate In-Degrees
        for (auto& pre : prerequisites) {
            int u = pre[1]; // Prerequisite
            int v = pre[0]; // Dependent
            adj[u].push_back(v);
            inDegree[v]++;
        }

        // Step 2: Push nodes with 0 in-degree into queue
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 3: Kahn's Algorithm (BFS)
        int completedCount = 0;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            completedCount++;

            for (int neighbor : adj[curr]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Step 4: If completed all, no cycle exists
        return completedCount == n;
    }
};
