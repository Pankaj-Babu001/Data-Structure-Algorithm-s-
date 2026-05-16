#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [60. Articulation Point - II] — Test Suite
 */

string formatVector(const vector<int>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += to_string(vec[i]) + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, int V, vector<vector<int>> edges, vector<int> expected) {
    Solution sol;
    vector<int> result = sol.articulationPoints(V, edges);
    
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
    cout << "\n🔢 [60. Articulation Point - II] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, 5, {{0, 1}, {1, 4}, {4, 3}, {4, 2}, {2, 3}}, {1, 4});

    // Example 2
    runTest(2, 4, {{0, 1}, {0, 2}}, {0});

    // Example 3: Triangle (No AP)
    runTest(3, 3, {{0, 1}, {1, 2}, {2, 0}}, {-1});

    // Example 4: Star graph
    runTest(4, 5, {{0, 1}, {0, 2}, {0, 3}, {0, 4}}, {0});

    // Example 5: Disconnected components
    runTest(5, 6, {{0, 1}, {1, 2}, {3, 4}, {4, 5}}, {1, 4});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
