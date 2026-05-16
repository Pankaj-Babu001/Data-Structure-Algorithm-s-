#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [39. Dice throw] — Test Suite
 */

void runTest(int id, int m, int n, int x, long long expected) {
    Solution sol;
    long long result = sol.noOfWays(m, n, x);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: m=" << m << ", n=" << n << ", x=" << x << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [39. Dice throw] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 6, 3, 12, 25);

    // Example 2
    runTest(2, 2, 3, 6, 1);

    // Example 3
    runTest(3, 4, 2, 1, 0); // Impossible sum

    // Example 4: Large result
    runTest(4, 6, 10, 30, 2930455);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
