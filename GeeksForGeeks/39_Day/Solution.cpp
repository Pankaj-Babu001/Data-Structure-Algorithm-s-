#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long noOfWays(int m, int n, int x) {
        // Space Optimization using two 1D arrays
        vector<long long> prev(x + 1, 0);
        
        // Base case: 1 way to make sum 0 with 0 dice
        prev[0] = 1;
        
        for (int i = 1; i <= n; i++) {
            vector<long long> curr(x + 1, 0);
            long long windowSum = 0;
            
            for (int j = 1; j <= x; j++) {
                // To get sum j with i dice, we can have the i-th die be any value k in [1, m]
                // sum_ways = sum(prev[j-k]) for k in [1, m]
                // This is a sliding window of size m on the prev array
                
                windowSum += prev[j - 1]; 
                
                if (j - 1 - m >= 0) {
                    windowSum -= prev[j - 1 - m];
                }
                
                curr[j] = windowSum;
            }
            prev = curr;
        }
        
        return prev[x];
    }
};