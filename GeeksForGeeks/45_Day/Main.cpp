#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [45. Generate IP Addresses] — Test Suite
 */

void runTest(int id, string s, vector<string> expected) {
    Solution sol;
    vector<string> result = sol.generateIp(s);
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: \"" << s << "\"" << endl;
        cout << "     Got: [";
        for(int i=0; i<result.size(); i++) cout << (i==0?"":", ") << result[i];
        cout << "]" << endl;
    }
}

int main() {
    cout << "\n🔢 [45. Generate IP Addresses] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "255678166", {"25.56.78.166", "255.6.78.166", "255.67.8.166", "255.67.81.66"});

    // Example 2
    runTest(2, "25505011535", {});

    // Example 3: Leading zeros
    runTest(3, "0000", {"0.0.0.0"});

    // Example 4: Minimum length
    runTest(4, "1111", {"1.1.1.1"});

    // Example 5: Over length
    runTest(5, "2552552552555", {});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
