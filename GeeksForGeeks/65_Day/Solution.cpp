#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countWays(int n, int k) {
        if (n == 1) return k;
        if (n == 2) return (long long)k * k;

        long long prev2 = k;
        long long prev1 = (long long)k * k;
        long long curr = 0;

        for (int i = 3; i <= n; i++) {
            // total[i] = (total[i-1] + total[i-2]) * (k-1)
            curr = (prev1 + prev2) * (k - 1);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
