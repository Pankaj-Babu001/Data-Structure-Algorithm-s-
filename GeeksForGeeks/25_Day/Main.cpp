#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [25. Find H-Index] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> citations, int expected) {
    Solution sol;
    int result = sol.hIndex(citations);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatVector(citations) << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [25. Find H-Index] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {3, 0, 5, 3, 0}, 3);

    // Example 2
    runTest(2, {5, 1, 2, 4, 1}, 2);

    // Example 3
    runTest(3, {0, 0}, 0);

    // Edge Case: Single paper
    runTest(4, {100}, 1);

    // Edge Case: All same
    runTest(5, {4, 4, 4, 4}, 4);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
