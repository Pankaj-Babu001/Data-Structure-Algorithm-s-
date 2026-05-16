#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subarrayXor(vector<int>& arr, int k) {
        // Step 1: Initialize frequency map and prefix XOR
        unordered_map<int, int> freq;
        freq[0] = 1; // Base case for subarrays starting from index 0

        int curXOR = 0;
        long long ans = 0;

        // Step 2: Iterate and count subarrays using Target = P ^ k
        for (int x : arr) {
            curXOR ^= x;
            int target = curXOR ^ k;
            
            // Add frequency of target prefix XOR
            if (freq.find(target) != freq.end()) {
                ans += freq[target];
            }
            
            // Update current prefix XOR frequency
            freq[curXOR]++;
        }

        return ans;
    }
};
