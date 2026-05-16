#include <iostream>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [41. Largest number in one swap] — Test Suite
 */

void runTest(int id, string s, string expected) {
    Solution sol;
    string result = sol.largestSwap(s);
    
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
    cout << "\n🔢 [41. Largest number in one swap] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "768", "867");

    // Example 2
    runTest(2, "333", "333");

    // Example 3: Multiple occurrences of max digit
    runTest(3, "98368", "98863");

    // Example 4: Max digit already at front
    runTest(4, "1993", "9913");

    // Example 5: No possible swap to increase
    runTest(5, "98765", "98765");

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
