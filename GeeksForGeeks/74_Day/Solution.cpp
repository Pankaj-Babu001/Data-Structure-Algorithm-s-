#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countIncreasing(vector<int>& arr) {
        int n = arr.size();
        if (n < 2) return 0;
        
        long long total = 0;
        long long len = 1;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                len++;
            } else {
                total += (len * (len - 1)) / 2;
                len = 1;
            }
        }
        
        total += (len * (len - 1)) / 2;
        return total;
    }
};
