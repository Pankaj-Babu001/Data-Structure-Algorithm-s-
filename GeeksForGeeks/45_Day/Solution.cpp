#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(string& s, int idx, int count, string current, vector<string>& res) {
        int n = s.length();
        
        // Base case: exactly 4 segments found
        if (count == 4) {
            if (idx == n) {
                // Remove trailing dot
                current.pop_back();
                res.push_back(current);
            }
            return;
        }

        // Optimization: if remaining characters are too many or too few
        int remaining = n - idx;
        if (remaining < (4 - count) || remaining > (4 - count) * 3) {
            return;
        }

        string segment = "";
        for (int len = 1; len <= 3 && idx + len <= n; len++) {
            segment += s[idx + len - 1];
            
            // Check leading zero
            if (segment.length() > 1 && segment[0] == '0') break;
            
            // Check value range
            int val = stoi(segment);
            if (val >= 0 && val <= 255) {
                solve(s, idx + len, count + 1, current + segment + ".", res);
            }
        }
    }

    vector<string> generateIp(string& s) {
        vector<string> res;
        int n = s.length();
        if (n < 4 || n > 12) return res;

        solve(s, 0, 0, "", res);
        return res;
    }
};