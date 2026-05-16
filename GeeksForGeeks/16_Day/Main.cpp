#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [16. Max min Height] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, int w, long long expected) {
    Solution sol;
    long long result = sol.maxMinHeight(arr, k, w);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", k=" << k << ", w=" << w << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [16. Max min Height] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 3, 4, 5, 1}, 2, 2, 2);

    // Example 2
    runTest(2, {5, 8}, 5, 1, 9);

    // Additional Edge Case: All same, limited k
    runTest(3, {10, 10, 10}, 1, 3, 11);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
