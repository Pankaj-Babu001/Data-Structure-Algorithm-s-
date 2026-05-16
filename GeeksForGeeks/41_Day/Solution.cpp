#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestSwap(string s) {
        int n = s.length();
        int lastPos[10];
        memset(lastPos, -1, sizeof(lastPos));

        // Store the rightmost index of each digit
        for (int i = 0; i < n; i++) {
            lastPos[s[i] - '0'] = i;
        }

        // Try to swap the earliest digit with the largest available digit to its right
        for (int i = 0; i < n; i++) {
            int currentDigit = s[i] - '0';
            
            // Check digits from 9 down to currentDigit + 1
            for (int d = 9; d > currentDigit; d--) {
                if (lastPos[d] > i) {
                    swap(s[i], s[lastPos[d]]);
                    return s; // At most one swap allowed
                }
            }
        }

        return s;
    }
};
