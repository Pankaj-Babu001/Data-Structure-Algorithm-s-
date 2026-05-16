#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Solution for First non-repeating character in a stream.
 * 
 * Time Complexity: O(N)
 * Space Complexity: O(1) (Queue stores max 26 characters)
 */
class Solution {
public:
    string firstNonRepeating(string s) {
        // Step 1: Initialize Structures
        vector<int> freq(26, 0);
        queue<char> q;
        string result = "";
        
        for (char c : s) {
            // Step 3: Track Frequency and Arrival Order
            freq[c - 'a']++;
            q.push(c);
            
            // Step 4: Maintain Uniqueness - Pop until a non-repeating char is at the front
            while (!q.empty() && freq[q.front() - 'a'] > 1) {
                q.pop();
            }
            
            // Step 5: Update Result
            if (q.empty()) {
                result += '#';
            } else {
                result += q.front();
            }
        }
        
        return result;
    }
};
