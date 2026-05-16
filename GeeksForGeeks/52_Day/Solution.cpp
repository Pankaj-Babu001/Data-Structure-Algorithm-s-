#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
        pre = nullptr;
        suc = nullptr;

        // Find Successor: Smallest value > key
        Node* curr = root;
        while (curr) {
            if (curr->data > key) {
                suc = curr;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        // Find Predecessor: Largest value < key
        curr = root;
        while (curr) {
            if (curr->data < key) {
                pre = curr;
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
    }
};
