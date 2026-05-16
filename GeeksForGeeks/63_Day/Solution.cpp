#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxProfit(vector<int>& arr, int k) {
        int n = arr.size();
        if (n <= 1) return 0;

        // hold: max profit if we have a stock in hand
        // free: max profit if we don't have a stock in hand
        long long hold = -arr[0];
        long long free = 0;

        for (int i = 1; i < n; i++) {
            long long prevFree = free;
            // Sell or stay free
            free = max(free, hold + arr[i] - k);
            // Buy or stay holding
            hold = max(hold, prevFree - arr[i]);
        }

        return free;
    }
};
