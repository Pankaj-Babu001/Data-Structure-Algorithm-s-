#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int maxVal = 0;
        for (int x : arr) maxVal = max(maxVal, x);

        // Value-based frequency optimization O(V^2)
        vector<int> freq(maxVal + 1, 0);
        for (int x : arr) freq[x]++;

        for (int i = 1; i <= maxVal; i++) {
            if (freq[i] == 0) continue;
            for (int j = i; j <= maxVal; j++) {
                if (freq[j] == 0) continue;

                // Handle the case where a and b are the same (needs at least 2)
                if (i == j && freq[i] < 2) continue;

                long long sumSq = (long long)i * i + (long long)j * j;
                int k = sqrt(sumSq);

                if ((long long)k * k == sumSq && k <= maxVal && freq[k] > 0) {
                    return true;
                }
            }
        }

        return false;
    }
};