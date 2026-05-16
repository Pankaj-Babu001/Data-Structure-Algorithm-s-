#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

struct Info {
    int size;
    int minVal;
    int maxVal;
    bool isBST;
};

class Solution {
    int maxSize;

    Info solve(Node* root) {
        if (!root) {
            return {0, INT_MAX, INT_MIN, true};
        }

        Info left = solve(root->left);
        Info right = solve(root->right);

        Info curr;
        curr.size = left.size + right.size + 1;

        // Validation for BST
        if (left.isBST && right.isBST && root->data > left.maxVal && root->data < right.minVal) {
            curr.isBST = true;
            curr.minVal = min(root->data, left.minVal);
            curr.maxVal = max(root->data, right.maxVal);
            maxSize = max(maxSize, curr.size);
        } else {
            curr.isBST = false;
            curr.size = -1; // Flag to indicate invalid BST
        }

        return curr;
    }

public:
    int largestBst(Node *root) {
        maxSize = 0;
        if (!root) return 0;
        solve(root);
        return maxSize;
    }
};
