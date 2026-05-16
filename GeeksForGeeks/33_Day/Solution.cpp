#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = 0; // Pointer for the next non-zero position

        // Single pass swap logic
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};