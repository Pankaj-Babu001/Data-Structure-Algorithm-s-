#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

class Solution {
    int totalMoves;

    int solve(Node* root) {
        if (!root) return 0;

        // Post-order DFS
        int leftExcess = solve(root->left);
        int rightExcess = solve(root->right);

        // Every excess or deficit must cross the edge to the parent
        totalMoves += abs(leftExcess) + abs(rightExcess);

        // Current node's balance: (its own candies + children's excess) - 1 required candy
        return root->data + leftExcess + rightExcess - 1;
    }

public:
    int distributeCandies(Node* root) {
        totalMoves = 0;
        solve(root);
        return totalMoves;
    }
};