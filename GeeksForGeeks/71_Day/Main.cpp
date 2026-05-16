#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [71. Segregate 0s and 1s] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, vector<int> expected) {
    Solution sol;
    vector<int> result = arr;
    sol.segregate0and1(result);
    
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
    cout << "\n🔢 [71. Segregate 0s and 1s] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {0, 1, 0, 1, 0, 0, 1, 1, 1, 0}, {0, 0, 0, 0, 0, 1, 1, 1, 1, 1});

    // Example 2
    runTest(2, {1, 1, 1}, {1, 1, 1});

    // Example 3: All zeros
    runTest(3, {0, 0, 0}, {0, 0, 0});

    // Example 4: Mixed
    runTest(4, {1, 0, 1, 0, 1}, {0, 0, 1, 1, 1});

    // Example 5: Single element
    runTest(5, {1}, {1});
    runTest(6, {0}, {0});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
