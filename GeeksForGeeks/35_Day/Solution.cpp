#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalElements(vector<int>& arr) {
        int n = arr.size();
        int left = 0, maxLen = 0;
        unordered_map<int, int> freq;

        for (int right = 0; right < n; right++) {
            // Expand the window
            freq[arr[right]]++;

            // Shrink the window if more than two distinct integers
            while (freq.size() > 2) {
                freq[arr[left]]--;
                if (freq[arr[left]] == 0) {
                    freq.erase(arr[left]);
                }
                left++;
            }

            // Update maximum length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
