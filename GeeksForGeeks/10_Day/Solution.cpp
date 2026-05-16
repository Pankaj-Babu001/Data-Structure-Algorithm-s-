#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestDiff(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        // Step 1: Sort all three arrays
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        sort(arr3.begin(), arr3.end());

        int n1 = arr1.size(), n2 = arr2.size(), n3 = arr3.size();
        int i = 0, j = 0, k = 0;
        
        long long min_diff = LLONG_MAX;
        long long min_sum = LLONG_MAX;
        vector<int> res;

        // Step 3: Three-pointer iteration
        while (i < n1 && j < n2 && k < n3) {
            int a = arr1[i], b = arr2[j], c = arr3[k];

            int curr_min = min({a, b, c});
            int curr_max = max({a, b, c});
            long long curr_diff = (long long)curr_max - curr_min;
            long long curr_sum = (long long)a + b + c;

            // Step 4: Update if a better triplet is found
            if (curr_diff < min_diff) {
                min_diff = curr_diff;
                min_sum = curr_sum;
                res = {a, b, c};
            } 
            else if (curr_diff == min_diff && curr_sum < min_sum) {
                min_sum = curr_sum;
                res = {a, b, c};
            }

            // Step 5: Increment the pointer of the minimum value
            if (curr_min == a) i++;
            else if (curr_min == b) j++;
            else k++;
        }
        
        // Step 6: Return result in decreasing order
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};
