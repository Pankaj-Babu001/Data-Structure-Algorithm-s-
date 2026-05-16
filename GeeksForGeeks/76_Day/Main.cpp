#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [76. Next Smallest Palindrome] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "";
    for (int x : vec) res += to_string(x);
    return res;
}

void runTest(int id, vector<int> num, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.nextPalindrome(num);
    
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
    cout << "\n🔢 [76. Next Smallest Palindrome] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {2, 3, 5, 4, 5}, {2, 3, 6, 3, 2});

    // Example 2
    runTest(2, {9, 9, 9}, {1, 0, 0, 1});

    // Example 3: Even length
    runTest(3, {1, 2, 3, 4}, {1, 3, 3, 1});

    // Example 4: Large test
    runTest(4, {9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2}, {9, 4, 1, 8, 8, 0, 8, 8, 1, 4, 9});

    // Example 5: Middle is 9
    runTest(5, {1, 9, 1}, {2, 0, 2});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
