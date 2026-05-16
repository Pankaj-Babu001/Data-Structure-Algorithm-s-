#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [11. Max sum in the configuration] — Test Suite
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
    long long result = sol.maxSum(arr);
    
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
    cout << "\n🔢 [11. Max sum in the configuration] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {3, 1, 2, 8}, 29);
    runTest(2, {1, 2, 3}, 8);
    runTest(3, {4, 13}, 13);

    // Additional Edge Case
    runTest(4, {1, 1, 1, 1}, 6); // Any rotation gives 0*1+1*1+2*1+3*1 = 6

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
