#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [65. Painting the Fence] — Test Suite
 */

void runTest(int id, int n, int k, long long expected) {
    Solution sol;
    long long result = sol.countWays(n, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     N: " << n << ", K: " << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [65. Painting the Fence] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 3, 2, 6);

    // Example 2
    runTest(2, 2, 4, 16);

    // Example 3: Single post
    runTest(3, 1, 10, 10);

    // Example 4: Large k, small n
    runTest(4, 2, 100, 10000);

    // Example 5: Same formula check
    runTest(5, 4, 3, 24 + 42); // (Ways(3) + Ways(2)) * (3-1) = (24 + 9) * 2 = 66
    // Ways(1)=3. Ways(2)=9. Ways(3)=(9+3)*2=24. Ways(4)=(24+9)*2=66.
    runTest(5, 4, 3, 66);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
