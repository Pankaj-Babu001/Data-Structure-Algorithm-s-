#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        // 1. Sort the numbers to ensure we only check divisors in one direction (nums[i] % nums[j] == 0)
        sort(nums.begin(), nums.end());

        // 2. dp[i] stores the size of the largest divisible subset ending at index i
        //    parent[i] stores the index of the previous element in the subset for reconstruction
        vector<int> dp(n, 1);
        vector<int> parent(n, -1);

        int max_size = 1;
        int last_index = 0;

        // 3. Fill the DP table
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                // Since nums is sorted, if nums[i] % nums[j] == 0, then nums[j] is a divisor
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
            // Track the overall maximum subset size and its ending index
            if (dp[i] > max_size) {
                max_size = dp[i];
                last_index = i;
            }
        }

        // 4. Reconstruct the subset using the parent pointers
        vector<int> result;
        while (last_index != -1) {
            result.push_back(nums[last_index]);
            last_index = parent[last_index];
        }

        // The subset is built backwards, but the order within the result doesn't strictly matter for validity
        // However, returning in ascending order is often cleaner.
        reverse(result.begin(), result.end());
        return result;
    }
};