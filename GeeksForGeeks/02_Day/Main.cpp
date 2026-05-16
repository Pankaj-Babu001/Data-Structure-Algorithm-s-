#include <iostream>
#include <string>
#include <vector>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [02. First non-repeating character in a stream] — Test Suite
 */

void runTest(int id, string s, string expected) {
    Solution sol;
    string result = sol.firstNonRepeating(s);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: \"" << s << "\"" << endl;
        cout << "     Expected: \"" << expected << "\", Got: \"" << result << "\"" << endl;
    }
}

int main() {
    cout << "\n🔢 [02. First non-repeating character in a stream] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, "aabc", "a#bb");
    runTest(2, "bb", "b#");

    // Additional Edge Cases
    runTest(3, "abcdef", "aaaaaa"); // All unique
    runTest(4, "aabbcc", "a#b#c#"); // All repeating in pairs
    runTest(5, "zz", "z#");

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
