#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [44. Minimum Number of K Consecutive Bit Flips] — Test Suite
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
    int result = sol.kBitFlips(arr, k);
    
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
    cout << "\n🔢 [44. Minimum Number of K Consecutive Bit Flips] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1}, 2, 4);

    // Example 2
    runTest(2, {0, 0, 1, 1, 1, 0, 0}, 3, -1);

    // Example 3
    runTest(3, {0, 1, 0}, 1, 2);

    // Example 4: All 1s
    runTest(4, {1, 1, 1}, 2, 0);

    // Example 5: All 0s, perfect fit
    runTest(5, {0, 0, 0, 0}, 2, 2);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
