#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int target) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);
        
        // s1 + s2 = sum, s1 - s2 = target => 2s1 = sum + target
        if (abs(target) > sum || (sum + target) % 2 != 0) return 0;
        
        int targetSum = (sum + target) / 2;
        vector<int> dp(targetSum + 1, 0);
        dp[0] = 1;
        
        for (int x : arr) {
            for (int j = targetSum; j >= x; j--) {
                dp[j] += dp[j - x];
            }
        }
        
        return dp[targetSum];
    }
};
