#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [10. Happiest Triplet] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> a, vector<int> b, vector<int> c, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.smallestDiff(a, b, c);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << formatVector(expected) << ", Got: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [10. Happiest Triplet] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {5, 2, 8}, {10, 7, 12}, {9, 14, 6}, {7, 6, 5});
    runTest(2, {15, 12, 18, 9}, {10, 17, 13, 8}, {14, 16, 11, 5}, {11, 10, 9});

    // Additional Edge Case
    runTest(3, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
