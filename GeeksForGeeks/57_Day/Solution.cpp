#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
        if (V <= 2) {
            vector<int> res;
            for (int i = 0; i < V; i++) res.push_back(i);
            return res;
        }

        vector<vector<int>> adj(V);
        vector<int> degree(V, 0);

        // Step 1: Build Graph and Degrees
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
            degree[edge[0]]++;
            degree[edge[1]]++;
        }

        // Step 2: Push initial leaves
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (degree[i] == 1) q.push(i);
        }

        // Step 3: Peel leaves layer-by-layer
        int remainingNodes = V;
        while (remainingNodes > 2) {
            int layerSize = q.size();
            remainingNodes -= layerSize;

            for (int i = 0; i < layerSize; i++) {
                int leaf = q.front();
                q.pop();

                for (int neighbor : adj[leaf]) {
                    if (--degree[neighbor] == 1) {
                        q.push(neighbor);
                    }
                }
            }
        }

        // Step 4: Extract remaining centers
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front());
            q.pop();
        }
        sort(result.begin(), result.end());
        return result;
    }
};
