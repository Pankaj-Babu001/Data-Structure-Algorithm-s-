#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [21. Maximum number of overlapping Intervals] — Test Suite
 */

string formatIntervals(const vector<vector<int>>& arr) {
    string res = "[";
    for (int i = 0; i < arr.size(); i++) {
        res += "[" + to_string(arr[i][0]) + ", " + to_string(arr[i][1]) + "]" + (i == arr.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<vector<int>> arr, int expected) {
    Solution sol;
    int result = sol.overlapInt(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatIntervals(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [21. Maximum number of overlapping Intervals] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {{1, 2}, {2, 4}, {3, 6}}, 2);

    // Example 2
    runTest(2, {{1, 8}, {2, 5}, {5, 6}, {3, 7}}, 4);

    // Edge Case: No overlaps
    runTest(3, {{1, 2}, {3, 4}, {5, 6}}, 1);

    // Edge Case: Touching at boundary (Inclusive overlap)
    runTest(4, {{1, 5}, {5, 10}}, 2);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
