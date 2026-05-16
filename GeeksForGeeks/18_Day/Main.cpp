#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [18. The Painter's Partition Problem-II] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, int k, long long expected) {
    Solution sol;
    long long result = sol.minTime(arr, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", k=" << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [18. The Painter's Partition Problem-II] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {5, 10, 30, 20, 15}, 3, 35);

    // Example 2
    runTest(2, {10, 20, 30, 40}, 2, 60);

    // Example 3
    runTest(3, {100, 200, 300, 400}, 1, 1000);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
