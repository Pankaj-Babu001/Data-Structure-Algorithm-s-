#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [55. Length of Longest Cycle in a Graph] — Test Suite
 */

void runTest(int id, int V, vector<vector<int>> edges, int expected) {
    Solution sol;
    int result = sol.longestCycle(V, edges);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [55. Length of Longest Cycle in a Graph] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 7, {{0, 5}, {1, 0}, {2, 4}, {3, 1}, {4, 6}, {5, 6}, {6, 3}}, 5);

    // Example 2
    runTest(2, 8, {{0, 1}, {1, 2}, {2, 3}, {3, 0}, {4, 1}, {5, 4}, {6, 2}, {7, 6}}, 4);

    // Example 3: No cycles
    runTest(3, 3, {{0, 1}, {1, 2}}, -1);

    // Example 4: Multiple disjoint cycles
    runTest(4, 5, {{0, 1}, {1, 0}, {2, 3}, {3, 4}, {4, 2}}, 3); // Cycles of size 2 and 3

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
