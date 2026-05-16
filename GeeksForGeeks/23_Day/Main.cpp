#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [23. Missing Element in Range] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int low, int high, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.findMissing(arr, low, high);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", range=[" << low << ", " << high << "]" << endl;
        cout << "     Expected: " << formatVector(expected) << ", Got: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [23. Missing Element in Range] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {10, 12, 11, 15}, 10, 15, {13, 14});

    // Example 2
    runTest(2, {1, 4, 11, 51, 15}, 50, 55, {50, 52, 53, 54, 55});

    // Edge Case: All present
    runTest(3, {1, 2, 3}, 1, 3, {});

    // Edge Case: None present
    runTest(4, {10, 20, 30}, 1, 5, {1, 2, 3, 4, 5});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
