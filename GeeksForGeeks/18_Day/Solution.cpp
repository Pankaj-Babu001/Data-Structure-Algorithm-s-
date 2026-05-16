#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Step 3: Greedy check if 'limit' time is sufficient for 'k' painters
    bool isPossible(vector<int>& arr, int k, long long limit) {
        int painters = 1;
        long long currentSum = 0;
        for (int x : arr) {
            if (currentSum + x <= limit) {
                currentSum += x;
            } else {
                painters++;
                currentSum = x;
            }
        }
        return painters <= k;
    }

    long long minTime(vector<int>& arr, int k) {
        long long low = 0, high = 0;
        for (int x : arr) {
            low = max(low, (long long)x);
            high += x;
        }

        long long ans = high;
        // Step 2: Binary Search for the minimum possible maximum time
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
