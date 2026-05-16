#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> s;

        // Step 1: Find Previous Smaller Element (PSE)
        // Using indices, and storing the distance (i - L)
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            left[i] = s.empty() ? i + 1 : i - s.top();
            s.push(i);
        }

        // Clear stack for the next pass
        while (!s.empty()) s.pop();

        // Step 2: Find Next Smaller Element (NSE)
        // Using indices, and storing the distance (R - i)
        // Note: Using >= to handle duplicates and avoid overcounting
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n - i : s.top() - i;
            s.push(i);
        }

        // Step 3: Calculate the total sum of minimums
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += (long long)arr[i] * left[i] * right[i];
        }

        return (int)totalSum;
    }
};
