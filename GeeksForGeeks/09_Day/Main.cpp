#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [09. Maximize Number of 1's] — Test Suite
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
    int result = sol.maxOnes(arr, k);
    
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
    cout << "\n🔢 [09. Maximize Number of 1's] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {1, 0, 1}, 1, 3);
    runTest(2, {1, 0, 0, 1, 0, 1, 0, 1}, 2, 5);
    runTest(3, {1, 1}, 2, 2);

    // Edge Case: All zeros
    runTest(4, {0, 0, 0}, 1, 1);
    runTest(5, {1, 1, 1}, 0, 3);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
