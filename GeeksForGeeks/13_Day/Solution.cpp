#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        
        // Step 1: Check if already sorted
        if (arr[low] <= arr[high]) return 0;

        // Step 2: Binary search for the index of the minimum element
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return low;
    }
};
