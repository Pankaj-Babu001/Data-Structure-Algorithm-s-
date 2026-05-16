#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [70. Stable Marriage Problem] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, int n, vector<vector<int>> men, vector<vector<int>> women, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.stableMarriage(men, women);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << formatVector(expected) << endl;
        cout << "     Got:      " << formatVector(result) << endl;
    }
}

int main() {
    cout << "\n🔢 [70. Stable Marriage Problem] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 2, {{0, 1}, {0, 1}}, {{0, 1}, {0, 1}}, {0, 1});

    // Example 2
    runTest(2, 3, {{0, 1, 2}, {0, 1, 2}, {0, 1, 2}}, {{2, 1, 0}, {2, 1, 0}, {2, 1, 0}}, {2, 1, 0});

    // Example 3: Swap preferences
    runTest(3, 2, {{1, 0}, {0, 1}}, {{0, 1}, {1, 0}}, {1, 0});

    // Example 4: All men want same woman
    runTest(4, 3, {{0, 1, 2}, {0, 1, 2}, {0, 1, 2}}, {{0, 1, 2}, {1, 2, 0}, {2, 0, 1}}, {0, 1, 2});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
