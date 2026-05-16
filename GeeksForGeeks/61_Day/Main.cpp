#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [61. Partitions with Given Difference] — Test Suite
 */

void runTest(int id, vector<int> arr, int d, int expected) {
    Solution sol;
    int result = sol.countPartitions(arr, d);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Diff: " << d << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [61. Partitions with Given Difference] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {5, 2, 6, 4}, 3, 1);

    // Example 2
    runTest(2, {1, 1, 1, 1}, 0, 6);

    // Example 3
    runTest(3, {3, 2, 7, 1}, 4, 0);

    // Example 4: Large diff
    runTest(4, {1, 2, 3}, 10, 0);

    // Example 5: Handling Zeros
    runTest(5, {0, 0, 1}, 1, 4); // Target = (1+1)/2 = 1. Subsets: {1}, {0,1}, {0,1}, {0,0,1}

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
