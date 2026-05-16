#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> result;
        if (!root) return result;

        // Map to store nodes at each horizontal distance
        // unordered_map is faster than map (O(1) vs O(log N))
        unordered_map<int, vector<int>> hdMap;
        int minHD = 0, maxHD = 0;

        // BFS queue: {Node*, horizontalDistance}
        queue<pair<Node*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            pair<Node*, int> curr = q.front();
            q.pop();

            Node* node = curr.first;
            int hd = curr.second;

            // Store node data
            hdMap[hd].push_back(node->data);

            // Update boundaries
            minHD = min(minHD, hd);
            maxHD = max(maxHD, hd);

            if (node->left) q.push({node->left, hd - 1});
            if (node->right) q.push({node->right, hd + 1});
        }

        // Collect results in order from minHD to maxHD
        for (int i = minHD; i <= maxHD; i++) {
            if (hdMap.count(i)) {
                result.push_back(move(hdMap[i]));
            }
        }

        return result;
    }
};
