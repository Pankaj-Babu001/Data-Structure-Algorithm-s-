#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Step 2: Helper function to calculate total cost for a target height
    long long calculateCost(const vector<int>& h, const vector<int>& cost, int targetH) {
        long long totalCost = 0;
        for (size_t i = 0; i < h.size(); ++i) {
            totalCost += (long long)abs(h[i] - targetH) * cost[i];
        }
        return totalCost;
    }

    long long minCost(vector<int>& h, vector<int>& cost) {
        int low = INT_MAX, high = INT_MIN;
        for (int val : h) {
            low = min(low, val);
            high = max(high, val);
        }

        // Step 3: Ternary Search on the convex cost function
        while (high - low > 2) {
            int m1 = low + (high - low) / 3;
            int m2 = high - (high - low) / 3;
            
            if (calculateCost(h, cost, m1) < calculateCost(h, cost, m2)) {
                high = m2;
            } else {
                low = m1;
            }
        }

        // Final step: Evaluate remaining points
        long long ans = LLONG_MAX;
        for (int i = low; i <= high; ++i) {
            ans = min(ans, calculateCost(h, cost, i));
        }
        
        return ans;
    }
};
