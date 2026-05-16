#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSum(vector<int>& arr) {
        int n = arr.size();
        long long totalSum = 0;
        long long currVal = 0;

        // Step 1: Calculate total sum and initial configuration value
        for (int i = 0; i < n; ++i) {
            totalSum += arr[i];
            currVal += (long long)i * arr[i];
        }

        long long maxVal = currVal;
        
        // Step 3: Iterate through rotations in O(1) each
        for (int i = 1; i < n; ++i) {
            // Formula: next_val = curr_val + totalSum - n * last_element
            currVal = currVal + totalSum - (long long)n * arr[n - i];
            maxVal = max(maxVal, currVal);
        }

        return maxVal;
    }
};
