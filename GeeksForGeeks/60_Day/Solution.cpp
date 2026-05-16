#include <bits/stdc++.h>
using namespace std;

class Solution {
    int timer = 0;
    void dfs(int u, int p, vector<int> adj[], vector<int>& tin, vector<int>& low, vector<int>& vis, vector<int>& mark) {
        vis[u] = 1;
        tin[u] = low[u] = timer++;
        int children = 0;

        for (auto v : adj[u]) {
            if (v == p) continue;
            if (!vis[v]) {
                dfs(v, u, adj, tin, low, vis, mark);
                low[u] = min(low[u], low[v]);
                if (low[v] >= tin[u] && p != -1) {
                    mark[u] = 1;
                }
                children++;
            } else {
                low[u] = min(low[u], tin[v]);
            }
        }
        if (p == -1 && children > 1) mark[u] = 1;
    }

public:
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> tin(V, -1), low(V, -1), vis(V, 0), mark(V, 0);
        timer = 0;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) dfs(i, -1, adj, tin, low, vis, mark);
        }

        vector<int> res;
        for (int i = 0; i < V; i++) {
            if (mark[i]) res.push_back(i);
        }

        if (res.empty()) return {-1};
        sort(res.begin(), res.end());
        return res;
    }
};
