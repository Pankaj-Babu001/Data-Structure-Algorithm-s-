#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxProduct(vector<int> arr) {
        if (arr.empty()) return 0;

        long long maxSoFar = arr[0];
        long long minSoFar = arr[0];
        long long result = maxSoFar;

        for (size_t i = 1; i < arr.size(); ++i) {
            long long curr = arr[i];

            // Step 3: Swap if negative to handle product flip
            if (curr < 0) {
                swap(maxSoFar, minSoFar);
            }

            // Step 4: Standard Kadane-like update for products
            maxSoFar = max(curr, maxSoFar * curr);
            minSoFar = min(curr, minSoFar * curr);

            // Step 5: Track global maximum
            result = max(result, maxSoFar);
        }

        return result;
    }
};
