#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOnes(vector<int>& arr, int k) {
        int left = 0, right = 0;
        int zeros = 0, max_len = 0, n = arr.size();
        
        while (right < n) {
            // Step 3: Expand window and count zeros
            if (arr[right] == 0) {
                zeros++;
            }
            
            // Step 4: Shrink window if zero count exceeds k
            while (zeros > k) {
                if (arr[left] == 0) {
                    zeros--;
                }
                left++;
            }
            
            // Step 5: Update the maximum length found
            max_len = max(max_len, right - left + 1);
            right++;
        }
        
        return max_len;
    }
};
