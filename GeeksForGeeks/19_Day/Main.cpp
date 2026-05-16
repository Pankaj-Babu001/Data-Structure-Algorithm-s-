#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [19. Chocolate Distribution Problem] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> arr, long long m, long long expected) {
    Solution sol;
    long long result = sol.findMinDiff(arr, m);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: arr=" << formatVector(arr) << ", m=" << m << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [19. Chocolate Distribution Problem] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {3, 4, 1, 9, 56, 7, 9, 12}, 5, 6);

    // Example 2
    runTest(2, {7, 3, 2, 4, 9, 12, 56}, 3, 2);

    // Example 3
    runTest(3, {3, 4, 1, 9, 56}, 5, 55);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
