#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [53. Number of BST From Array] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.countBSTs(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(arr) << endl;
        cout << "     Expected: " << formatVector(expected) << endl;
        cout << "     Got:      " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [53. Number of BST From Array] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 1, 3}, {1, 2, 2});

    // Example 2
    runTest(2, {2, 1}, {1, 1});

    // Example 3: Size 4
    runTest(3, {1, 2, 3, 4}, {5, 2, 2, 5}); // C0*C3, C1*C2, C2*C1, C3*C0 -> 1*5, 1*2, 2*1, 5*1

    // Example 4: Single element
    runTest(4, {10}, {1});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
