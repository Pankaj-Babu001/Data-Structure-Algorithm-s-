#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [22. Count Inversions] — Test Suite
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
    long long result = sol.inversionCount(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [22. Count Inversions] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 4, 1, 3, 5}, 3);

    // Example 2
    runTest(2, {2, 3, 4, 5, 6}, 0);

    // Example 3
    runTest(3, {10, 10, 10}, 0);

    // Edge Case: Reverse Sorted
    runTest(4, {5, 4, 3, 2, 1}, 10);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
