#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [68. Target Sum] — Test Suite
 */

void runTest(int id, vector<int> arr, int target, int expected) {
    Solution sol;
    int result = sol.findTargetSumWays(arr, target);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Target: " << target << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [68. Target Sum] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 1, 1, 1, 1}, 3, 5);

    // Example 2
    runTest(2, {1, 2, 3}, 2, 1);

    // Example 3: Zero target
    runTest(3, {1, 1}, 0, 2); // +1-1, -1+1

    // Example 4: Large target
    runTest(4, {1, 1, 1}, 5, 0);

    // Example 5: Target with same parity but sum < target
    runTest(5, {1, 1}, 3, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
