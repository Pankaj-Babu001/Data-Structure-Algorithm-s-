#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        vector<int> result;
        
        // Phase 1: Start from the first row
        for (int col = 0; col < N; col++) {
            int r = 0, c = col;
            while (r < N && c >= 0) {
                result.push_back(A[r][c]);
                r++;
                c--;
            }
        }
        
        // Phase 2: Start from the last column (skip first row element)
        for (int row = 1; row < N; row++) {
            int r = row, c = N - 1;
            while (r < N && c >= 0) {
                result.push_back(A[r][c]);
                r++;
                c--;
            }
        }
        
        return result;
    }
};
