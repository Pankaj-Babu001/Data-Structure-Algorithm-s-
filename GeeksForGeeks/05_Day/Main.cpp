#include <iostream>
#include <vector>
#include <string>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [05. Maximum of all subarrays of size k] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.maxOfSubarrays(arr, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", k=" << k << endl;
        cout << "     Expected: " << formatVector(expected) << ", Got: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [05. Maximum of all subarrays of size k] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {1, 2, 3, 1, 4, 5, 2, 3, 6}, 3, {3, 3, 4, 5, 5, 5, 6});
    runTest(2, {5, 1, 3, 4, 2}, 1, {5, 1, 3, 4, 2});

    // Additional Edge Cases
    runTest(3, {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, 4, {10, 10, 10, 15, 15, 90, 90});
    runTest(4, {1, 2, 3, 4, 5}, 5, {5});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
