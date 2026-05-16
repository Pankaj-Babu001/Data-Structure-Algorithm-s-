#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        int parity = 0; // Tracks the current flip state (0 or 1)
        int flipCount = 0;
        vector<int> isFlipped(n, 0); // Marks where a flip of length k starts

        for (int i = 0; i < n; i++) {
            // If the influence of a flip that started at i-k ends here
            if (i >= k) {
                parity ^= isFlipped[i - k];
            }

            // If current element (with active flips) is 0
            if ((arr[i] ^ parity) == 0) {
                // If we don't have enough elements left to flip k elements
                if (i + k > n) {
                    return -1;
                }

                // Start a new flip
                isFlipped[i] = 1;
                parity ^= 1;
                flipCount++;
            }
        }

        return flipCount;
    }
};
