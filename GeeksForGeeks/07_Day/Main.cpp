#include <iostream>
#include <vector>
#include <string>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [07. Stock Buy and Sell – Max one Transaction Allowed] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> prices, int expected) {
    Solution sol;
    int result = sol.maxProfit(prices);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: prices=" << formatVector(prices) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [07. Stock Buy and Sell – Max one Transaction Allowed] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {7, 10, 1, 3, 6, 9, 2}, 8);
    runTest(2, {7, 6, 4, 3, 1}, 0);
    runTest(3, {1, 3, 6, 9, 11}, 10);

    // Additional Case
    runTest(4, {2, 4, 1}, 2); // Price 1 comes after the max profit of 2 is already achievable

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
