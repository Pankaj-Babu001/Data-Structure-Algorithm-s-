#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> graycode(int n) {
        vector<string> res;
        int total = 1 << n;
        
        for (int i = 0; i < total; i++) {
            int val = i ^ (i >> 1);
            string s = "";
            for (int j = n - 1; j >= 0; j--) {
                s += ((val >> j) & 1) ? '1' : '0';
            }
            res.push_back(s);
        }
        
        return res;
    }
};
