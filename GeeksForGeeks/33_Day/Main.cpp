#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [33. Move All Zeroes to End] — Test Suite
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
    vector<int> original = arr;
    sol.pushZerosToEnd(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (arr == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(original) << endl;
        cout << "     Expected: " << formatVector(expected) << endl;
        cout << "     Got:      " << formatVector(arr) << endl;
    }
}

int main() {
    cout << "\n🔢 [33. Move All Zeroes to End] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 2, 0, 4, 3, 0, 5, 0}, {1, 2, 4, 3, 5, 0, 0, 0});

    // Example 2
    runTest(2, {10, 20, 30}, {10, 20, 30});

    // Example 3
    runTest(3, {0, 0}, {0, 0});

    // Edge Case: All zeroes
    runTest(4, {0, 0, 0, 0}, {0, 0, 0, 0});

    // Edge Case: Zeroes at start
    runTest(5, {0, 0, 1, 2}, {1, 2, 0, 0});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
