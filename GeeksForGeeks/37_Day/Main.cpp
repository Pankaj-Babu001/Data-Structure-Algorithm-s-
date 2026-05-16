#include <iostream>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [37. Longest K unique characters substring] — Test Suite
 */

void runTest(int id, string s, int k, int expected) {
    Solution sol;
    int result = sol.longestKSubstr(s, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: s=\"" << s << "\", k=" << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [37. Longest K unique characters substring] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "aabacbebebe", 3, 7);

    // Example 2
    runTest(2, "aaaa", 2, -1);

    // Example 3
    runTest(3, "aabaaab", 2, 7);

    // Example 4: Exact k unique
    runTest(4, "abcdef", 3, 3);

    // Example 5: Single character
    runTest(5, "a", 1, 1);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
