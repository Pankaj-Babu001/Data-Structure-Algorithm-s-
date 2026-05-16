#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Solution for Maximum of all subarrays of size k using a Monotonic Deque.
 * 
 * Time Complexity: O(N)
 * Space Complexity: O(K)
 */
class Solution {
public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int> result;
        // Step 1: Deque stores indices of elements in decreasing order of their values
        deque<int> dq;
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            // Step 3: Remove outgoing elements (out of current window)
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

            // Step 4: Maintain Monotonicity - Remove elements smaller than current from back
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }

            // Step 5: Add current element index
            dq.push_back(i);

            // Step 6: Record maximum of the current window (at the front of deque)
            if (i >= k - 1) {
                result.push_back(arr[dq.front()]);
            }
        }

        return result;
    }
};
