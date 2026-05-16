#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [31. Number of Submatrix Have Sum X] — Test Suite
 */

void runTest(int id, vector<vector<int>> mat, int x, int expected) {
    Solution sol;
    int result = sol.countSquare(mat, x);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [31. Number of Submatrix Have Sum X] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    vector<vector<int>> mat1 = {
        {2, 4, 7, 8, 10},
        {3, 1, 1, 1, 1},
        {9, 11, 1, 2, 1},
        {12, -17, 1, 1, 1}
    };
    runTest(1, mat1, 10, 3);

    // Example 2
    vector<vector<int>> mat2 = {
        {3, 3, 5, 3},
        {2, 2, 2, 6},
        {11, 2, 2, 4}
    };
    runTest(2, mat2, 1, 0);

    // Example 3: Identity square
    vector<vector<int>> mat3 = {
        {1, 1},
        {1, 1}
    };
    runTest(3, mat3, 4, 1); // The 2x2 square
    runTest(4, mat3, 1, 4); // Four 1x1 squares

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
