#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [56. Course Schedule I] — Test Suite
 */

void runTest(int id, int n, vector<vector<int>> prerequisites, bool expected) {
    Solution sol;
    bool result = sol.canFinish(n, prerequisites);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     N: " << n << endl;
        cout << "     Expected: " << (expected ? "true" : "false") << ", Got: " << (result ? "true" : "false") << endl;
    }
}

int main() {
    cout << "\n🔢 [56. Course Schedule I] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 4, {{2, 0}, {2, 1}, {3, 2}}, true);

    // Example 2
    runTest(2, 3, {{0, 1}, {1, 2}, {2, 0}}, false);

    // Example 3: No prerequisites
    runTest(3, 2, {}, true);

    // Example 4: Single dependency
    runTest(4, 2, {{1, 0}}, true);

    // Example 5: Disjoint graphs
    runTest(5, 5, {{1, 0}, {3, 4}}, true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
