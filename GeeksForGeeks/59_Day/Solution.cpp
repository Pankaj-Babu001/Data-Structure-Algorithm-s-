#include <bits/stdc++.h>
using namespace std;

class Solution {
    int memo[71][71][71];

    int solve(int r, int c1, int c2, int n, int m, vector<vector<int>>& grid) {
        // Out of bounds
        if (c1 < 0 || c1 >= m || c2 < 0 || c2 >= m) return -1e8;
        
        // Base case: Last row
        if (r == n - 1) {
            return (c1 == c2) ? grid[r][c1] : (grid[r][c1] + grid[r][c2]);
        }

        if (memo[r][c1][c2] != -1) return memo[r][c1][c2];

        int maxChoc = 0;
        // 9 possible combinations of moves for Robot 1 and Robot 2
        for (int dj1 = -1; dj1 <= 1; dj1++) {
            for (int dj2 = -1; dj2 <= 1; dj2++) {
                maxChoc = max(maxChoc, solve(r + 1, c1 + dj1, c2 + dj2, n, m, grid));
            }
        }

        int current = (c1 == c2) ? grid[r][c1] : (grid[r][c1] + grid[r][c2]);
        return memo[r][c1][c2] = current + maxChoc;
    }

public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        memset(memo, -1, sizeof(memo));
        return solve(0, 0, m - 1, n, m, grid);
    }
};
