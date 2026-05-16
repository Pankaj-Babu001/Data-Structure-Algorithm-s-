#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findMinDiff(vector<int> a, long long m) {
        long long n = a.size();
        if (m == 0 || n == 0) return 0;
        if (n < m) return -1;
  
        // Step 1: Sort packets to bring similar values together
        sort(a.begin(), a.end());
  
        long long minDiff = LLONG_MAX;
  
        // Step 3: Slide a window of size 'm' across sorted array
        for (long long i = 0; i + m - 1 < n; i++) {
            long long diff = (long long)a[i + m - 1] - a[i];
            minDiff = min(minDiff, diff);
        }
        return minDiff;
    }
};
