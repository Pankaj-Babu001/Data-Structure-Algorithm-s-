#include <iostream>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [38. Smallest window containing all characters] — Test Suite
 */

void runTest(int id, string s, string p, string expected) {
    Solution sol;
    string result = sol.smallestWindow(s, p);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: s=\"" << s << "\", p=\"" << p << "\"" << endl;
        cout << "     Expected: \"" << expected << "\", Got: \"" << result << "\"" << endl;
    }
}

int main() {
    cout << "\n🔢 [38. Smallest window containing all characters] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "timetopractice", "toc", "toprac");

    // Example 2
    runTest(2, "zoomlazapzo", "oza", "apzo");

    // Example 3
    runTest(3, "zoom", "zooe", "");

    // Example 4: Exact match
    runTest(4, "abcdef", "def", "def");

    // Example 5: Duplicate characters
    runTest(5, "aaabbbccc", "abc", "abbbc"); // Smallest window containing at least one of each

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
