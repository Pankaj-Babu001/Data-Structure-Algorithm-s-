#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [59. Chocolates Pickup] — Test Suite
 */

void runTest(int id, int n, int m, vector<vector<int>> grid, int expected) {
    Solution sol;
    int result = sol.solve(n, m, grid);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [59. Chocolates Pickup] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 4, 3, {{4, 1, 2}, {3, 6, 1}, {1, 6, 6}, {3, 1, 2}}, 32);

    // Example 2: Small 2x2
    runTest(2, 2, 2, {{1, 1}, {1, 1}}, 4);

    // Example 3: Single row overlap (though n >= 2)
    runTest(3, 3, 3, {{1, 0, 1}, {0, 5, 0}, {1, 0, 1}}, 9); // (0,0)->(1,1)->(2,1) and (0,2)->(1,1)->(2,2) -> 1+1 + 5 + 1+0 = 9? 
    // Actually: (0,0)->(1,1)->(2,0) = 1+5+1=7. (0,2)->(1,1)->(2,2) = 1+5+1=7. Overlap at (1,1) -> 1+1 + 5 + 1+1 = 9.

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
