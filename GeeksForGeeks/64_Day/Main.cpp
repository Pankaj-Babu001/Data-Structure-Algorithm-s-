#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [64. Consecutive 1's not allowed] — Test Suite
 */

void runTest(int id, int n, long long expected) {
    Solution sol;
    long long result = sol.countStrings(n);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     N: " << n << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [64. Consecutive 1's not allowed] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 3, 5);

    // Example 2
    runTest(2, 2, 3);

    // Example 3
    runTest(3, 1, 2);

    // Example 4: Larger N
    runTest(4, 5, 13); // 00000, 00001, 00010, 00100, 00101, 01000, 01001, 01010, 10000, 10001, 10010, 10100, 10101

    // Example 5: Boundary n=44 (from original constraints)
    runTest(5, 44, 1836311903 % 1000000007); 

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
