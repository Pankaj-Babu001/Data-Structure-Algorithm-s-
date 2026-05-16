#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [34. Trapping Rain Water] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int expected) {
    Solution sol;
    int result = sol.maxWater(arr);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input:    " << formatVector(arr) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [34. Trapping Rain Water] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {3, 0, 1, 0, 4, 0, 2}, 10);

    // Example 2
    runTest(2, {3, 0, 2, 0, 4}, 7);

    // Example 3
    runTest(3, {1, 2, 3, 4}, 0);

    // Example 4
    runTest(4, {2, 1, 5, 3, 1, 0, 4}, 9);

    // Edge Case: Small array
    runTest(5, {5, 2, 5}, 3);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
