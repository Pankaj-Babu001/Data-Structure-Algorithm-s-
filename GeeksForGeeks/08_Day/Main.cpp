#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [08. Last Moment Before All Ants Fall Out of a Plank] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    if (vec.empty()) return "[]";
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, int n, vector<int> left, vector<int> right, int expected) {
    Solution sol;
    int result = sol.getLastMoment(n, left, right);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: n=" << n << ", left=" << formatVector(left) << ", right=" << formatVector(right) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [08. Last Moment Before All Ants Fall Out of a Plank] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, 4, {4, 3}, {0, 1}, 4);
    runTest(2, 7, {}, {0, 1, 2, 3, 4, 5, 6, 7}, 7);
    runTest(3, 7, {0, 1, 2, 3, 4, 5, 6, 7}, {}, 7);

    // Additional Case
    runTest(4, 9, {5}, {4}, 5);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
