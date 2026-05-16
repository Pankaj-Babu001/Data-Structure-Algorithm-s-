#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& arr) {
        int n = arr.size();
        stack<int> st; // Monotonic stack to store indices
        long long totalValidSubarrays = 0;

        // Traverse from right to left to find the Next Smaller Element
        for (int i = n - 1; i >= 0; i--) {
            // Maintain strictly increasing order in the stack (from bottom)
            // Remove elements that are NOT strictly smaller than arr[i]
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            // Boundary is either the next smaller element or the end of the array
            int boundary = st.empty() ? n : st.top();

            // All subarrays starting at 'i' and ending before 'boundary' are valid
            totalValidSubarrays += (boundary - i);

            // Add current index as a potential boundary for elements to the left
            st.push(i);
        }

        return totalValidSubarrays;
    }
};
