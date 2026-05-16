#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [28. Longest Span in two Binary Arrays] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> a1, vector<int> a2, int expected) {
    Solution sol;
    int result = sol.equalSumSpan(a1, a2);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: a1=" << formatVector(a1) << ", a2=" << formatVector(a2) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [28. Longest Span in two Binary Arrays] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {0, 1, 0, 0, 0, 0}, {1, 0, 1, 0, 0, 1}, 4);

    // Example 2
    runTest(2, {0, 1, 0, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 0, 1}, 6);

    // Example 3
    runTest(3, {0, 0, 0}, {1, 1, 1}, 0);

    // Edge Case: Identical arrays
    runTest(4, {1, 0, 1}, {1, 0, 1}, 3);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
