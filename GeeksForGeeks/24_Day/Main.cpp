#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [24. Largest Number Formed from an Array] — Test Suite
 */

string formatVector(const vector<string>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += vec[i] + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<string> arr, string expected) {
    Solution sol;
    string result = sol.printLargest(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [24. Largest Number Formed from an Array] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {"3", "30", "34", "5", "9"}, "9534330");

    // Example 2
    runTest(2, {"54", "546", "548", "60"}, "6054854654");

    // Example 3
    runTest(3, {"3", "4", "6", "5", "9"}, "96543");

    // Edge Case: All Zeros
    runTest(4, {"0", "0", "0"}, "0");

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
