#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kokoEat(vector<int>& piles, int H) {
        int low = 1, high = 0;
        for (int p : piles) high = max(high, p);
        
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = 0;
            
            // Step 2: Calculate hours for speed 'mid'
            for (int p : piles) {
                hours += (long long)(p + mid - 1) / mid;
            }
            
            // Step 3: Binary search condition
            if (hours <= H) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};
