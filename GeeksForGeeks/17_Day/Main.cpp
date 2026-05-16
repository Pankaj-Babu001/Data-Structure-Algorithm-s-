#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [17. All numbers with specific difference] — Test Suite
 */

void runTest(int id, long long n, long long d, long long expected) {
    Solution sol;
    long long result = sol.getCount(n, d);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: n=" << n << ", d=" << d << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [17. All numbers with specific difference] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 13, 2, 4);

    // Example 2
    runTest(2, 14, 3, 5);

    // Edge Case: d > n
    runTest(3, 10, 20, 0);
    
    // Large N Case
    runTest(4, 100, 90, 1); // Only 100 works

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
