#include <bits/stdc++.h>
using namespace std;

class Solution {
    const int MOD = 1e9 + 7;
public:
    long long countStrings(int n) {
        if (n == 0) return 0;
        
        // ends0: valid strings of length i ending in 0
        // ends1: valid strings of length i ending in 1
        long long ends0 = 1;
        long long ends1 = 1;
        
        for (int i = 2; i <= n; i++) {
            long long prevEnds0 = ends0;
            ends0 = (ends0 + ends1) % MOD;
            ends1 = prevEnds0;
        }
        
        return (ends0 + ends1) % MOD;
    }
};
