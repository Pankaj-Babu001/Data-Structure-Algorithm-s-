#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        if (n == 0) return 0;
        int m = mat[0].size();

        // Step 1: Precompute 2D Prefix Sum Array
        vector<vector<long long>> pre(n + 1, vector<long long>(m + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                pre[i][j] = mat[i-1][j-1] 
                          + pre[i-1][j] 
                          + pre[i][j-1] 
                          - pre[i-1][j-1];
            }
        }

        int count = 0;
        // Step 2: Check every square submatrix (side length k)
        for (int k = 1; k <= min(n, m); k++) {
            for (int i = 0; i + k <= n; i++) {
                for (int j = 0; j + k <= m; j++) {
                    int r2 = i + k - 1;
                    int c2 = j + k - 1;
                    
                    // O(1) sum calculation using prefix sums
                    long long currentSum = pre[r2+1][c2+1] 
                                         - pre[i][c2+1] 
                                         - pre[r2+1][j] 
                                         + pre[i][j];
                                         
                    if (currentSum == x) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};