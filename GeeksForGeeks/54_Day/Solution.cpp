#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int freshCount = 0;
        queue<pair<int, int>> q;

        // Step 1: Scan for rotten and fresh oranges
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 2) {
                    q.push({i, j});
                } else if (mat[i][j] == 1) {
                    freshCount++;
                }
            }
        }

        if (freshCount == 0) return 0;

        // Step 2: Multi-source BFS
        int time = 0;
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty() && freshCount > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                pair<int, int> curr = q.front();
                q.pop();

                for (int d = 0; d < 4; d++) {
                    int nx = curr.first + dx[d];
                    int ny = curr.second + dy[d];

                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && mat[nx][ny] == 1) {
                        mat[nx][ny] = 2; // Rot it
                        freshCount--;
                        q.push({nx, ny});
                    }
                }
            }
            time++;
        }

        return (freshCount == 0) ? time : -1;
    }
};
