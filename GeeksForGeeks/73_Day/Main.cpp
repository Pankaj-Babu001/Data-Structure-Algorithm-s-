#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [73. Sorted subsequence of size 3] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    if (vec.empty()) return "[]";
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

bool isValid(const vector<int>& res, const vector<int>& original) {
    if (res.empty()) return true; // Empty is valid if no subsequence exists
    if (res.size() != 3) return false;
    if (!(res[0] < res[1] && res[1] < res[2])) return false;
    
    // Check if res is a subsequence of original
    int j = 0;
    for (int i = 0; i < original.size() && j < 3; i++) {
        if (original[i] == res[j]) j++;
    }
    return j == 3;
}

void runTest(int id, vector<int> arr, bool expectedExists) {
    Solution sol;
    vector<int> result = sol.find3Numbers(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    bool exists = !result.empty();
    if (exists == expectedExists && isValid(result, arr)) {
        cout << "✅ PASSED (" << formatVector(result) << ")" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected Exists: " << (expectedExists ? "Yes" : "No") << endl;
        cout << "     Got: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [73. Sorted subsequence of size 3] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {12, 11, 10, 5, 6, 2, 30}, true);

    // Example 2
    runTest(2, {1, 2, 3, 4}, true);

    // Example 3
    runTest(3, {4, 3, 2, 1}, false);

    // Example 4: No valid subsequence
    runTest(4, {10, 5, 8, 3}, false);

    // Example 5: Large values
    runTest(5, {1, 100, 50, 150}, true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
