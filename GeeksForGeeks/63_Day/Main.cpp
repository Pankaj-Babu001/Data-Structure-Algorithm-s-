#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [63. Buy Stock with Transaction Fee] — Test Suite
 */

void runTest(int id, vector<int> arr, int k, long long expected) {
    Solution sol;
    long long result = sol.maxProfit(arr, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Fee: " << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [63. Buy Stock with Transaction Fee] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {6, 1, 7, 2, 8, 4}, 2, 8);

    // Example 2
    runTest(2, {7, 1, 5, 3, 6, 4}, 1, 5);

    // Example 3: Constant prices
    runTest(3, {5, 5, 5, 5}, 1, 0);

    // Example 4: Decreasing prices
    runTest(4, {5, 4, 3, 2, 1}, 1, 0);

    // Example 5: High fee
    runTest(5, {1, 10, 1, 10}, 20, 0);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
