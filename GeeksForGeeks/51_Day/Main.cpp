#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [51. Largest BST] — Test Suite
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

void runTest(int id, string treeStr, int expected) {
    Node* root = buildTree(treeStr);
    Solution sol;
    int result = sol.largestBst(root);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input Tree: " << treeStr << endl;
        cout << "     Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    cout << "\n🔢 [51. Largest BST] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "5 2 4 1 3", 3);

    // Example 2
    runTest(2, "6 7 3 N 2 2 4", 3);

    // Example 3: Entire tree is BST
    runTest(3, "10 5 15 2 7 12 20", 7);

    // Example 4: No BST (except leaves)
    runTest(4, "1 2 3", 1);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
