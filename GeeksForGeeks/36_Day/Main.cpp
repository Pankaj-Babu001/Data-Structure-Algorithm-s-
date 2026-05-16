#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [36. Max Xor Subarray of size K] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, int expected) {
    Solution sol;
    int result = sol.maxSubarrayXOR(arr, k);
    
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
    cout << "\n🔢 [36. Max Xor Subarray of size K] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 5, 8, 1, 1, 3}, 3, 15);

    // Example 2
    runTest(2, {1, 2, 4, 5, 6}, 2, 6);

    // Example 3: Entire array
    runTest(3, {1, 2, 3}, 3, 0);

    // Example 4: Single element
    runTest(4, {10, 20, 30}, 1, 30);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
