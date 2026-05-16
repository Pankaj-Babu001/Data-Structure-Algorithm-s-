#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [15. Equalize the Towers] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> h, vector<int> cost, long long expected) {
    Solution sol;
    long long result = sol.minCost(h, cost);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [15. Equalize the Towers] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {1, 2, 3}, {10, 100, 1000}, 120);
    runTest(2, {7, 1, 5}, {1, 1, 1}, 6);

    // Edge Case: All towers same height
    runTest(3, {5, 5, 5}, {10, 20, 30}, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
