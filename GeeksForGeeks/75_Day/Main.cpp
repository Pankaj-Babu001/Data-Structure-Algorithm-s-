#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [75. Toeplitz Matrix] — Test Suite
 */

void runTest(int id, vector<vector<int>> mat, bool expected) {
    Solution sol;
    bool result = sol.isToeplitz(mat);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << (expected ? "True" : "False") << ", Got: " << (result ? "True" : "False") << endl;
    }
}

int main() {
    cout << "\n🔢 [75. Toeplitz Matrix] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {{6, 7, 8}, {4, 6, 7}, {1, 4, 6}}, true);

    // Example 2
    runTest(2, {{6, 3, 8}, {4, 9, 7}, {1, 4, 6}}, false);

    // Example 3: Rectangular matrix
    runTest(3, {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}}, true);

    // Example 4: Single row
    runTest(4, {{1, 2, 3}}, true);

    // Example 5: Single column
    runTest(5, {{1}, {2}, {3}}, true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
