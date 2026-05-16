#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [26. Count Subarrays with given XOR] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, long long expected) {
    Solution sol;
    long long result = sol.subarrayXor(arr, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", k=" << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [26. Count Subarrays with given XOR] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {4, 2, 2, 6, 4}, 6, 4);

    // Example 2
    runTest(2, {5, 6, 7, 8, 9}, 5, 2);

    // Example 3
    runTest(3, {1, 1, 1, 1}, 0, 4);

    // Edge Case: k = 0, all same
    runTest(4, {5, 5, 5, 5}, 0, 4);

    // Edge Case: Single element
    runTest(5, {7}, 7, 1);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
