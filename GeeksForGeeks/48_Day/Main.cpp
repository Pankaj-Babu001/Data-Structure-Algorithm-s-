#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [48. K Sum Paths] — Test Suite
 */

Node* buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N') return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string s; iss >> s;) ip.push_back(s);
    Node* root = new Node(stoi(ip[0]));
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < ip.size()) {
        Node* curr = q.front();
        q.pop();
        if (ip[i] != "N") {
            curr->left = new Node(stoi(ip[i]));
            q.push(curr->left);
        }
        i++;
        if (i >= ip.size()) break;
        if (ip[i] != "N") {
            curr->right = new Node(stoi(ip[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

void runTest(int id, string treeStr, int k, int expected) {
    Node* root = buildTree(treeStr);
    Solution sol;
    int result = sol.sumK(root, k);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input Tree: " << treeStr << ", k=" << k << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [48. K Sum Paths] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "8 4 5 3 2 N 2 3 -2 N 1", 7, 3);

    // Example 2
    runTest(2, "1 2 3", 3, 2);

    // Example 3: Path starting and ending deep
    runTest(3, "1 N 2 N 3 N 4", 7, 1); // 3+4

    // Example 4: Negative values
    runTest(4, "1 -2 3", -1, 1); // 1+(-2)

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
