#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [40. Pythagorean Triplet] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, bool expected) {
    Solution sol;
    bool result = sol.pythagoreanTriplet(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(arr) << endl;
        cout << "     Expected: " << (expected ? "true" : "false") << ", Got: " << (result ? "true" : "false") << endl;
    }
}

int main() {
    cout << "\n🔢 [40. Pythagorean Triplet] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {3, 2, 4, 6, 5}, true);

    // Example 2
    runTest(2, {3, 8, 5}, false);

    // Example 3
    runTest(3, {1, 1, 1}, false);

    // Example 4: Large array, small values
    vector<int> largeArr(10000, 10);
    largeArr.push_back(6);
    largeArr.push_back(8);
    runTest(4, largeArr, true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
