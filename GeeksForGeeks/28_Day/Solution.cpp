#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSumSpan(vector<int>& a1, vector<int>& a2) {
        int n = a1.size();
        
        // map stores the first occurrence index of each prefix difference value
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        int maxLen = 0;
        
        for (int i = 0; i < n; i++) {
            // Difference of the two arrays effectively creates a new array
            // We need the longest subarray in this new array with sum 0
            prefixSum += (a1[i] - a2[i]);
            
            if (prefixSum == 0) {
                maxLen = i + 1;
            } else if (mp.find(prefixSum) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum]);
            } else {
                mp[prefixSum] = i;
            }
        }
        
        return maxLen;
    }
};
