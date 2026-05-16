#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [35. Longest subarray with Atmost two distinct integers] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int expected) {
    Solution sol;
    int result = sol.totalElements(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [35. Longest subarray with Atmost two distinct integers] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 1, 2}, 3);

    // Example 2
    runTest(2, {3, 1, 2, 2, 2, 2}, 5);

    // Example 3: All distinct
    runTest(3, {1, 2, 3, 4}, 2);

    // Example 4: All same
    runTest(4, {1, 1, 1, 1}, 4);

    // Edge Case: Single element
    runTest(5, {7}, 1);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
