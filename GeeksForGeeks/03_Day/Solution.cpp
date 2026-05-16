#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rearrangeQueue(queue<int> &q) {
        if (q.empty()) return;

        int n = q.size();
        int half = n / 2;
        stack<int> s;

        // Step 1: Move First Half to Stack
        for (int i = 0; i < half; ++i) {
            s.push(q.front());
            q.pop();
        }

        // Step 2: Reverse into Queue
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }

        // Step 3: Reposition Second Half to the back
        for (int i = 0; i < half; ++i) {
            q.push(q.front());
            q.pop();
        }

        // Step 4: Prepare for Interleaving - Push first half back to stack
        for (int i = 0; i < half; ++i) {
            s.push(q.front());
            q.pop();
        }

        // Step 5: Interleave Stack and Queue
        while (!s.empty()) {
            // Push from Stack (First Half)
            q.push(s.top());
            s.pop();

            // Push from Queue (Second Half)
            q.push(q.front());
            q.pop();
        }
    }
};
