#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissing(vector<int>& arr, int low, int high) {
        // Step 1: Store elements in a hash set for O(1) lookup
        unordered_set<int> present(arr.begin(), arr.end());
        vector<int> result;
        
        // Step 2: Iterate through the range and collect missing numbers
        for (int num = low; num <= high; num++) {
            if (present.find(num) == present.end()) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};
