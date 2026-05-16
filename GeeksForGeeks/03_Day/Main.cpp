#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [03. Interleave the First Half of the Queue with Second Half] — Test Suite
 */

// Helper to format queue as string for printing
string formatQueue(queue<int> q) {
    string res = "[";
    while (!q.empty()) {
        res += to_string(q.front()) + (q.size() == 1 ? "" : ", ");
        q.pop();
    }
    return res + "]";
}

// runTest function to validate the solution
void runTest(int id, vector<int> input, vector<int> expected_vec) {
    queue<int> q;
    for (int x : input) q.push(x);
    
    Solution sol;
    sol.rearrangeQueue(q);
    
    // Convert result queue back to vector for comparison
    vector<int> result_vec;
    queue<int> temp_q = q;
    while (!temp_q.empty()) {
        result_vec.push_back(temp_q.front());
        temp_q.pop();
    }

    cout << "  🔹 Test Case #" << id << ": ";
    if (result_vec == expected_vec) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input: " << formatQueue(q) << endl; // Note: q is modified, but we can't easily show original without copy
        cout << "     Got: " << formatQueue(q) << endl;
    }
}

int main() {
    cout << "\n🔢 [03. Interleave the First Half of the Queue with Second Half] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Manually encoded examples from Problem Description
    runTest(1, {2, 4, 3, 1}, {2, 3, 4, 1});
    runTest(2, {3, 5}, {3, 5});

    // Additional Edge Cases
    runTest(3, {1, 2, 3, 4, 5, 6}, {1, 4, 2, 5, 3, 6});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
