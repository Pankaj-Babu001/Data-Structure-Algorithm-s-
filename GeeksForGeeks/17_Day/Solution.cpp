#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long sumDigits(long long n) {
        long long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    long long getCount(long long n, long long d) {
        long long low = 1, high = n;
        long long ans = -1;

        // Step 2: Binary Search for the first number x such that x - sumDigits(x) >= d
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid - sumDigits(mid) >= d) {
                ans = mid;
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }

        return (ans == -1) ? 0 : (n - ans + 1);
    }
};
