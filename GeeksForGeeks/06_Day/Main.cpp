#include <iostream>
#include <vector>
#include <string>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [06. Max Circular Subarray Sum] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int expected) {
    Solution sol;
    int result = sol.circularSubarraySum(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [06. Max Circular Subarray Sum] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {8, -8, 9, -9, 10, -11, 12}, 22);
    runTest(2, {10, -3, -4, 7, 6, 5, -4, -1}, 23);
    runTest(3, {5, -2, 3, 4}, 12);

    // Edge Case: All Negatives
    runTest(4, {-3, -2, -10}, -2);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
