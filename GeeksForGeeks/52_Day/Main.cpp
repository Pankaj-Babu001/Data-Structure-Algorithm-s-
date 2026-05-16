#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [52. Predecessor and Successor] — Test Suite
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

void runTest(int id, string treeStr, int key, pair<int, int> expected) {
    Node* root = buildTree(treeStr);
    Solution sol;
    Node *pre = nullptr, *suc = nullptr;
    sol.findPreSuc(root, pre, suc, key);
    
    int preVal = pre ? pre->data : -1;
    int sucVal = suc ? suc->data : -1;
    
    cout << "  🔹 Test Case #" << id << ": ";
    if (preVal == expected.first && sucVal == expected.second) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED" << endl;
        cout << "     Input Tree: " << treeStr << ", Key: " << key << endl;
        cout << "     Expected: [" << expected.first << ", " << expected.second << "]" << endl;
        cout << "     Got:      [" << preVal << ", " << sucVal << "]" << endl;
    }
}

int main() {
    cout << "\n🔢 [52. Predecessor and Successor] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    // Example 1
    runTest(1, "50 30 70 20 40 60 80", 65, {60, 70});

    // Example 2
    runTest(2, "8 1 9 N 4 N 10 3", 8, {4, 9});

    // Example 3: Key not in tree, but has pre/suc
    runTest(3, "10 5 15", 7, {5, 10});

    // Example 4: No predecessor
    runTest(4, "10 5 15", 2, {-1, 5});

    // Example 5: No successor
    runTest(5, "10 5 15", 20, {15, -1});

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
