#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [54. Rotten Oranges] — Test Suite
 */

void runTest(int id, vector<vector<int>> mat, int expected) {
    Solution sol;
    int result = sol.orangesRotting(mat);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [54. Rotten Oranges] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {{2, 1, 0, 2, 1}, {1, 0, 1, 2, 1}, {1, 0, 0, 2, 1}}, 2);

    // Example 2
    runTest(2, {{2, 1, 0, 2, 1}, {0, 0, 1, 2, 1}, {1, 0, 0, 2, 1}}, -1);

    // Example 3: Already all rotten/empty
    runTest(3, {{2, 0, 2}, {0, 0, 0}, {2, 0, 2}}, 0);

    // Example 4: Single fresh isolated
    runTest(4, {{2, 0, 1}}, -1);

    // Example 5: Simple path
    runTest(5, {{2, 1, 1}}, 2);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
