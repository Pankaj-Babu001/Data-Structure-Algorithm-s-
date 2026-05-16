#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [12. Maximum Product Subarray] — Test Suite
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
    long long result = sol.maxProduct(arr);
    
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
    cout << "\n🔢 [12. Maximum Product Subarray] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {-2, 6, -3, -10, 0, 2}, 180);
    runTest(2, {-1, -3, -10, 0, 6}, 30);
    runTest(3, {2, 3, 4}, 24);

    // Edge Case: Single negative element
    runTest(4, {-5}, -5);
    // Edge Case: All zeros
    runTest(5, {0, 0, 0}, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
