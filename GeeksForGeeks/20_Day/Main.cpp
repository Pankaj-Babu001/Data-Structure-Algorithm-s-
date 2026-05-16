#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [20. Meeting Rooms] — Test Suite
 */

string formatIntervals(const vector<vector<int>>& arr) {
    string res = "[";
    for (int i = 0; i < arr.size(); i++) {
        res += "[" + to_string(arr[i][0]) + ", " + to_string(arr[i][1]) + "]" + (i == arr.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<vector<int>> arr, bool expected) {
    Solution sol;
    bool result = sol.canAttend(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatIntervals(arr) << endl;
        cout << "     Expected: " << (expected ? "true" : "false") << ", Got: " << (result ? "true" : "false") << endl;
    }
}

int main() {
    cout << "\n🔢 [20. Meeting Rooms] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {{1, 4}, {10, 15}, {7, 10}}, true);

    // Example 2
    runTest(2, {{2, 4}, {9, 12}, {6, 10}}, false);

    // Edge Case: Empty
    runTest(3, {}, true);

    // Edge Case: Adjacent touching (Allowed)
    runTest(4, {{1, 5}, {5, 10}}, true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
