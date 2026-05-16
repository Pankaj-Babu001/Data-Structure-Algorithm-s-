#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [67. Gray Code] — Test Suite
 */

string formatVector(const vector<string>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += "\"" + vec[i] + "\"" + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, int n, vector<string> expected) {
    Solution sol;
    vector<string> result = sol.graycode(n);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << formatVector(expected) << endl;
        cout << "     Got:      " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [67. Gray Code] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 2, {"00", "01", "11", "10"});

    // Example 2
    runTest(2, 3, {"000", "001", "011", "010", "110", "111", "101", "100"});

    // Example 3: Single bit
    runTest(3, 1, {"0", "1"});

    // Example 4: check length of n=4
    Solution sol;
    vector<string> res4 = sol.graycode(4);
    if (res4.size() == 16) {
        cout << "  🔹 Test Case #4: ✅ PASSED (Length 16)" << endl;
    } else {
        cout << "  🔹 Test Case #4: ❌ FAILED (Length " << res4.size() << ")" << endl;
    }

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
