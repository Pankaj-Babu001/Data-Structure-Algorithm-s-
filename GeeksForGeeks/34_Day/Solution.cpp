#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWater(vector<int>& arr) {
        int n = arr.size();
        if (n <= 2) return 0;
        
        int left = 0, right = n - 1;
        int lMax = 0, rMax = 0;
        int totalWater = 0;
        
        while (left < right) {
            // Process the side with the smaller height bound
            if (arr[left] <= arr[right]) {
                if (arr[left] >= lMax) {
                    lMax = arr[left];
                } else {
                    totalWater += lMax - arr[left];
                }
                left++;
            } else {
                if (arr[right] >= rMax) {
                    rMax = arr[right];
                } else {
                    totalWater += rMax - arr[right];
                }
                right--;
            }
        }
        
        return totalWater;
    }
};
