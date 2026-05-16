#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int n = arr1.size();
        int m = arr2.size();

        int i = 0, j = m - 1;
        int minDiff = INT_MAX;
        vector<int> result(2);

        // Standard Two-Pointer approach for sorted arrays
        while (i < n && j >= 0) {
            int currentSum = arr1[i] + arr2[j];
            int currentDiff = abs(currentSum - x);

            // Update the closest pair if a smaller difference is found
            if (currentDiff < minDiff) {
                minDiff = currentDiff;
                result[0] = arr1[i];
                result[1] = arr2[j];
            }

            if (currentSum == x) {
                break; // Perfect match found
            } else if (currentSum > x) {
                j--; // Decrease sum
            } else {
                i++; // Increase sum
            }
        }

        return result;
    }
};