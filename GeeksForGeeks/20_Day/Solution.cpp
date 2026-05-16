#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canAttend(vector<vector<int>> &arr) {
        if (arr.empty()) return true;
        
        // Step 1: Sort based on start times
        sort(arr.begin(), arr.end());
        
        // Step 2: Check for overlaps between adjacent meetings
        for (size_t i = 1; i < arr.size(); i++) {
            // If current meeting starts before the previous one ends
            if (arr[i][0] < arr[i-1][1]) {
                return false;
            }
        }
        return true;
    }
};
