#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void getSubsetSums(int start, int end, const vector<int>& arr, vector<long long>& sums) {
        int n = end - start + 1;
        // Step 2: Use bitmasking to generate all 2^n possible subsets
        for (int i = 0; i < (1 << n); i++) {
            long long sum = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sum += arr[start + j];
                }
            }
            sums.push_back(sum);
        }
    }

public:
    int countSubset(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return (k == 0) ? 1 : 0;
        
        // Step 1: Divide and Conquer - Split into two halves
        int mid = n / 2;
        vector<long long> leftSums, rightSums;
        
        // Step 2: Generate subset sums for both halves
        getSubsetSums(0, mid - 1, arr, leftSums);
        getSubsetSums(mid, n - 1, arr, rightSums);
        
        // Step 3: Sort for Efficiency - Sort the rightSums array
        sort(rightSums.begin(), rightSums.end());
        
        long long totalCount = 0;
        
        // Step 4: Binary Search Match - For each sum in left, find k-S_L in right
        for (long long sL : leftSums) {
            long long target = (long long)k - sL;
            
            // Step 5: Accumulate frequency of the target sum
            auto range = equal_range(rightSums.begin(), rightSums.end(), target);
            totalCount += (range.second - range.first);
        }
        
        return (int)totalCount;
    }
};
