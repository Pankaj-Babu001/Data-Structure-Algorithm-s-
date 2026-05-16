#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data, index;
    Node *left, *right;
    Node(int d, int i) : data(d), index(i), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        if (a->data != b->data) return a->data > b->data;
        return a->index > b->index;
    }
};

class Solution {
    void preorder(Node* root, string s, vector<string>& res) {
        if (!root) return;
        if (!root->left && !root->right) {
            res.push_back(s);
            return;
        }
        preorder(root->left, s + "0", res);
        preorder(root->right, s + "1", res);
    }

public:
    vector<string> huffmanCodes(string S, vector<int> f) {
        int n = S.length();
        priority_queue<Node*, vector<Node*>, Compare> pq;
        
        for (int i = 0; i < n; i++) {
            pq.push(new Node(f[i], i));
        }

        int nextIdx = n;
        while (pq.size() > 1) {
            Node* left = pq.top(); pq.pop();
            Node* right = pq.top(); pq.pop();
            
            Node* parent = new Node(left->data + right->data, nextIdx++);
            parent->left = left;
            parent->right = right;
            pq.push(parent);
        }

        vector<string> res;
        preorder(pq.top(), "", res);
        return res;
    }
};
