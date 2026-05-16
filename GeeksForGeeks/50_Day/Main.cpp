#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [50. Distribute Candies in a Binary Tree] — Test Suite
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
    int result = sol.distributeCandies(root);
    
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
    cout << "\n🔢 [50. Distribute Candies in a Binary Tree] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "5 0 0 N N 0 0", 6);

    // Example 2
    runTest(2, "2 0 0 N N 3 0", 4);

    // Example 3: Balanced tree
    runTest(3, "1 1 1", 0);

    // Example 4: All candies at one leaf
    runTest(4, "0 0 0 4 0", 6); // 4->(3 moves to root's left child)->...

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
