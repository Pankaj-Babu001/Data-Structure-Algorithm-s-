#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& houses) {
        int n = houses.size();
        if (n <= 1) return 0;

        vector<int> minDist(n, INT_MAX);
        vector<bool> inMST(n, false);
        int totalCost = 0;

        minDist[0] = 0;

        for (int i = 0; i < n; i++) {
            int u = -1;
            // Find minimum distance node not in MST
            for (int v = 0; v < n; v++) {
                if (!inMST[v] && (u == -1 || minDist[v] < minDist[u])) {
                    u = v;
                }
            }

            if (u == -1) break;

            inMST[u] = true;
            totalCost += minDist[u];

            // Update distances for neighbors (all other nodes in a complete graph)
            for (int v = 0; v < n; v++) {
                if (!inMST[v]) {
                    int d = abs(houses[u][0] - houses[v][0]) + abs(houses[u][1] - houses[v][1]);
                    if (d < minDist[v]) {
                        minDist[v] = d;
                    }
                }
            }
        }

        return totalCost;
    }
};
