#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [14. Koko Eating Bananas] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, vector<int> piles, int h, int expected) {
    Solution sol;
    int result = sol.kokoEat(piles, h);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: piles=" << formatVector(piles) << ", h=" << h << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [14. Koko Eating Bananas] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {5, 10, 3}, 4, 5);
    runTest(2, {5, 10, 15, 20}, 7, 10);

    // Additional Edge Case
    runTest(3, {30, 11, 23, 4, 20}, 5, 30);
    runTest(4, {30, 11, 23, 4, 20}, 6, 23);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
