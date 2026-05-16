#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return 0;

        int currentXOR = 0;
        // Step 1: Initial window XOR
        for (int i = 0; i < k; i++) {
            currentXOR ^= arr[i];
        }

        int maxXOR = currentXOR;

        // Step 2: Slide the window of size k
        for (int i = k; i < n; i++) {
            // XOR out the element that is sliding out
            // XOR in the element that is sliding in
            currentXOR ^= arr[i - k];
            currentXOR ^= arr[i];
            
            if (currentXOR > maxXOR) {
                maxXOR = currentXOR;
            }
        }

        return maxXOR;
    }
};
