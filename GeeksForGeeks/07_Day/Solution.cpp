#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // Step 3: Update the minimum price found so far
            if (price < minPrice) {
                minPrice = price;
            } 
            // Step 4 & 5: Calculate profit if sold today and update maxProfit
            else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }
        return maxProfit;
    }
};
