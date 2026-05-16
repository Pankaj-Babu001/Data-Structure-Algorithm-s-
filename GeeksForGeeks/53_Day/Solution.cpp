#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBSTs(vector<int>& arr) {
        int n = arr.size();
        // Catalan numbers C0 to C6
        vector<int> catalan = {1, 1, 2, 5, 14, 42, 132};
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            int leftCount = 0;
            int rightCount = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] < arr[i]) {
                    leftCount++;
                } else if (arr[j] > arr[i]) {
                    rightCount++;
                }
            }

            // Total unique BSTs with arr[i] as root = C(leftCount) * C(rightCount)
            result[i] = catalan[leftCount] * catalan[rightCount];
        }

        return result;
    }
};
