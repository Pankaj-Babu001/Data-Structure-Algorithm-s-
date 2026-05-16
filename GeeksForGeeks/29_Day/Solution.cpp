#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int prefixSum = 0, ans = 0;
        // store[j] = earliest index where prefix sum equals -j
        vector<int> store{-1}; 

        for (int i = 0; i < (int)arr.size(); i++) {
            // Transformation: > k is +1, <= k is -1
            prefixSum += (arr[i] > k ? 1 : -1);

            if (prefixSum > 0) {
                // Entire prefix [0..i] is valid
                ans = i + 1;
            } else if (1 - prefixSum < (int)store.size()) {
                // Find earliest index where prefix sum was exactly prefixSum - 1
                // This ensures a subarray sum of (prefixSum) - (prefixSum - 1) = 1
                ans = max(ans, i - store[1 - prefixSum]);
            }

            // Since prefixSum changes by only +/- 1, we only record a new
            // negative value the first time its magnitude matches store.size()
            if ((int)store.size() == -prefixSum) {
                store.push_back(i);
            }
        }

        return ans;
    }
};
