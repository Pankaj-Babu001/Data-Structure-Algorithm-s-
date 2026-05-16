#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [01. Count Subset With Target Sum II] — Test Suite
 */

// Helper to format vector output
string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

// runTest function to validate the solution
void runTest(int id, vector<int> arr, int k, int expected) {
    Solution sol;
    int result = sol.countSubset(arr, k);
    
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
    cout << "\n🔢 [01. Count Subset With Target Sum II] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {1, 3, 2}, 3, 2);
    runTest(2, {4, 2, 3, 1, 2}, 4, 3);
    runTest(3, {10, 20, 30}, 25, 0);

    // Additional Edge Cases
    runTest(4, {0, 0, 0, 0}, 0, 16); // All subsets of zero sum to zero
    runTest(5, {1, -1, 1, -1}, 0, 6); // Includes negative numbers

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
