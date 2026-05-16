#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int overlapInt(vector<vector<int>>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> start_times(n);
        vector<int> end_times(n);

        // Step 1: Extract all start and end points
        for (int i = 0; i < n; ++i) {
            start_times[i] = arr[i][0];
            end_times[i] = arr[i][1];
        }

        // Step 2: Sort both arrays to use two-pointer technique
        sort(start_times.begin(), start_times.end());
        sort(end_times.begin(), end_times.end());

        int max_overlap = 0;
        int current_overlap = 0;
        int i = 0, j = 0;

        // Step 3: Sweep line traversal
        while (i < n && j < n) {
            if (start_times[i] <= end_times[j]) {
                current_overlap++;
                max_overlap = max(max_overlap, current_overlap);
                i++;
            } else {
                current_overlap--;
                j++;
            }
        }

        return max_overlap;
    }
};
