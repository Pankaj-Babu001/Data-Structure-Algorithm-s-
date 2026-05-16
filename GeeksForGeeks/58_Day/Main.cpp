#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [58. Number of Ways to Arrive at Destination] — Test Suite
 */

void runTest(int id, int V, vector<vector<int>> edges, int expected) {
    Solution sol;
    int result = sol.countPaths(V, edges);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     V: " << V << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [58. Number of Ways to Arrive at Destination] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 4, {{0, 1, 2}, {1, 2, 3}, {0, 3, 5}, {1, 3, 3}, {2, 3, 4}}, 2);

    // Example 2
    runTest(2, 6, {{0, 2, 3}, {0, 4, 2}, {0, 5, 7}, {2, 3, 1}, {2, 5, 5}, {5, 3, 3}, {5, 1, 4}, {1, 4, 1}, {4, 5, 5}}, 4);

    // Example 3: Single path
    runTest(3, 3, {{0, 1, 10}, {1, 2, 10}}, 1);

    // Example 4: No path
    runTest(4, 3, {{0, 1, 1}}, 0);

    // Example 5: Triangle
    runTest(5, 3, {{0, 1, 2}, {1, 2, 2}, {0, 2, 4}}, 2); // 0->2 and 0->1->2 both time 4

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
