#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [27. Union of Arrays with Duplicates] — Test Suite
 */

string formatVector(vector<int> vec) {
    sort(vec.begin(), vec.end());
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> a, vector<int> b, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.findUnion(a, b);
    
    // Sort for comparison
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << formatVector(expected) << ", Got: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [27. Union of Arrays with Duplicates] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 2, 3, 2, 1}, {3, 2, 2, 3, 3, 2}, {1, 2, 3});

    // Example 2
    runTest(2, {1, 2, 3}, {4, 5, 6}, {1, 2, 3, 4, 5, 6});

    // Example 3
    runTest(3, {1, 2, 1, 1, 2}, {2, 2, 1, 2, 1}, {1, 2});

    // Edge Case: Empty
    runTest(4, {}, {1, 1, 2}, {1, 2});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
