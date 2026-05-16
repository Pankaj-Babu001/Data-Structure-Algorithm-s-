#include <iostream>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [30. Isomorphic Strings] — Test Suite
 */

void runTest(int id, string s1, string s2, bool expected) {
    Solution sol;
    bool result = sol.areIsomorphic(s1, s2);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: s1=\"" << s1 << "\", s2=\"" << s2 << "\"" << endl;
        cout << "     Expected: " << (expected ? "true" : "false") << ", Got: " << (result ? "true" : "false") << endl;
    }
}

int main() {
    cout << "\n🔢 [30. Isomorphic Strings] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "aab", "xxy", true);

    // Example 2
    runTest(2, "aab", "xyz", false);

    // Example 3
    runTest(3, "abc", "xxz", false);

    // Example 4: Single char
    runTest(4, "p", "q", true);

    // Example 5: Same string
    runTest(5, "paper", "title", true);

    // Example 6: Different mapping
    runTest(6, "foo", "bar", false);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
