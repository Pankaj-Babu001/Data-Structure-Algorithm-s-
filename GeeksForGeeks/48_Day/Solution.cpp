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
    void solve(Node* root, int k, long long currSum, unordered_map<long long, int>& prefixSums, int& count) {
        if (!root) return;

        currSum += root->data;

        // Number of subpaths ending at current node that sum to k
        if (prefixSums.count(currSum - k)) {
            count += prefixSums[currSum - k];
        }

        // Add current prefix sum to map
        prefixSums[currSum]++;

        // Recurse
        solve(root->left, k, currSum, prefixSums, count);
        solve(root->right, k, currSum, prefixSums, count);

        // Backtrack: remove current sum from path map
        prefixSums[currSum]--;
        if (prefixSums[currSum] == 0) {
            prefixSums.erase(currSum);
        }
    }

    int sumK(Node *root, int k) {
        unordered_map<long long, int> prefixSums;
        prefixSums[0] = 1; // Base case for paths starting from root
        int count = 0;
        solve(root, k, 0, prefixSums, count);
        return count;
    }
};
