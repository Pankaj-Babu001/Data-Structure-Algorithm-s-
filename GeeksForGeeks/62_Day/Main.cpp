#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [62. Minimum Cost to Connect All Houses] — Test Suite
 */

void runTest(int id, vector<vector<int>> houses, int expected) {
    Solution sol;
    int result = sol.minCost(houses);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [62. Minimum Cost to Connect All Houses] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {{0, 7}, {0, 9}, {20, 7}, {30, 7}, {40, 70}}, 105);

    // Example 2
    runTest(2, {{0, 0}, {1, 1}, {1, 3}, {3, 0}}, 7);

    // Example 3: Triangle
    runTest(3, {{0, 0}, {3, 4}, {0, 4}}, 7); // (0,0) to (0,4) is 4. (0,4) to (3,4) is 3. Total 7.

    // Example 4: Square
    runTest(4, {{0, 0}, {1, 0}, {1, 1}, {0, 1}}, 3);

    // Example 5: Same points
    runTest(5, {{0, 0}, {0, 0}, {1, 1}}, 2);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
