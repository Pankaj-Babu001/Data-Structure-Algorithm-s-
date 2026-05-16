#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestWindow(string s, string p) {
        int n = s.length();
        int m = p.length();
        
        if (n < m) return "";

        int targetFreq[256] = {0};
        int currentFreq[256] = {0};

        for (char c : p) {
            targetFreq[(unsigned char)c]++;
        }

        int left = 0, startIndex = -1, minLen = INT_MAX;
        int count = 0; // Number of matching characters

        for (int right = 0; right < n; right++) {
            char c = s[right];
            currentFreq[(unsigned char)c]++;

            // If the current character is required and we haven't exceeded its required count
            if (targetFreq[(unsigned char)c] != 0 && currentFreq[(unsigned char)c] <= targetFreq[(unsigned char)c]) {
                count++;
            }

            // When the window becomes valid
            if (count == m) {
                // Try to shrink the window from the left
                while (targetFreq[(unsigned char)s[left]] == 0 || currentFreq[(unsigned char)s[left]] > targetFreq[(unsigned char)s[left]]) {
                    currentFreq[(unsigned char)s[left]]--;
                    left++;
                }

                int windowLen = right - left + 1;
                if (windowLen < minLen) {
                    minLen = windowLen;
                    startIndex = left;
                }
            }
        }

        if (startIndex == -1) return "";
        return s.substr(startIndex, minLen);
    }
};
