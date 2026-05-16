#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [74. Count increasing Subarrays] — Test Suite
 */

void runTest(int id, vector<int> arr, long long expected) {
    Solution sol;
    long long result = sol.countIncreasing(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [74. Count increasing Subarrays] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 4, 5, 3, 7, 9}, 6);

    // Example 2
    runTest(2, {1, 3, 3, 2, 3, 5}, 4);

    // Example 3
    runTest(3, {2, 2, 2, 2}, 0);

    // Example 4: Single segment
    runTest(4, {1, 2, 3, 4, 5}, 10); // 5*4/2 = 10

    // Example 5: Decreasing
    runTest(5, {5, 4, 3, 2, 1}, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
