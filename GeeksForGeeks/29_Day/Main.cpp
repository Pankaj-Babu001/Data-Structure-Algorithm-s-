#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [29. Longest Subarray with Majority Greater than K] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        res += to_string(vec[i]) + (i == n - 1 ? "" : ", ");
        if (i > 10) { res += "..."; break; }
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, int expected) {
    Solution sol;
    int result = sol.longestSubarray(arr, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", k=" << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [29. Longest Subarray with Majority Greater than K] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 2, 3, 4, 1}, 2, 3);

    // Example 2
    runTest(2, {6, 5, 3, 4}, 2, 4);

    // Example 3: All elements <= k
    runTest(3, {1, 1, 1}, 5, 0);

    // Example 4: Majority throughout
    runTest(4, {5, 1, 5, 1, 5}, 3, 5);

    // Edge Case: Single element
    runTest(5, {10}, 5, 1);
    runTest(6, {2}, 5, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
