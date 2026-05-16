#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> stableMarriage(vector<vector<int>>& men, vector<vector<int>>& women) {
        int n = men.size();
        
        // rank[w][m] stores the preference rank of man m for woman w
        vector<vector<int>> rank(n, vector<int>(n));
        for (int w = 0; w < n; w++) {
            for (int r = 0; r < n; r++) {
                rank[w][women[w][r]] = r;
            }
        }

        vector<int> menPartner(n, -1);
        vector<int> womenPartner(n, -1);
        vector<int> nextProposal(n, 0);
        queue<int> freeMen;

        for (int i = 0; i < n; i++) freeMen.push(i);

        while (!freeMen.empty()) {
            int m = freeMen.front();
            int w = men[m][nextProposal[m]++];
            
            if (womenPartner[w] == -1) {
                womenPartner[w] = m;
                menPartner[m] = w;
                freeMen.pop();
            } else {
                int currentM = womenPartner[w];
                if (rank[w][m] < rank[w][currentM]) {
                    womenPartner[w] = m;
                    menPartner[m] = w;
                    freeMen.pop();
                    
                    menPartner[currentM] = -1;
                    freeMen.push(currentM);
                }
            }
        }
        
        return menPartner;
    }
};
