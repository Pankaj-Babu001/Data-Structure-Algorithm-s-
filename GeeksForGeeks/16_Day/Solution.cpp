#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Step 2: Greedy check using Difference Array
    bool isPossible(long long target, int k, int w, const vector<int>& arr) {
        int n = arr.size();
        vector<long long> diff(n + 1, 0); 
        long long waterSupply = 0;
        long long kRemaining = k;
        
        for(int i = 0; i < n; ++i) {
            waterSupply += diff[i];
            long long currentVal = arr[i] + waterSupply;
            
            if(currentVal < target) {
                long long needed = target - currentVal;
                if(needed > kRemaining) return false;
                
                waterSupply += needed;
                kRemaining -= needed;
                
                if(i + w < n) {
                    diff[i + w] -= needed;
                }
            }
        }
        return true;
    }

    long long maxMinHeight(vector<int>& arr, int k, int w) {
        long long low = *min_element(arr.begin(), arr.end());
        long long high = *max_element(arr.begin(), arr.end()) + k;
        long long ans = low;

        // Step 1: Binary Search on the maximum possible minimum height
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(mid, k, w, arr)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
