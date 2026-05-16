#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [42. Subarrays with First Element Minimum] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, long long expected) {
    Solution sol;
    long long result = sol.countSubarrays(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [42. Subarrays with First Element Minimum] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 2, 1}, 5);

    // Example 2
    runTest(2, {1, 3, 5, 2}, 8);

    // Example 3: Strictly increasing
    runTest(3, {1, 2, 3, 4}, 10); // 4 + 3 + 2 + 1

    // Example 4: Strictly decreasing
    runTest(4, {4, 3, 2, 1}, 4); // Only [4], [3], [2], [1]

    // Example 5: Same elements
    runTest(5, {2, 2, 2}, 6); // 3 + 2 + 1

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
