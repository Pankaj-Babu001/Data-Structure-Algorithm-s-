#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [47. Vertical Tree Traversal] — Test Suite
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

void runTest(int id, string treeStr, vector<vector<int>> expected) {
    Node* root = buildTree(treeStr);
    Solution sol;
    vector<vector<int>> result = sol.verticalOrder(root);
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input Tree: " << treeStr << endl;
    }
}

int main() {
    cout << "\n🔢 [47. Vertical Tree Traversal] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "1 2 3 4 5 6 7", {{4}, {2}, {1, 5, 6}, {3}, {7}});

    // Example 2
    runTest(2, "1 2 3 4 5 N 6", {{4}, {2}, {1, 5}, {3}, {6}});

    // Example 3: Deep tree
    runTest(3, "1 2 N 3 N 4", {{4}, {3}, {2}, {1}});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
