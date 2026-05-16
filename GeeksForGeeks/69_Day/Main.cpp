#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [69. Huffman Encoding] — Test Suite
 */

string formatVector(const vector<string>& vec) {
    string res = "[";
    for (int i = 0; i < vec.size(); i++) {
        res += "\"" + vec[i] + "\"" + (i == vec.size() - 1 ? "" : ", ");
    }
    return res + "]";
}

void runTest(int id, string S, vector<int> f, vector<string> expected) {
    Solution sol;
    vector<string> result = sol.huffmanCodes(S, f);
    
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
    cout << "\n🔢 [69. Huffman Encoding] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "abcdef", {5, 9, 12, 13, 16, 45}, {"0", "100", "101", "1100", "1101", "111"});

    // Example 2: Simple case
    runTest(2, "abc", {5, 9, 12}, {"0", "10", "11"}); // 5+9=14. 14+12=26. Root -> Left(12), Right(14). 14 -> Left(5), Right(9).
    // Wait, 12 is smaller than 14. So PQ pops 5, 9 first. parent(14). Then PQ has 12, 14. 
    // Pops 12, 14. Root -> Left(12), Right(14).
    // Preorder: root.left(12) -> "0". root.right(14).left(5) -> "10". root.right(14).right(9) -> "11".

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
