#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [32. Find the closest pair from two arrays] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr1, vector<int> arr2, int x, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.findClosestPair(arr1, arr2, x);
    
    // The driver code expects us to compare the difference, but we return the pair.
    // There might be multiple correct pairs. We check the sum difference.
    int resDiff = abs(result[0] + result[1] - x);
    int expDiff = abs(expected[0] + expected[1] - x);

    cout << "  🔹 Test Case #" << id << ": ";
    if (resDiff == expDiff) {
        cout << "✅ PASSED (Pair: " << formatVector(result) << ")" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected Diff: " << expDiff << ", Got: " << resDiff << endl;
        cout << "     Got Pair: " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [32. Find the closest pair from two arrays] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 4, 5, 7}, {10, 20, 30, 40}, 32, {1, 30});

    // Example 2
    runTest(2, {1, 4, 5, 7}, {10, 20, 30, 40}, 50, {7, 40});

    // Example 3: Exact match
    runTest(3, {1, 2, 3}, {10, 20, 30}, 22, {2, 20});

    // Example 4: Single element
    runTest(4, {1}, {10}, 5, {1, 10});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
