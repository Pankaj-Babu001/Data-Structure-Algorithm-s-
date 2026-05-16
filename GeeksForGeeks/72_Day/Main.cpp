#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [72. Intersection of Two Sorted Arrays] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> a, vector<int> b, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.intersection(a, b);
    
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
    cout << "\n🔢 [72. Intersection of Two Sorted Arrays] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {1, 1, 2, 2, 2, 4}, {2, 2, 4, 4}, {2, 4});

    // Example 2
    runTest(2, {1, 2}, {3, 4}, {});

    // Example 3
    runTest(3, {1, 2, 3}, {1, 2, 3}, {1, 2, 3});

    // Example 4: Mixed sizes
    runTest(4, {10, 20, 30}, {5, 10, 15, 20, 25, 30, 35}, {10, 20, 30});

    // Example 5: Duplicates at boundaries
    runTest(5, {1, 1, 1}, {1, 1}, {1});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
