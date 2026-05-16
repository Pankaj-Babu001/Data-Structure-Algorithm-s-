#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [43. Sum of subarray minimums] — Test Suite
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
    int result = sol.sumSubMins(arr);
    
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
    cout << "\n🔢 [43. Sum of subarray minimums] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, {10, 20}, 40);

    // Example 2
    runTest(2, {1, 2, 3, 4}, 20);

    // Example 3
    runTest(3, {3, 1, 2, 4}, 17);

    // Example 4: Single element
    runTest(4, {5}, 5);

    // Example 5: Duplicate elements
    runTest(5, {2, 1, 2}, 6); // [2], [1], [2], [2,1], [1,2], [2,1,2] -> 2+1+2+1+1+1 = 8?
    // Let's check manually: 
    // Subarrays: [2], [1], [2], [2,1], [1,2], [2,1,2]
    // Mins: 2, 1, 2, 1, 1, 1. Sum = 8.
    // My code logic:
    // i=0: arr[0]=2, left=1, right=1. Contrib = 2*1*1 = 2
    // i=1: arr[1]=1, left=2, right=2. Contrib = 1*2*2 = 4
    // i=2: arr[2]=2, left=1, right=1. Contrib = 2*1*1 = 2
    // Total = 2 + 4 + 2 = 8. Correct.
    runTest(5, {2, 1, 2}, 8);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
