#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        // Step 1: Count papers for each citation count (clamp at n)
        vector<int> cnt(n + 1, 0);
        for (int c : citations) {
            cnt[min(c, n)]++;
        }

        int papers = 0;
        // Step 2: Traverse from highest possible H down to 0
        for (int h = n; h >= 0; h--) {
            papers += cnt[h];
            if (papers >= h) {
                return h;
            }
        }
        return 0;
    }
};
