#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestKSubstr(string s, int k) {
        int n = s.length();
        int left = 0, maxLen = -1;
        int distinctCount = 0;
        int freq[128] = {0}; // Covers ASCII, specifically lowercase a-z

        for (int right = 0; right < n; right++) {
            // Step 1: Add current character to window
            if (freq[s[right]] == 0) {
                distinctCount++;
            }
            freq[s[right]]++;

            // Step 2: Shrink window if distinct characters > k
            while (distinctCount > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0) {
                    distinctCount--;
                }
                left++;
            }

            // Step 3: Record max length if distinct characters == k
            if (distinctCount == k) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        return maxLen;
    }
};
