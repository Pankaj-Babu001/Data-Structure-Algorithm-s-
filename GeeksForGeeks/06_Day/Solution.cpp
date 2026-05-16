#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int circularSubarraySum(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        int totalSum = 0;
        int currMax = 0, maxSum = arr[0];
        int currMin = 0, minSum = arr[0];

        for (int i = 0; i < n; i++) {
            // Step 1: Normal Kadane's for Maximum Subarray
            currMax = max(arr[i], currMax + arr[i]);
            maxSum = max(maxSum, currMax);

            // Step 2: Kadane's for Minimum Subarray
            currMin = min(arr[i], currMin + arr[i]);
            minSum = min(minSum, currMin);

            // Step 3: Total Sum
            totalSum += arr[i];
        }

        // Step 5: Handle Negative Edge Case
        if (totalSum == minSum) return maxSum;

        // Step 5: Return max of normal and circular cases
        return max(maxSum, totalSum - minSum);
    }
};
