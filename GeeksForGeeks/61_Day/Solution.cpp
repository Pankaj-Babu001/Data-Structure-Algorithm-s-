#include <bits/stdc++.h>
using namespace std;

class Solution {
    const int MOD = 1e9 + 7;
public:
    int countPartitions(vector<int>& arr, int d) {
        int n = arr.size();
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        
        // s1 + s2 = sum, s1 - s2 = d => 2s1 = sum + d
        if ((totalSum + d) % 2 != 0 || totalSum < d) return 0;
        
        int target = (totalSum + d) / 2;
        vector<int> dp(target + 1, 0);
        dp[0] = 1;
        
        for (int x : arr) {
            for (int j = target; j >= x; j--) {
                dp[j] = (dp[j] + dp[j - x]) % MOD;
            }
        }
        
        return dp[target];
    }
};
