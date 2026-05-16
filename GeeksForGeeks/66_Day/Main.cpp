#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [66. Print Diagonally (Anti-Diagonals)] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, int N, vector<vector<int>> mat, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.downwardDiagonal(N, mat);
    
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
    cout << "\n🔢 [66. Print Diagonally (Anti-Diagonals)] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 2, {{1, 2}, {3, 4}}, {1, 2, 3, 4});

    // Example 2
    runTest(2, 3, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {1, 2, 4, 3, 5, 7, 6, 8, 9});

    // Example 3: Single element
    runTest(3, 1, {{100}}, {100});

    // Example 4: 4x4 Matrix
    runTest(4, 4, {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    }, {1, 2, 5, 3, 6, 9, 4, 7, 10, 13, 8, 11, 14, 12, 15, 16});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
