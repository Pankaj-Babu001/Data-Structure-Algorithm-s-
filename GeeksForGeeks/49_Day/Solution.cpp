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
    int minTime(Node* root, int target) {
        if (!root) return 0;

        // Step 1: Build Parent Map and find Target Node
        unordered_map<Node*, Node*> parentMap;
        Node* targetNode = nullptr;
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            
            if (curr->data == target) targetNode = curr;
            
            if (curr->left) {
                parentMap[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parentMap[curr->right] = curr;
                q.push(curr->right);
            }
        }

        if (!targetNode) return 0;

        // Step 2: BFS to simulate burning
        unordered_map<Node*, bool> visited;
        q.push(targetNode);
        visited[targetNode] = true;
        int time = 0;

        while (!q.empty()) {
            int size = q.size();
            bool burntAny = false;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                // Check left, right, and parent
                vector<Node*> neighbors = {curr->left, curr->right, parentMap[curr]};
                for (Node* neighbor : neighbors) {
                    if (neighbor && !visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                        burntAny = true;
                    }
                }
            }

            if (burntAny) time++;
        }

        return time;
    }
};
